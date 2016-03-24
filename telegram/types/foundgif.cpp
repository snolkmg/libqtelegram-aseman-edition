// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "foundgif.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

FoundGif::FoundGif(FoundGifType classType, InboundPkt *in) :
    m_h(0),
    m_w(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

FoundGif::FoundGif(InboundPkt *in) :
    m_h(0),
    m_w(0),
    m_classType(typeFoundGif)
{
    fetch(in);
}

FoundGif::FoundGif(const Null &null) :
    TelegramTypeObject(null),
    m_h(0),
    m_w(0),
    m_classType(typeFoundGif)
{
}

FoundGif::~FoundGif() {
}

void FoundGif::setContentType(const QString &contentType) {
    m_contentType = contentType;
}

QString FoundGif::contentType() const {
    return m_contentType;
}

void FoundGif::setContentUrl(const QString &contentUrl) {
    m_contentUrl = contentUrl;
}

QString FoundGif::contentUrl() const {
    return m_contentUrl;
}

void FoundGif::setDocument(const Document &document) {
    m_document = document;
}

Document FoundGif::document() const {
    return m_document;
}

void FoundGif::setH(qint32 h) {
    m_h = h;
}

qint32 FoundGif::h() const {
    return m_h;
}

void FoundGif::setPhoto(const Photo &photo) {
    m_photo = photo;
}

Photo FoundGif::photo() const {
    return m_photo;
}

void FoundGif::setThumbUrl(const QString &thumbUrl) {
    m_thumbUrl = thumbUrl;
}

QString FoundGif::thumbUrl() const {
    return m_thumbUrl;
}

void FoundGif::setUrl(const QString &url) {
    m_url = url;
}

QString FoundGif::url() const {
    return m_url;
}

void FoundGif::setW(qint32 w) {
    m_w = w;
}

qint32 FoundGif::w() const {
    return m_w;
}

bool FoundGif::operator ==(const FoundGif &b) const {
    return m_classType == b.m_classType &&
           m_contentType == b.m_contentType &&
           m_contentUrl == b.m_contentUrl &&
           m_document == b.m_document &&
           m_h == b.m_h &&
           m_photo == b.m_photo &&
           m_thumbUrl == b.m_thumbUrl &&
           m_url == b.m_url &&
           m_w == b.m_w;
}

void FoundGif::setClassType(FoundGif::FoundGifType classType) {
    m_classType = classType;
}

FoundGif::FoundGifType FoundGif::classType() const {
    return m_classType;
}

bool FoundGif::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeFoundGif: {
        m_url = in->fetchQString();
        m_thumbUrl = in->fetchQString();
        m_contentUrl = in->fetchQString();
        m_contentType = in->fetchQString();
        m_w = in->fetchInt();
        m_h = in->fetchInt();
        m_classType = static_cast<FoundGifType>(x);
        return true;
    }
        break;
    
    case typeFoundGifCached: {
        m_url = in->fetchQString();
        m_photo.fetch(in);
        m_document.fetch(in);
        m_classType = static_cast<FoundGifType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool FoundGif::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeFoundGif: {
        out->appendQString(m_url);
        out->appendQString(m_thumbUrl);
        out->appendQString(m_contentUrl);
        out->appendQString(m_contentType);
        out->appendInt(m_w);
        out->appendInt(m_h);
        return true;
    }
        break;
    
    case typeFoundGifCached: {
        out->appendQString(m_url);
        m_photo.push(out);
        m_document.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray FoundGif::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const FoundGif &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case FoundGif::typeFoundGif:
        stream << item.url();
        stream << item.thumbUrl();
        stream << item.contentUrl();
        stream << item.contentType();
        stream << item.w();
        stream << item.h();
        break;
    case FoundGif::typeFoundGifCached:
        stream << item.url();
        stream << item.photo();
        stream << item.document();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, FoundGif &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<FoundGif::FoundGifType>(type));
    switch(type) {
    case FoundGif::typeFoundGif: {
        QString m_url;
        stream >> m_url;
        item.setUrl(m_url);
        QString m_thumb_url;
        stream >> m_thumb_url;
        item.setThumbUrl(m_thumb_url);
        QString m_content_url;
        stream >> m_content_url;
        item.setContentUrl(m_content_url);
        QString m_content_type;
        stream >> m_content_type;
        item.setContentType(m_content_type);
        qint32 m_w;
        stream >> m_w;
        item.setW(m_w);
        qint32 m_h;
        stream >> m_h;
        item.setH(m_h);
    }
        break;
    case FoundGif::typeFoundGifCached: {
        QString m_url;
        stream >> m_url;
        item.setUrl(m_url);
        Photo m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
        Document m_document;
        stream >> m_document;
        item.setDocument(m_document);
    }
        break;
    }
    return stream;
}

