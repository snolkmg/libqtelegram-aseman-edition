// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_ACCOUNTPASSWORDINPUTSETTINGS
#define LQTG_TYPE_ACCOUNTPASSWORDINPUTSETTINGS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>
#include <QtGlobal>
#include <QByteArray>

class LIBQTELEGRAMSHARED_EXPORT AccountPasswordInputSettings : public TelegramTypeObject
{
public:
    enum AccountPasswordInputSettingsType {
        typeAccountPasswordInputSettings = 0x86916deb
    };

    AccountPasswordInputSettings(AccountPasswordInputSettingsType classType = typeAccountPasswordInputSettings, InboundPkt *in = 0);
    AccountPasswordInputSettings(InboundPkt *in);
    AccountPasswordInputSettings(const Null&);
    virtual ~AccountPasswordInputSettings();

    void setEmail(const QString &email);
    QString email() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setHint(const QString &hint);
    QString hint() const;

    void setNewPasswordHash(const QByteArray &newPasswordHash);
    QByteArray newPasswordHash() const;

    void setNewSalt(const QByteArray &newSalt);
    QByteArray newSalt() const;

    void setClassType(AccountPasswordInputSettingsType classType);
    AccountPasswordInputSettingsType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AccountPasswordInputSettings &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    QString m_email;
    qint32 m_flags;
    QString m_hint;
    QByteArray m_newPasswordHash;
    QByteArray m_newSalt;
    AccountPasswordInputSettingsType m_classType;
};

Q_DECLARE_METATYPE(AccountPasswordInputSettings)

#endif // LQTG_TYPE_ACCOUNTPASSWORDINPUTSETTINGS
