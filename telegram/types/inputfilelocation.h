// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTFILELOCATION
#define LQTG_TYPE_INPUTFILELOCATION

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputFileLocation : public TelegramTypeObject
{
public:
    enum InputFileLocationType {
        typeInputFileLocation = 0x14637196,
        typeInputEncryptedFileLocation = 0xf5235d55,
        typeInputDocumentFileLocation = 0x4e45abe9
    };

    InputFileLocation(InputFileLocationType classType = typeInputFileLocation, InboundPkt *in = 0);
    InputFileLocation(InboundPkt *in);
    InputFileLocation(const Null&);
    virtual ~InputFileLocation();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setLocalId(qint32 localId);
    qint32 localId() const;

    void setSecret(qint64 secret);
    qint64 secret() const;

    void setVolumeId(qint64 volumeId);
    qint64 volumeId() const;

    void setClassType(InputFileLocationType classType);
    InputFileLocationType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const InputFileLocation &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_accessHash;
    qint64 m_id;
    qint32 m_localId;
    qint64 m_secret;
    qint64 m_volumeId;
    InputFileLocationType m_classType;
};

Q_DECLARE_METATYPE(InputFileLocation)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputFileLocation &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputFileLocation &item);

#endif // LQTG_TYPE_INPUTFILELOCATION
