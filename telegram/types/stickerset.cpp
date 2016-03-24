// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "stickerset.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

StickerSet::StickerSet(StickerSetType classType, InboundPkt *in) :
    m_accessHash(0),
    m_count(0),
    m_flags(0),
    m_hash(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

StickerSet::StickerSet(InboundPkt *in) :
    m_accessHash(0),
    m_count(0),
    m_flags(0),
    m_hash(0),
    m_id(0),
    m_classType(typeStickerSet)
{
    fetch(in);
}

StickerSet::StickerSet(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_count(0),
    m_flags(0),
    m_hash(0),
    m_id(0),
    m_classType(typeStickerSet)
{
}

StickerSet::~StickerSet() {
}

void StickerSet::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 StickerSet::accessHash() const {
    return m_accessHash;
}

void StickerSet::setCount(qint32 count) {
    m_count = count;
}

qint32 StickerSet::count() const {
    return m_count;
}

void StickerSet::setDisabled(bool disabled) {
    if(disabled) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
}

bool StickerSet::disabled() const {
    return (m_flags & 1<<1);
}

void StickerSet::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 StickerSet::flags() const {
    return m_flags;
}

void StickerSet::setHash(qint32 hash) {
    m_hash = hash;
}

qint32 StickerSet::hash() const {
    return m_hash;
}

void StickerSet::setId(qint64 id) {
    m_id = id;
}

qint64 StickerSet::id() const {
    return m_id;
}

void StickerSet::setInstalled(bool installed) {
    if(installed) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

bool StickerSet::installed() const {
    return (m_flags & 1<<0);
}

void StickerSet::setOfficial(bool official) {
    if(official) m_flags = (m_flags | (1<<2));
    else m_flags = (m_flags & ~(1<<2));
}

bool StickerSet::official() const {
    return (m_flags & 1<<2);
}

void StickerSet::setShortName(const QString &shortName) {
    m_shortName = shortName;
}

QString StickerSet::shortName() const {
    return m_shortName;
}

void StickerSet::setTitle(const QString &title) {
    m_title = title;
}

QString StickerSet::title() const {
    return m_title;
}

bool StickerSet::operator ==(const StickerSet &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_count == b.m_count &&
           m_flags == b.m_flags &&
           m_hash == b.m_hash &&
           m_id == b.m_id &&
           m_shortName == b.m_shortName &&
           m_title == b.m_title;
}

void StickerSet::setClassType(StickerSet::StickerSetType classType) {
    m_classType = classType;
}

StickerSet::StickerSetType StickerSet::classType() const {
    return m_classType;
}

bool StickerSet::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeStickerSet: {
        m_flags = in->fetchInt();
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_title = in->fetchQString();
        m_shortName = in->fetchQString();
        m_count = in->fetchInt();
        m_hash = in->fetchInt();
        m_classType = static_cast<StickerSetType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool StickerSet::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeStickerSet: {
        out->appendInt(m_flags);
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        out->appendQString(m_title);
        out->appendQString(m_shortName);
        out->appendInt(m_count);
        out->appendInt(m_hash);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray StickerSet::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const StickerSet &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case StickerSet::typeStickerSet:
        stream << item.flags();
        stream << item.id();
        stream << item.accessHash();
        stream << item.title();
        stream << item.shortName();
        stream << item.count();
        stream << item.hash();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, StickerSet &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<StickerSet::StickerSetType>(type));
    switch(type) {
    case StickerSet::typeStickerSet: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        QString m_short_name;
        stream >> m_short_name;
        item.setShortName(m_short_name);
        qint32 m_count;
        stream >> m_count;
        item.setCount(m_count);
        qint32 m_hash;
        stream >> m_hash;
        item.setHash(m_hash);
    }
        break;
    }
    return stream;
}

