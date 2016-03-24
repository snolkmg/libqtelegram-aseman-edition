// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "authorization.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

Authorization::Authorization(AuthorizationType classType, InboundPkt *in) :
    m_apiId(0),
    m_dateActive(0),
    m_dateCreated(0),
    m_flags(0),
    m_hash(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Authorization::Authorization(InboundPkt *in) :
    m_apiId(0),
    m_dateActive(0),
    m_dateCreated(0),
    m_flags(0),
    m_hash(0),
    m_classType(typeAuthorization)
{
    fetch(in);
}

Authorization::Authorization(const Null &null) :
    TelegramTypeObject(null),
    m_apiId(0),
    m_dateActive(0),
    m_dateCreated(0),
    m_flags(0),
    m_hash(0),
    m_classType(typeAuthorization)
{
}

Authorization::~Authorization() {
}

void Authorization::setApiId(qint32 apiId) {
    m_apiId = apiId;
}

qint32 Authorization::apiId() const {
    return m_apiId;
}

void Authorization::setAppName(const QString &appName) {
    m_appName = appName;
}

QString Authorization::appName() const {
    return m_appName;
}

void Authorization::setAppVersion(const QString &appVersion) {
    m_appVersion = appVersion;
}

QString Authorization::appVersion() const {
    return m_appVersion;
}

void Authorization::setCountry(const QString &country) {
    m_country = country;
}

QString Authorization::country() const {
    return m_country;
}

void Authorization::setDateActive(qint32 dateActive) {
    m_dateActive = dateActive;
}

qint32 Authorization::dateActive() const {
    return m_dateActive;
}

void Authorization::setDateCreated(qint32 dateCreated) {
    m_dateCreated = dateCreated;
}

qint32 Authorization::dateCreated() const {
    return m_dateCreated;
}

void Authorization::setDeviceModel(const QString &deviceModel) {
    m_deviceModel = deviceModel;
}

QString Authorization::deviceModel() const {
    return m_deviceModel;
}

void Authorization::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 Authorization::flags() const {
    return m_flags;
}

void Authorization::setHash(qint64 hash) {
    m_hash = hash;
}

qint64 Authorization::hash() const {
    return m_hash;
}

void Authorization::setIp(const QString &ip) {
    m_ip = ip;
}

QString Authorization::ip() const {
    return m_ip;
}

void Authorization::setPlatform(const QString &platform) {
    m_platform = platform;
}

QString Authorization::platform() const {
    return m_platform;
}

void Authorization::setRegion(const QString &region) {
    m_region = region;
}

QString Authorization::region() const {
    return m_region;
}

void Authorization::setSystemVersion(const QString &systemVersion) {
    m_systemVersion = systemVersion;
}

QString Authorization::systemVersion() const {
    return m_systemVersion;
}

bool Authorization::operator ==(const Authorization &b) const {
    return m_classType == b.m_classType &&
           m_apiId == b.m_apiId &&
           m_appName == b.m_appName &&
           m_appVersion == b.m_appVersion &&
           m_country == b.m_country &&
           m_dateActive == b.m_dateActive &&
           m_dateCreated == b.m_dateCreated &&
           m_deviceModel == b.m_deviceModel &&
           m_flags == b.m_flags &&
           m_hash == b.m_hash &&
           m_ip == b.m_ip &&
           m_platform == b.m_platform &&
           m_region == b.m_region &&
           m_systemVersion == b.m_systemVersion;
}

void Authorization::setClassType(Authorization::AuthorizationType classType) {
    m_classType = classType;
}

Authorization::AuthorizationType Authorization::classType() const {
    return m_classType;
}

bool Authorization::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAuthorization: {
        m_hash = in->fetchLong();
        m_flags = in->fetchInt();
        m_deviceModel = in->fetchQString();
        m_platform = in->fetchQString();
        m_systemVersion = in->fetchQString();
        m_apiId = in->fetchInt();
        m_appName = in->fetchQString();
        m_appVersion = in->fetchQString();
        m_dateCreated = in->fetchInt();
        m_dateActive = in->fetchInt();
        m_ip = in->fetchQString();
        m_country = in->fetchQString();
        m_region = in->fetchQString();
        m_classType = static_cast<AuthorizationType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Authorization::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAuthorization: {
        out->appendLong(m_hash);
        out->appendInt(m_flags);
        out->appendQString(m_deviceModel);
        out->appendQString(m_platform);
        out->appendQString(m_systemVersion);
        out->appendInt(m_apiId);
        out->appendQString(m_appName);
        out->appendQString(m_appVersion);
        out->appendInt(m_dateCreated);
        out->appendInt(m_dateActive);
        out->appendQString(m_ip);
        out->appendQString(m_country);
        out->appendQString(m_region);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray Authorization::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const Authorization &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case Authorization::typeAuthorization:
        stream << item.hash();
        stream << item.flags();
        stream << item.deviceModel();
        stream << item.platform();
        stream << item.systemVersion();
        stream << item.apiId();
        stream << item.appName();
        stream << item.appVersion();
        stream << item.dateCreated();
        stream << item.dateActive();
        stream << item.ip();
        stream << item.country();
        stream << item.region();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Authorization &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<Authorization::AuthorizationType>(type));
    switch(type) {
    case Authorization::typeAuthorization: {
        qint64 m_hash;
        stream >> m_hash;
        item.setHash(m_hash);
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_device_model;
        stream >> m_device_model;
        item.setDeviceModel(m_device_model);
        QString m_platform;
        stream >> m_platform;
        item.setPlatform(m_platform);
        QString m_system_version;
        stream >> m_system_version;
        item.setSystemVersion(m_system_version);
        qint32 m_api_id;
        stream >> m_api_id;
        item.setApiId(m_api_id);
        QString m_app_name;
        stream >> m_app_name;
        item.setAppName(m_app_name);
        QString m_app_version;
        stream >> m_app_version;
        item.setAppVersion(m_app_version);
        qint32 m_date_created;
        stream >> m_date_created;
        item.setDateCreated(m_date_created);
        qint32 m_date_active;
        stream >> m_date_active;
        item.setDateActive(m_date_active);
        QString m_ip;
        stream >> m_ip;
        item.setIp(m_ip);
        QString m_country;
        stream >> m_country;
        item.setCountry(m_country);
        QString m_region;
        stream >> m_region;
        item.setRegion(m_region);
    }
        break;
    }
    return stream;
}

