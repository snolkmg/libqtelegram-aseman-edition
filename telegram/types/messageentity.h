// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGEENTITY
#define LQTG_TYPE_MESSAGEENTITY

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

#include <QString>
#include <QtGlobal>
#include "inputuser.h"

class LIBQTELEGRAMSHARED_EXPORT MessageEntity : public TelegramTypeObject
{
public:
    enum MessageEntityClassType {
        typeMessageEntityUnknown = 0xbb92ba95,
        typeMessageEntityMention = 0xfa04579d,
        typeMessageEntityHashtag = 0x6f635b0d,
        typeMessageEntityBotCommand = 0x6cef8ac7,
        typeMessageEntityUrl = 0x6ed02538,
        typeMessageEntityEmail = 0x64e475c2,
        typeMessageEntityBold = 0xbd610bc9,
        typeMessageEntityItalic = 0x826f8b60,
        typeMessageEntityCode = 0x28a20571,
        typeMessageEntityPre = 0x73924be0,
        typeMessageEntityTextUrl = 0x76a6d327,
        typeMessageEntityMentionName = 0x352dca58,
        typeInputMessageEntityMentionName = 0x208e68c9
    };

    MessageEntity(MessageEntityClassType classType = typeMessageEntityUnknown, InboundPkt *in = 0);
    MessageEntity(InboundPkt *in);
    MessageEntity(const Null&);
    virtual ~MessageEntity();

    void setLanguage(const QString &language);
    QString language() const;

    void setLength(qint32 length);
    qint32 length() const;

    void setOffset(qint32 offset);
    qint32 offset() const;

    void setUrl(const QString &url);
    QString url() const;

    void setUserIdInputUser(const InputUser &userIdInputUser);
    InputUser userIdInputUser() const;

    void setUserIdInt(qint32 userIdInt);
    qint32 userIdInt() const;

    void setClassType(MessageEntityClassType classType);
    MessageEntityClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static MessageEntity fromMap(const QMap<QString, QVariant> &map);

    bool operator ==(const MessageEntity &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_language;
    qint32 m_length;
    qint32 m_offset;
    QString m_url;
    InputUser m_userIdInputUser;
    qint32 m_userIdInt;
    MessageEntityClassType m_classType;
};

Q_DECLARE_METATYPE(MessageEntity)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessageEntity &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessageEntity &item);

inline MessageEntity::MessageEntity(MessageEntityClassType classType, InboundPkt *in) :
    m_length(0),
    m_offset(0),
    m_userIdInt(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

inline MessageEntity::MessageEntity(InboundPkt *in) :
    m_length(0),
    m_offset(0),
    m_userIdInt(0),
    m_classType(typeMessageEntityUnknown)
{
    fetch(in);
}

inline MessageEntity::MessageEntity(const Null &null) :
    TelegramTypeObject(null),
    m_length(0),
    m_offset(0),
    m_userIdInt(0),
    m_classType(typeMessageEntityUnknown)
{
}

inline MessageEntity::~MessageEntity() {
}

inline void MessageEntity::setLanguage(const QString &language) {
    m_language = language;
}

inline QString MessageEntity::language() const {
    return m_language;
}

inline void MessageEntity::setLength(qint32 length) {
    m_length = length;
}

inline qint32 MessageEntity::length() const {
    return m_length;
}

inline void MessageEntity::setOffset(qint32 offset) {
    m_offset = offset;
}

inline qint32 MessageEntity::offset() const {
    return m_offset;
}

inline void MessageEntity::setUrl(const QString &url) {
    m_url = url;
}

inline QString MessageEntity::url() const {
    return m_url;
}

inline void MessageEntity::setUserIdInputUser(const InputUser &userIdInputUser) {
    m_userIdInputUser = userIdInputUser;
}

inline InputUser MessageEntity::userIdInputUser() const {
    return m_userIdInputUser;
}

inline void MessageEntity::setUserIdInt(qint32 userIdInt) {
    m_userIdInt = userIdInt;
}

inline qint32 MessageEntity::userIdInt() const {
    return m_userIdInt;
}

inline bool MessageEntity::operator ==(const MessageEntity &b) const {
    return m_classType == b.m_classType &&
           m_language == b.m_language &&
           m_length == b.m_length &&
           m_offset == b.m_offset &&
           m_url == b.m_url &&
           m_userIdInputUser == b.m_userIdInputUser &&
           m_userIdInt == b.m_userIdInt;
}

inline void MessageEntity::setClassType(MessageEntity::MessageEntityClassType classType) {
    m_classType = classType;
}

inline MessageEntity::MessageEntityClassType MessageEntity::classType() const {
    return m_classType;
}

inline bool MessageEntity::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessageEntityUnknown: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityMention: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityHashtag: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityBotCommand: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityUrl: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityEmail: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityBold: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityItalic: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityCode: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityPre: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_language = in->fetchQString();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityTextUrl: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_url = in->fetchQString();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeMessageEntityMentionName: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_userIdInt = in->fetchInt();
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    case typeInputMessageEntityMentionName: {
        m_offset = in->fetchInt();
        m_length = in->fetchInt();
        m_userIdInputUser.fetch(in);
        m_classType = static_cast<MessageEntityClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

inline bool MessageEntity::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessageEntityUnknown: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityMention: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityHashtag: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityBotCommand: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityUrl: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityEmail: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityBold: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityItalic: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityCode: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeMessageEntityPre: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        out->appendQString(m_language);
        return true;
    }
        break;
    
    case typeMessageEntityTextUrl: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        out->appendQString(m_url);
        return true;
    }
        break;
    
    case typeMessageEntityMentionName: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        out->appendInt(m_userIdInt);
        return true;
    }
        break;
    
    case typeInputMessageEntityMentionName: {
        out->appendInt(m_offset);
        out->appendInt(m_length);
        m_userIdInputUser.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

inline QMap<QString, QVariant> MessageEntity::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeMessageEntityUnknown: {
        result["classType"] = "MessageEntity::typeMessageEntityUnknown";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        return result;
    }
        break;
    
    case typeMessageEntityMention: {
        result["classType"] = "MessageEntity::typeMessageEntityMention";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        return result;
    }
        break;
    
    case typeMessageEntityHashtag: {
        result["classType"] = "MessageEntity::typeMessageEntityHashtag";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        return result;
    }
        break;
    
    case typeMessageEntityBotCommand: {
        result["classType"] = "MessageEntity::typeMessageEntityBotCommand";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        return result;
    }
        break;
    
    case typeMessageEntityUrl: {
        result["classType"] = "MessageEntity::typeMessageEntityUrl";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        return result;
    }
        break;
    
    case typeMessageEntityEmail: {
        result["classType"] = "MessageEntity::typeMessageEntityEmail";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        return result;
    }
        break;
    
    case typeMessageEntityBold: {
        result["classType"] = "MessageEntity::typeMessageEntityBold";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        return result;
    }
        break;
    
    case typeMessageEntityItalic: {
        result["classType"] = "MessageEntity::typeMessageEntityItalic";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        return result;
    }
        break;
    
    case typeMessageEntityCode: {
        result["classType"] = "MessageEntity::typeMessageEntityCode";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        return result;
    }
        break;
    
    case typeMessageEntityPre: {
        result["classType"] = "MessageEntity::typeMessageEntityPre";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        result["language"] = QVariant::fromValue<QString>(language());
        return result;
    }
        break;
    
    case typeMessageEntityTextUrl: {
        result["classType"] = "MessageEntity::typeMessageEntityTextUrl";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        result["url"] = QVariant::fromValue<QString>(url());
        return result;
    }
        break;
    
    case typeMessageEntityMentionName: {
        result["classType"] = "MessageEntity::typeMessageEntityMentionName";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        result["userIdInt"] = QVariant::fromValue<qint32>(userIdInt());
        return result;
    }
        break;
    
    case typeInputMessageEntityMentionName: {
        result["classType"] = "MessageEntity::typeInputMessageEntityMentionName";
        result["offset"] = QVariant::fromValue<qint32>(offset());
        result["length"] = QVariant::fromValue<qint32>(length());
        result["userIdInputUser"] = m_userIdInputUser.toMap();
        return result;
    }
        break;
    
    default:
        return result;
    }
}

inline MessageEntity MessageEntity::fromMap(const QMap<QString, QVariant> &map) {
    MessageEntity result;
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityUnknown") {
        result.setClassType(typeMessageEntityUnknown);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityMention") {
        result.setClassType(typeMessageEntityMention);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityHashtag") {
        result.setClassType(typeMessageEntityHashtag);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityBotCommand") {
        result.setClassType(typeMessageEntityBotCommand);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityUrl") {
        result.setClassType(typeMessageEntityUrl);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityEmail") {
        result.setClassType(typeMessageEntityEmail);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityBold") {
        result.setClassType(typeMessageEntityBold);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityItalic") {
        result.setClassType(typeMessageEntityItalic);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityCode") {
        result.setClassType(typeMessageEntityCode);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityPre") {
        result.setClassType(typeMessageEntityPre);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        result.setLanguage( map.value("language").value<QString>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityTextUrl") {
        result.setClassType(typeMessageEntityTextUrl);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        result.setUrl( map.value("url").value<QString>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeMessageEntityMentionName") {
        result.setClassType(typeMessageEntityMentionName);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        result.setUserIdInt( map.value("userIdInt").value<qint32>() );
        return result;
    }
    if(map.value("classType").toString() == "MessageEntity::typeInputMessageEntityMentionName") {
        result.setClassType(typeInputMessageEntityMentionName);
        result.setOffset( map.value("offset").value<qint32>() );
        result.setLength( map.value("length").value<qint32>() );
        result.setUserIdInputUser( InputUser::fromMap(map.value("userIdInputUser").toMap()) );
        return result;
    }
    return result;
}

inline QByteArray MessageEntity::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

inline QDataStream &operator<<(QDataStream &stream, const MessageEntity &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessageEntity::typeMessageEntityUnknown:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityMention:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityHashtag:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityBotCommand:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityUrl:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityEmail:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityBold:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityItalic:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityCode:
        stream << item.offset();
        stream << item.length();
        break;
    case MessageEntity::typeMessageEntityPre:
        stream << item.offset();
        stream << item.length();
        stream << item.language();
        break;
    case MessageEntity::typeMessageEntityTextUrl:
        stream << item.offset();
        stream << item.length();
        stream << item.url();
        break;
    case MessageEntity::typeMessageEntityMentionName:
        stream << item.offset();
        stream << item.length();
        stream << item.userIdInt();
        break;
    case MessageEntity::typeInputMessageEntityMentionName:
        stream << item.offset();
        stream << item.length();
        stream << item.userIdInputUser();
        break;
    }
    return stream;
}

inline QDataStream &operator>>(QDataStream &stream, MessageEntity &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessageEntity::MessageEntityClassType>(type));
    switch(type) {
    case MessageEntity::typeMessageEntityUnknown: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityMention: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityHashtag: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityBotCommand: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityUrl: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityEmail: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityBold: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityItalic: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityCode: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case MessageEntity::typeMessageEntityPre: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
        QString m_language;
        stream >> m_language;
        item.setLanguage(m_language);
    }
        break;
    case MessageEntity::typeMessageEntityTextUrl: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
        QString m_url;
        stream >> m_url;
        item.setUrl(m_url);
    }
        break;
    case MessageEntity::typeMessageEntityMentionName: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
        qint32 m_user_id_int;
        stream >> m_user_id_int;
        item.setUserIdInt(m_user_id_int);
    }
        break;
    case MessageEntity::typeInputMessageEntityMentionName: {
        qint32 m_offset;
        stream >> m_offset;
        item.setOffset(m_offset);
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
        InputUser m_user_id_InputUser;
        stream >> m_user_id_InputUser;
        item.setUserIdInputUser(m_user_id_InputUser);
    }
        break;
    }
    return stream;
}


#endif // LQTG_TYPE_MESSAGEENTITY