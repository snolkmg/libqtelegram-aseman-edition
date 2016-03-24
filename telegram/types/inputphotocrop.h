// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTPHOTOCROP
#define LQTG_TYPE_INPUTPHOTOCROP

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputPhotoCrop : public TelegramTypeObject
{
public:
    enum InputPhotoCropType {
        typeInputPhotoCropAuto = 0xade6b004,
        typeInputPhotoCrop = 0xd9915325
    };

    InputPhotoCrop(InputPhotoCropType classType = typeInputPhotoCropAuto, InboundPkt *in = 0);
    InputPhotoCrop(InboundPkt *in);
    InputPhotoCrop(const Null&);
    virtual ~InputPhotoCrop();

    void setCropLeft(qreal cropLeft);
    qreal cropLeft() const;

    void setCropTop(qreal cropTop);
    qreal cropTop() const;

    void setCropWidth(qreal cropWidth);
    qreal cropWidth() const;

    void setClassType(InputPhotoCropType classType);
    InputPhotoCropType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputPhotoCrop &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qreal m_cropLeft;
    qreal m_cropTop;
    qreal m_cropWidth;
    InputPhotoCropType m_classType;
};

Q_DECLARE_METATYPE(InputPhotoCrop)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputPhotoCrop &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputPhotoCrop &item);

#endif // LQTG_TYPE_INPUTPHOTOCROP
