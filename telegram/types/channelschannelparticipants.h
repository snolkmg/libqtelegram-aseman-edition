// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHANNELSCHANNELPARTICIPANTS
#define LQTG_TYPE_CHANNELSCHANNELPARTICIPANTS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include <QList>
#include "channelparticipant.h"
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT ChannelsChannelParticipants : public TelegramTypeObject
{
public:
    enum ChannelsChannelParticipantsType {
        typeChannelsChannelParticipants = 0xf56ee2a8
    };

    ChannelsChannelParticipants(ChannelsChannelParticipantsType classType = typeChannelsChannelParticipants, InboundPkt *in = 0);
    ChannelsChannelParticipants(InboundPkt *in);
    ChannelsChannelParticipants(const Null&);
    virtual ~ChannelsChannelParticipants();

    void setCount(qint32 count);
    qint32 count() const;

    void setParticipants(const QList<ChannelParticipant> &participants);
    QList<ChannelParticipant> participants() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(ChannelsChannelParticipantsType classType);
    ChannelsChannelParticipantsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ChannelsChannelParticipants &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_count;
    QList<ChannelParticipant> m_participants;
    QList<User> m_users;
    ChannelsChannelParticipantsType m_classType;
};

Q_DECLARE_METATYPE(ChannelsChannelParticipants)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ChannelsChannelParticipants &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ChannelsChannelParticipants &item);

#endif // LQTG_TYPE_CHANNELSCHANNELPARTICIPANTS
