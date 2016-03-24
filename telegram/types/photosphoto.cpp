// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "photosphoto.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

PhotosPhoto::PhotosPhoto(PhotosPhotoType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

PhotosPhoto::PhotosPhoto(InboundPkt *in) :
    m_classType(typePhotosPhoto)
{
    fetch(in);
}

PhotosPhoto::PhotosPhoto(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typePhotosPhoto)
{
}

PhotosPhoto::~PhotosPhoto() {
}

void PhotosPhoto::setPhoto(const Photo &photo) {
    m_photo = photo;
}

Photo PhotosPhoto::photo() const {
    return m_photo;
}

void PhotosPhoto::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> PhotosPhoto::users() const {
    return m_users;
}

bool PhotosPhoto::operator ==(const PhotosPhoto &b) const {
    return m_classType == b.m_classType &&
           m_photo == b.m_photo &&
           m_users == b.m_users;
}

void PhotosPhoto::setClassType(PhotosPhoto::PhotosPhotoType classType) {
    m_classType = classType;
}

PhotosPhoto::PhotosPhotoType PhotosPhoto::classType() const {
    return m_classType;
}

bool PhotosPhoto::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePhotosPhoto: {
        m_photo.fetch(in);
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<PhotosPhotoType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool PhotosPhoto::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePhotosPhoto: {
        m_photo.push(out);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray PhotosPhoto::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const PhotosPhoto &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case PhotosPhoto::typePhotosPhoto:
        stream << item.photo();
        stream << item.users();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, PhotosPhoto &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<PhotosPhoto::PhotosPhotoType>(type));
    switch(type) {
    case PhotosPhoto::typePhotosPhoto: {
        Photo m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}

