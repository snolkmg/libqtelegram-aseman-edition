// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "sendmessageaction.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

SendMessageAction::SendMessageAction(SendMessageActionType classType, InboundPkt *in) :
    m_progress(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

SendMessageAction::SendMessageAction(InboundPkt *in) :
    m_progress(0),
    m_classType(typeSendMessageTypingAction)
{
    fetch(in);
}

SendMessageAction::SendMessageAction(const Null &null) :
    TelegramTypeObject(null),
    m_progress(0),
    m_classType(typeSendMessageTypingAction)
{
}

SendMessageAction::~SendMessageAction() {
}

void SendMessageAction::setProgress(qint32 progress) {
    m_progress = progress;
}

qint32 SendMessageAction::progress() const {
    return m_progress;
}

bool SendMessageAction::operator ==(const SendMessageAction &b) const {
    return m_classType == b.m_classType &&
           m_progress == b.m_progress;
}

void SendMessageAction::setClassType(SendMessageAction::SendMessageActionType classType) {
    m_classType = classType;
}

SendMessageAction::SendMessageActionType SendMessageAction::classType() const {
    return m_classType;
}

bool SendMessageAction::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeSendMessageTypingAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageCancelAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageRecordVideoAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageUploadVideoAction: {
        m_progress = in->fetchInt();
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageRecordAudioAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageUploadAudioAction: {
        m_progress = in->fetchInt();
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageUploadPhotoAction: {
        m_progress = in->fetchInt();
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageUploadDocumentAction: {
        m_progress = in->fetchInt();
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageGeoLocationAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    case typeSendMessageChooseContactAction: {
        m_classType = static_cast<SendMessageActionType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool SendMessageAction::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeSendMessageTypingAction: {
        return true;
    }
        break;
    
    case typeSendMessageCancelAction: {
        return true;
    }
        break;
    
    case typeSendMessageRecordVideoAction: {
        return true;
    }
        break;
    
    case typeSendMessageUploadVideoAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageRecordAudioAction: {
        return true;
    }
        break;
    
    case typeSendMessageUploadAudioAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageUploadPhotoAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageUploadDocumentAction: {
        out->appendInt(m_progress);
        return true;
    }
        break;
    
    case typeSendMessageGeoLocationAction: {
        return true;
    }
        break;
    
    case typeSendMessageChooseContactAction: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray SendMessageAction::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const SendMessageAction &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case SendMessageAction::typeSendMessageTypingAction:
        
        break;
    case SendMessageAction::typeSendMessageCancelAction:
        
        break;
    case SendMessageAction::typeSendMessageRecordVideoAction:
        
        break;
    case SendMessageAction::typeSendMessageUploadVideoAction:
        stream << item.progress();
        break;
    case SendMessageAction::typeSendMessageRecordAudioAction:
        
        break;
    case SendMessageAction::typeSendMessageUploadAudioAction:
        stream << item.progress();
        break;
    case SendMessageAction::typeSendMessageUploadPhotoAction:
        stream << item.progress();
        break;
    case SendMessageAction::typeSendMessageUploadDocumentAction:
        stream << item.progress();
        break;
    case SendMessageAction::typeSendMessageGeoLocationAction:
        
        break;
    case SendMessageAction::typeSendMessageChooseContactAction:
        
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, SendMessageAction &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<SendMessageAction::SendMessageActionType>(type));
    switch(type) {
    case SendMessageAction::typeSendMessageTypingAction: {
        
    }
        break;
    case SendMessageAction::typeSendMessageCancelAction: {
        
    }
        break;
    case SendMessageAction::typeSendMessageRecordVideoAction: {
        
    }
        break;
    case SendMessageAction::typeSendMessageUploadVideoAction: {
        qint32 m_progress;
        stream >> m_progress;
        item.setProgress(m_progress);
    }
        break;
    case SendMessageAction::typeSendMessageRecordAudioAction: {
        
    }
        break;
    case SendMessageAction::typeSendMessageUploadAudioAction: {
        qint32 m_progress;
        stream >> m_progress;
        item.setProgress(m_progress);
    }
        break;
    case SendMessageAction::typeSendMessageUploadPhotoAction: {
        qint32 m_progress;
        stream >> m_progress;
        item.setProgress(m_progress);
    }
        break;
    case SendMessageAction::typeSendMessageUploadDocumentAction: {
        qint32 m_progress;
        stream >> m_progress;
        item.setProgress(m_progress);
    }
        break;
    case SendMessageAction::typeSendMessageGeoLocationAction: {
        
    }
        break;
    case SendMessageAction::typeSendMessageChooseContactAction: {
        
    }
        break;
    }
    return stream;
}

