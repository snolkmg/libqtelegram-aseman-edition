// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEACTION_OBJECT
#define LQTG_TYPE_MESSAGEACTION_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messageaction.h"

#include <QPointer>
#include "photoobject.h"

class LIBQTELEGRAMSHARED_EXPORT MessageActionObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessageActionType)
    Q_PROPERTY(qint32 channelId READ channelId WRITE setChannelId NOTIFY channelIdChanged)
    Q_PROPERTY(qint32 chatId READ chatId WRITE setChatId NOTIFY chatIdChanged)
    Q_PROPERTY(qint32 inviterId READ inviterId WRITE setInviterId NOTIFY inviterIdChanged)
    Q_PROPERTY(PhotoObject* photo READ photo WRITE setPhoto NOTIFY photoChanged)
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(QList<qint32> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(MessageAction core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessageActionType {
        TypeMessageActionEmpty,
        TypeMessageActionChatCreate,
        TypeMessageActionChatEditTitle,
        TypeMessageActionChatEditPhoto,
        TypeMessageActionChatDeletePhoto,
        TypeMessageActionChatAddUser,
        TypeMessageActionChatDeleteUser,
        TypeMessageActionChatJoinedByLink,
        TypeMessageActionChannelCreate,
        TypeMessageActionChatMigrateTo,
        TypeMessageActionChannelMigrateFrom,
        TypeMessageActionPinMessage
    };

    MessageActionObject(const MessageAction &core, QObject *parent = 0);
    MessageActionObject(QObject *parent = 0);
    virtual ~MessageActionObject();

    void setChannelId(qint32 channelId);
    qint32 channelId() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setPhoto(PhotoObject* photo);
    PhotoObject* photo() const;

    void setTitle(const QString &title);
    QString title() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setUsers(const QList<qint32> &users);
    QList<qint32> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessageAction &core);
    MessageAction core() const;

    MessageActionObject &operator =(const MessageAction &b);
    bool operator ==(const MessageAction &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void channelIdChanged();
    void chatIdChanged();
    void inviterIdChanged();
    void photoChanged();
    void titleChanged();
    void userIdChanged();
    void usersChanged();

private Q_SLOTS:
    void corePhotoChanged();

private:
    QPointer<PhotoObject> m_photo;
    MessageAction m_core;
};

#endif // LQTG_TYPE_MESSAGEACTION_OBJECT
