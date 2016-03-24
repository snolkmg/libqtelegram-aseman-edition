// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTAPPEVENT
#define LQTG_TYPE_INPUTAPPEVENT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QString>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputAppEvent : public TelegramTypeObject
{
public:
    enum InputAppEventType {
        typeInputAppEvent = 0x770656a8
    };

    InputAppEvent(InputAppEventType classType = typeInputAppEvent, InboundPkt *in = 0);
    InputAppEvent(InboundPkt *in);
    InputAppEvent(const Null&);
    virtual ~InputAppEvent();

    void setData(const QString &data);
    QString data() const;

    void setPeer(qint64 peer);
    qint64 peer() const;

    void setTime(qreal time);
    qreal time() const;

    void setType(const QString &type);
    QString type() const;

    void setClassType(InputAppEventType classType);
    InputAppEventType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputAppEvent &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_data;
    qint64 m_peer;
    qreal m_time;
    QString m_type;
    InputAppEventType m_classType;
};

Q_DECLARE_METATYPE(InputAppEvent)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputAppEvent &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputAppEvent &item);

#endif // LQTG_TYPE_INPUTAPPEVENT
