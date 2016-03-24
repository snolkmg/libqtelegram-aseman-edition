// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesallstickers.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

MessagesAllStickers::MessagesAllStickers(MessagesAllStickersType classType, InboundPkt *in) :
    m_hash(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesAllStickers::MessagesAllStickers(InboundPkt *in) :
    m_hash(0),
    m_classType(typeMessagesAllStickersNotModified)
{
    fetch(in);
}

MessagesAllStickers::MessagesAllStickers(const Null &null) :
    TelegramTypeObject(null),
    m_hash(0),
    m_classType(typeMessagesAllStickersNotModified)
{
}

MessagesAllStickers::~MessagesAllStickers() {
}

void MessagesAllStickers::setHash(qint32 hash) {
    m_hash = hash;
}

qint32 MessagesAllStickers::hash() const {
    return m_hash;
}

void MessagesAllStickers::setSets(const QList<StickerSet> &sets) {
    m_sets = sets;
}

QList<StickerSet> MessagesAllStickers::sets() const {
    return m_sets;
}

bool MessagesAllStickers::operator ==(const MessagesAllStickers &b) const {
    return m_classType == b.m_classType &&
           m_hash == b.m_hash &&
           m_sets == b.m_sets;
}

void MessagesAllStickers::setClassType(MessagesAllStickers::MessagesAllStickersType classType) {
    m_classType = classType;
}

MessagesAllStickers::MessagesAllStickersType MessagesAllStickers::classType() const {
    return m_classType;
}

bool MessagesAllStickers::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesAllStickersNotModified: {
        m_classType = static_cast<MessagesAllStickersType>(x);
        return true;
    }
        break;
    
    case typeMessagesAllStickers: {
        m_hash = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_sets_length = in->fetchInt();
        m_sets.clear();
        for (qint32 i = 0; i < m_sets_length; i++) {
            StickerSet type;
            type.fetch(in);
            m_sets.append(type);
        }
        m_classType = static_cast<MessagesAllStickersType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesAllStickers::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesAllStickersNotModified: {
        return true;
    }
        break;
    
    case typeMessagesAllStickers: {
        out->appendInt(m_hash);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_sets.count());
        for (qint32 i = 0; i < m_sets.count(); i++) {
            m_sets[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray MessagesAllStickers::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const MessagesAllStickers &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessagesAllStickers::typeMessagesAllStickersNotModified:
        
        break;
    case MessagesAllStickers::typeMessagesAllStickers:
        stream << item.hash();
        stream << item.sets();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, MessagesAllStickers &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessagesAllStickers::MessagesAllStickersType>(type));
    switch(type) {
    case MessagesAllStickers::typeMessagesAllStickersNotModified: {
        
    }
        break;
    case MessagesAllStickers::typeMessagesAllStickers: {
        qint32 m_hash;
        stream >> m_hash;
        item.setHash(m_hash);
        QList<StickerSet> m_sets;
        stream >> m_sets;
        item.setSets(m_sets);
    }
        break;
    }
    return stream;
}

