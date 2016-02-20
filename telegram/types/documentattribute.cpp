// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "documentattribute.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

DocumentAttribute::DocumentAttribute(DocumentAttributeType classType, InboundPkt *in) :
    m_duration(0),
    m_flags(0),
    m_h(0),
    m_w(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

DocumentAttribute::DocumentAttribute(InboundPkt *in) :
    m_duration(0),
    m_flags(0),
    m_h(0),
    m_w(0),
    m_classType(typeDocumentAttributeImageSize)
{
    fetch(in);
}

DocumentAttribute::DocumentAttribute(const Null &null) :
    TelegramTypeObject(null),
    m_duration(0),
    m_flags(0),
    m_h(0),
    m_w(0),
    m_classType(typeDocumentAttributeImageSize)
{
}

DocumentAttribute::~DocumentAttribute() {
}

void DocumentAttribute::setAlt(const QString &alt) {
    m_alt = alt;
}

QString DocumentAttribute::alt() const {
    return m_alt;
}

void DocumentAttribute::setDuration(qint32 duration) {
    m_duration = duration;
}

qint32 DocumentAttribute::duration() const {
    return m_duration;
}

void DocumentAttribute::setFileName(const QString &fileName) {
    m_fileName = fileName;
}

QString DocumentAttribute::fileName() const {
    return m_fileName;
}

void DocumentAttribute::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 DocumentAttribute::flags() const {
    return m_flags;
}

void DocumentAttribute::setH(qint32 h) {
    m_h = h;
}

qint32 DocumentAttribute::h() const {
    return m_h;
}

void DocumentAttribute::setPerformer(const QString &performer) {
    m_performer = performer;
}

QString DocumentAttribute::performer() const {
    return m_performer;
}

void DocumentAttribute::setStickerset(const InputStickerSet &stickerset) {
    m_stickerset = stickerset;
}

InputStickerSet DocumentAttribute::stickerset() const {
    return m_stickerset;
}

void DocumentAttribute::setTitle(const QString &title) {
    m_title = title;
}

QString DocumentAttribute::title() const {
    return m_title;
}

void DocumentAttribute::setVoice(bool voice) {
    if(voice) m_flags = (m_flags | (1<<10));
    else m_flags = (m_flags & ~(1<<10));
}

bool DocumentAttribute::voice() const {
    return (m_flags & 1<<10);
}

void DocumentAttribute::setW(qint32 w) {
    m_w = w;
}

qint32 DocumentAttribute::w() const {
    return m_w;
}

void DocumentAttribute::setWaveform(const QByteArray &waveform) {
    m_waveform = waveform;
}

QByteArray DocumentAttribute::waveform() const {
    return m_waveform;
}

bool DocumentAttribute::operator ==(const DocumentAttribute &b) const {
    return m_classType == b.m_classType &&
           m_alt == b.m_alt &&
           m_duration == b.m_duration &&
           m_fileName == b.m_fileName &&
           m_flags == b.m_flags &&
           m_h == b.m_h &&
           m_performer == b.m_performer &&
           m_stickerset == b.m_stickerset &&
           m_title == b.m_title &&
           m_w == b.m_w &&
           m_waveform == b.m_waveform;
}

void DocumentAttribute::setClassType(DocumentAttribute::DocumentAttributeType classType) {
    m_classType = classType;
}

DocumentAttribute::DocumentAttributeType DocumentAttribute::classType() const {
    return m_classType;
}

bool DocumentAttribute::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeDocumentAttributeImageSize: {
        m_w = in->fetchInt();
        m_h = in->fetchInt();
        m_classType = static_cast<DocumentAttributeType>(x);
        return true;
    }
        break;
    
    case typeDocumentAttributeAnimated: {
        m_classType = static_cast<DocumentAttributeType>(x);
        return true;
    }
        break;
    
    case typeDocumentAttributeSticker: {
        m_alt = in->fetchQString();
        m_stickerset.fetch(in);
        m_classType = static_cast<DocumentAttributeType>(x);
        return true;
    }
        break;
    
    case typeDocumentAttributeVideo: {
        m_duration = in->fetchInt();
        m_w = in->fetchInt();
        m_h = in->fetchInt();
        m_classType = static_cast<DocumentAttributeType>(x);
        return true;
    }
        break;
    
    case typeDocumentAttributeAudio: {
        m_flags = in->fetchInt();
        m_duration = in->fetchInt();
        if(m_flags & 1<<0) {
            m_title = in->fetchQString();
        }
        if(m_flags & 1<<1) {
            m_performer = in->fetchQString();
        }
        if(m_flags & 1<<2) {
            m_waveform = in->fetchBytes();
        }
        m_classType = static_cast<DocumentAttributeType>(x);
        return true;
    }
        break;
    
    case typeDocumentAttributeFilename: {
        m_fileName = in->fetchQString();
        m_classType = static_cast<DocumentAttributeType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool DocumentAttribute::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeDocumentAttributeImageSize: {
        out->appendInt(m_w);
        out->appendInt(m_h);
        return true;
    }
        break;
    
    case typeDocumentAttributeAnimated: {
        return true;
    }
        break;
    
    case typeDocumentAttributeSticker: {
        out->appendQString(m_alt);
        m_stickerset.push(out);
        return true;
    }
        break;
    
    case typeDocumentAttributeVideo: {
        out->appendInt(m_duration);
        out->appendInt(m_w);
        out->appendInt(m_h);
        return true;
    }
        break;
    
    case typeDocumentAttributeAudio: {
        out->appendInt(m_flags);
        out->appendInt(m_duration);
        out->appendQString(m_title);
        out->appendQString(m_performer);
        out->appendBytes(m_waveform);
        return true;
    }
        break;
    
    case typeDocumentAttributeFilename: {
        out->appendQString(m_fileName);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

