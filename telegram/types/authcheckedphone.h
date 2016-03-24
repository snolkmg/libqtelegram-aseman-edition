// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUTHCHECKEDPHONE
#define LQTG_TYPE_AUTHCHECKEDPHONE

#include "telegramtypeobject.h"

#include <QMetaType>

class LIBQTELEGRAMSHARED_EXPORT AuthCheckedPhone : public TelegramTypeObject
{
public:
    enum AuthCheckedPhoneType {
        typeAuthCheckedPhone = 0x811ea28e
    };

    AuthCheckedPhone(AuthCheckedPhoneType classType = typeAuthCheckedPhone, InboundPkt *in = 0);
    AuthCheckedPhone(InboundPkt *in);
    AuthCheckedPhone(const Null&);
    virtual ~AuthCheckedPhone();

    void setPhoneRegistered(bool phoneRegistered);
    bool phoneRegistered() const;

    void setClassType(AuthCheckedPhoneType classType);
    AuthCheckedPhoneType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const AuthCheckedPhone &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    bool m_phoneRegistered;
    AuthCheckedPhoneType m_classType;
};

Q_DECLARE_METATYPE(AuthCheckedPhone)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const AuthCheckedPhone &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, AuthCheckedPhone &item);

#endif // LQTG_TYPE_AUTHCHECKEDPHONE
