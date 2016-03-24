// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "updatesdifference.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

UpdatesDifference::UpdatesDifference(UpdatesDifferenceType classType, InboundPkt *in) :
    m_date(0),
    m_seq(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

UpdatesDifference::UpdatesDifference(InboundPkt *in) :
    m_date(0),
    m_seq(0),
    m_classType(typeUpdatesDifferenceEmpty)
{
    fetch(in);
}

UpdatesDifference::UpdatesDifference(const Null &null) :
    TelegramTypeObject(null),
    m_date(0),
    m_seq(0),
    m_classType(typeUpdatesDifferenceEmpty)
{
}

UpdatesDifference::~UpdatesDifference() {
}

void UpdatesDifference::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

QList<Chat> UpdatesDifference::chats() const {
    return m_chats;
}

void UpdatesDifference::setDate(qint32 date) {
    m_date = date;
}

qint32 UpdatesDifference::date() const {
    return m_date;
}

void UpdatesDifference::setIntermediateState(const UpdatesState &intermediateState) {
    m_intermediateState = intermediateState;
}

UpdatesState UpdatesDifference::intermediateState() const {
    return m_intermediateState;
}

void UpdatesDifference::setNewEncryptedMessages(const QList<EncryptedMessage> &newEncryptedMessages) {
    m_newEncryptedMessages = newEncryptedMessages;
}

QList<EncryptedMessage> UpdatesDifference::newEncryptedMessages() const {
    return m_newEncryptedMessages;
}

void UpdatesDifference::setNewMessages(const QList<Message> &newMessages) {
    m_newMessages = newMessages;
}

QList<Message> UpdatesDifference::newMessages() const {
    return m_newMessages;
}

void UpdatesDifference::setOtherUpdates(const QList<Update> &otherUpdates) {
    m_otherUpdates = otherUpdates;
}

QList<Update> UpdatesDifference::otherUpdates() const {
    return m_otherUpdates;
}

void UpdatesDifference::setSeq(qint32 seq) {
    m_seq = seq;
}

qint32 UpdatesDifference::seq() const {
    return m_seq;
}

void UpdatesDifference::setState(const UpdatesState &state) {
    m_state = state;
}

UpdatesState UpdatesDifference::state() const {
    return m_state;
}

void UpdatesDifference::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> UpdatesDifference::users() const {
    return m_users;
}

bool UpdatesDifference::operator ==(const UpdatesDifference &b) const {
    return m_classType == b.m_classType &&
           m_chats == b.m_chats &&
           m_date == b.m_date &&
           m_intermediateState == b.m_intermediateState &&
           m_newEncryptedMessages == b.m_newEncryptedMessages &&
           m_newMessages == b.m_newMessages &&
           m_otherUpdates == b.m_otherUpdates &&
           m_seq == b.m_seq &&
           m_state == b.m_state &&
           m_users == b.m_users;
}

void UpdatesDifference::setClassType(UpdatesDifference::UpdatesDifferenceType classType) {
    m_classType = classType;
}

UpdatesDifference::UpdatesDifferenceType UpdatesDifference::classType() const {
    return m_classType;
}

bool UpdatesDifference::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeUpdatesDifferenceEmpty: {
        m_date = in->fetchInt();
        m_seq = in->fetchInt();
        m_classType = static_cast<UpdatesDifferenceType>(x);
        return true;
    }
        break;
    
    case typeUpdatesDifference: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_newMessages_length = in->fetchInt();
        m_newMessages.clear();
        for (qint32 i = 0; i < m_newMessages_length; i++) {
            Message type;
            type.fetch(in);
            m_newMessages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_newEncryptedMessages_length = in->fetchInt();
        m_newEncryptedMessages.clear();
        for (qint32 i = 0; i < m_newEncryptedMessages_length; i++) {
            EncryptedMessage type;
            type.fetch(in);
            m_newEncryptedMessages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_otherUpdates_length = in->fetchInt();
        m_otherUpdates.clear();
        for (qint32 i = 0; i < m_otherUpdates_length; i++) {
            Update type;
            type.fetch(in);
            m_otherUpdates.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_state.fetch(in);
        m_classType = static_cast<UpdatesDifferenceType>(x);
        return true;
    }
        break;
    
    case typeUpdatesDifferenceSlice: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_newMessages_length = in->fetchInt();
        m_newMessages.clear();
        for (qint32 i = 0; i < m_newMessages_length; i++) {
            Message type;
            type.fetch(in);
            m_newMessages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_newEncryptedMessages_length = in->fetchInt();
        m_newEncryptedMessages.clear();
        for (qint32 i = 0; i < m_newEncryptedMessages_length; i++) {
            EncryptedMessage type;
            type.fetch(in);
            m_newEncryptedMessages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_otherUpdates_length = in->fetchInt();
        m_otherUpdates.clear();
        for (qint32 i = 0; i < m_otherUpdates_length; i++) {
            Update type;
            type.fetch(in);
            m_otherUpdates.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_intermediateState.fetch(in);
        m_classType = static_cast<UpdatesDifferenceType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool UpdatesDifference::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeUpdatesDifferenceEmpty: {
        out->appendInt(m_date);
        out->appendInt(m_seq);
        return true;
    }
        break;
    
    case typeUpdatesDifference: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_newMessages.count());
        for (qint32 i = 0; i < m_newMessages.count(); i++) {
            m_newMessages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_newEncryptedMessages.count());
        for (qint32 i = 0; i < m_newEncryptedMessages.count(); i++) {
            m_newEncryptedMessages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_otherUpdates.count());
        for (qint32 i = 0; i < m_otherUpdates.count(); i++) {
            m_otherUpdates[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        m_state.push(out);
        return true;
    }
        break;
    
    case typeUpdatesDifferenceSlice: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_newMessages.count());
        for (qint32 i = 0; i < m_newMessages.count(); i++) {
            m_newMessages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_newEncryptedMessages.count());
        for (qint32 i = 0; i < m_newEncryptedMessages.count(); i++) {
            m_newEncryptedMessages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_otherUpdates.count());
        for (qint32 i = 0; i < m_otherUpdates.count(); i++) {
            m_otherUpdates[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        m_intermediateState.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QByteArray UpdatesDifference::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const UpdatesDifference &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case UpdatesDifference::typeUpdatesDifferenceEmpty:
        stream << item.date();
        stream << item.seq();
        break;
    case UpdatesDifference::typeUpdatesDifference:
        stream << item.newMessages();
        stream << item.newEncryptedMessages();
        stream << item.otherUpdates();
        stream << item.chats();
        stream << item.users();
        stream << item.state();
        break;
    case UpdatesDifference::typeUpdatesDifferenceSlice:
        stream << item.newMessages();
        stream << item.newEncryptedMessages();
        stream << item.otherUpdates();
        stream << item.chats();
        stream << item.users();
        stream << item.intermediateState();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, UpdatesDifference &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<UpdatesDifference::UpdatesDifferenceType>(type));
    switch(type) {
    case UpdatesDifference::typeUpdatesDifferenceEmpty: {
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        qint32 m_seq;
        stream >> m_seq;
        item.setSeq(m_seq);
    }
        break;
    case UpdatesDifference::typeUpdatesDifference: {
        QList<Message> m_new_messages;
        stream >> m_new_messages;
        item.setNewMessages(m_new_messages);
        QList<EncryptedMessage> m_new_encrypted_messages;
        stream >> m_new_encrypted_messages;
        item.setNewEncryptedMessages(m_new_encrypted_messages);
        QList<Update> m_other_updates;
        stream >> m_other_updates;
        item.setOtherUpdates(m_other_updates);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
        UpdatesState m_state;
        stream >> m_state;
        item.setState(m_state);
    }
        break;
    case UpdatesDifference::typeUpdatesDifferenceSlice: {
        QList<Message> m_new_messages;
        stream >> m_new_messages;
        item.setNewMessages(m_new_messages);
        QList<EncryptedMessage> m_new_encrypted_messages;
        stream >> m_new_encrypted_messages;
        item.setNewEncryptedMessages(m_new_encrypted_messages);
        QList<Update> m_other_updates;
        stream >> m_other_updates;
        item.setOtherUpdates(m_other_updates);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
        UpdatesState m_intermediate_state;
        stream >> m_intermediate_state;
        item.setIntermediateState(m_intermediate_state);
    }
        break;
    }
    return stream;
}

