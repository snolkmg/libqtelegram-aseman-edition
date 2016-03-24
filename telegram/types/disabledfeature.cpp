// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "disabledfeature.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

DisabledFeature::DisabledFeature(DisabledFeatureType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

DisabledFeature::DisabledFeature(InboundPkt *in) :
    m_classType(typeDisabledFeature)
{
    fetch(in);
}

DisabledFeature::DisabledFeature(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeDisabledFeature)
{
}

DisabledFeature::~DisabledFeature() {
}

void DisabledFeature::setDescription(const QString &description) {
    m_description = description;
}

QString DisabledFeature::description() const {
    return m_description;
}

void DisabledFeature::setFeature(const QString &feature) {
    m_feature = feature;
}

QString DisabledFeature::feature() const {
    return m_feature;
}

bool DisabledFeature::operator ==(const DisabledFeature &b) const {
    return m_classType == b.m_classType &&
           m_description == b.m_description &&
           m_feature == b.m_feature;
}

void DisabledFeature::setClassType(DisabledFeature::DisabledFeatureType classType) {
    m_classType = classType;
}

DisabledFeature::DisabledFeatureType DisabledFeature::classType() const {
    return m_classType;
}

bool DisabledFeature::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeDisabledFeature: {
        m_feature = in->fetchQString();
        m_description = in->fetchQString();
        m_classType = static_cast<DisabledFeatureType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool DisabledFeature::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeDisabledFeature: {
        out->appendQString(m_feature);
        out->appendQString(m_description);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray DisabledFeature::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const DisabledFeature &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case DisabledFeature::typeDisabledFeature:
        stream << item.feature();
        stream << item.description();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, DisabledFeature &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<DisabledFeature::DisabledFeatureType>(type));
    switch(type) {
    case DisabledFeature::typeDisabledFeature: {
        QString m_feature;
        stream >> m_feature;
        item.setFeature(m_feature);
        QString m_description;
        stream >> m_description;
        item.setDescription(m_description);
    }
        break;
    }
    return stream;
}

