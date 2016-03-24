// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "contactlink.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

ContactLink::ContactLink(ContactLinkType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ContactLink::ContactLink(InboundPkt *in) :
    m_classType(typeContactLinkUnknown)
{
    fetch(in);
}

ContactLink::ContactLink(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeContactLinkUnknown)
{
}

ContactLink::~ContactLink() {
}

bool ContactLink::operator ==(const ContactLink &b) const {
    return m_classType == b.m_classType;
}

void ContactLink::setClassType(ContactLink::ContactLinkType classType) {
    m_classType = classType;
}

ContactLink::ContactLinkType ContactLink::classType() const {
    return m_classType;
}

bool ContactLink::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeContactLinkUnknown: {
        m_classType = static_cast<ContactLinkType>(x);
        return true;
    }
        break;
    
    case typeContactLinkNone: {
        m_classType = static_cast<ContactLinkType>(x);
        return true;
    }
        break;
    
    case typeContactLinkHasPhone: {
        m_classType = static_cast<ContactLinkType>(x);
        return true;
    }
        break;
    
    case typeContactLinkContact: {
        m_classType = static_cast<ContactLinkType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ContactLink::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactLinkUnknown: {
        return true;
    }
        break;
    
    case typeContactLinkNone: {
        return true;
    }
        break;
    
    case typeContactLinkHasPhone: {
        return true;
    }
        break;
    
    case typeContactLinkContact: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray ContactLink::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const ContactLink &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ContactLink::typeContactLinkUnknown:
        
        break;
    case ContactLink::typeContactLinkNone:
        
        break;
    case ContactLink::typeContactLinkHasPhone:
        
        break;
    case ContactLink::typeContactLinkContact:
        
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, ContactLink &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ContactLink::ContactLinkType>(type));
    switch(type) {
    case ContactLink::typeContactLinkUnknown: {
        
    }
        break;
    case ContactLink::typeContactLinkNone: {
        
    }
        break;
    case ContactLink::typeContactLinkHasPhone: {
        
    }
        break;
    case ContactLink::typeContactLinkContact: {
        
    }
        break;
    }
    return stream;
}

