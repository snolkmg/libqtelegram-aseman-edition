// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagerange.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

MessageRange::MessageRange(MessageRangeType classType, InboundPkt *in) :
    m_maxId(0),
    m_minId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessageRange::MessageRange(InboundPkt *in) :
    m_maxId(0),
    m_minId(0),
    m_classType(typeMessageRange)
{
    fetch(in);
}

MessageRange::MessageRange(const Null &null) :
    TelegramTypeObject(null),
    m_maxId(0),
    m_minId(0),
    m_classType(typeMessageRange)
{
}

MessageRange::~MessageRange() {
}

void MessageRange::setMaxId(qint32 maxId) {
    m_maxId = maxId;
}

qint32 MessageRange::maxId() const {
    return m_maxId;
}

void MessageRange::setMinId(qint32 minId) {
    m_minId = minId;
}

qint32 MessageRange::minId() const {
    return m_minId;
}

bool MessageRange::operator ==(const MessageRange &b) const {
    return m_classType == b.m_classType &&
           m_maxId == b.m_maxId &&
           m_minId == b.m_minId;
}

void MessageRange::setClassType(MessageRange::MessageRangeType classType) {
    m_classType = classType;
}

MessageRange::MessageRangeType MessageRange::classType() const {
    return m_classType;
}

bool MessageRange::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessageRange: {
        m_minId = in->fetchInt();
        m_maxId = in->fetchInt();
        m_classType = static_cast<MessageRangeType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessageRange::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessageRange: {
        out->appendInt(m_minId);
        out->appendInt(m_maxId);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray MessageRange::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const MessageRange &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessageRange::typeMessageRange:
        stream << item.minId();
        stream << item.maxId();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, MessageRange &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessageRange::MessageRangeType>(type));
    switch(type) {
    case MessageRange::typeMessageRange: {
        qint32 m_min_id;
        stream >> m_min_id;
        item.setMinId(m_min_id);
        qint32 m_max_id;
        stream >> m_max_id;
        item.setMaxId(m_max_id);
    }
        break;
    }
    return stream;
}

