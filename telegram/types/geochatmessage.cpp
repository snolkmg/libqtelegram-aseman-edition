// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "geochatmessage.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

GeoChatMessage::GeoChatMessage(GeoChatMessageType classType, InboundPkt *in) :
    m_chatId(0),
    m_date(0),
    m_fromId(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

GeoChatMessage::GeoChatMessage(InboundPkt *in) :
    m_chatId(0),
    m_date(0),
    m_fromId(0),
    m_id(0),
    m_classType(typeGeoChatMessageEmpty)
{
    fetch(in);
}

GeoChatMessage::~GeoChatMessage() {
}

void GeoChatMessage::setAction(const MessageAction &action) {
    m_action = action;
}

MessageAction GeoChatMessage::action() const {
    return m_action;
}

void GeoChatMessage::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

qint32 GeoChatMessage::chatId() const {
    return m_chatId;
}

void GeoChatMessage::setDate(qint32 date) {
    m_date = date;
}

qint32 GeoChatMessage::date() const {
    return m_date;
}

void GeoChatMessage::setFromId(qint32 fromId) {
    m_fromId = fromId;
}

qint32 GeoChatMessage::fromId() const {
    return m_fromId;
}

void GeoChatMessage::setId(qint32 id) {
    m_id = id;
}

qint32 GeoChatMessage::id() const {
    return m_id;
}

void GeoChatMessage::setMedia(const MessageMedia &media) {
    m_media = media;
}

MessageMedia GeoChatMessage::media() const {
    return m_media;
}

void GeoChatMessage::setMessage(const QString &message) {
    m_message = message;
}

QString GeoChatMessage::message() const {
    return m_message;
}

bool GeoChatMessage::operator ==(const GeoChatMessage &b) {
    return m_action == b.m_action &&
           m_chatId == b.m_chatId &&
           m_date == b.m_date &&
           m_fromId == b.m_fromId &&
           m_id == b.m_id &&
           m_media == b.m_media &&
           m_message == b.m_message;
}

void GeoChatMessage::setClassType(GeoChatMessage::GeoChatMessageType classType) {
    m_classType = classType;
}

GeoChatMessage::GeoChatMessageType GeoChatMessage::classType() const {
    return m_classType;
}

bool GeoChatMessage::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeGeoChatMessageEmpty: {
        m_chatId = in->fetchInt();
        m_id = in->fetchInt();
        m_classType = static_cast<GeoChatMessageType>(x);
        return true;
    }
        break;
    
    case typeGeoChatMessage: {
        m_chatId = in->fetchInt();
        m_id = in->fetchInt();
        m_fromId = in->fetchInt();
        m_date = in->fetchInt();
        m_message = in->fetchQString();
        m_media.fetch(in);
        m_classType = static_cast<GeoChatMessageType>(x);
        return true;
    }
        break;
    
    case typeGeoChatMessageService: {
        m_chatId = in->fetchInt();
        m_id = in->fetchInt();
        m_fromId = in->fetchInt();
        m_date = in->fetchInt();
        m_action.fetch(in);
        m_classType = static_cast<GeoChatMessageType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool GeoChatMessage::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeGeoChatMessageEmpty: {
        out->appendInt(m_chatId);
        out->appendInt(m_id);
        return true;
    }
        break;
    
    case typeGeoChatMessage: {
        out->appendInt(m_chatId);
        out->appendInt(m_id);
        out->appendInt(m_fromId);
        out->appendInt(m_date);
        out->appendQString(m_message);
        m_media.push(out);
        return true;
    }
        break;
    
    case typeGeoChatMessageService: {
        out->appendInt(m_chatId);
        out->appendInt(m_id);
        out->appendInt(m_fromId);
        out->appendInt(m_date);
        m_action.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}
