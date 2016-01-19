// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesbotresults.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

MessagesBotResults::MessagesBotResults(MessagesBotResultsType classType, InboundPkt *in) :
    m_flags(0),
    m_queryId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesBotResults::MessagesBotResults(InboundPkt *in) :
    m_flags(0),
    m_queryId(0),
    m_classType(typeMessagesBotResults)
{
    fetch(in);
}

MessagesBotResults::MessagesBotResults(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_queryId(0),
    m_classType(typeMessagesBotResults)
{
}

MessagesBotResults::~MessagesBotResults() {
}

void MessagesBotResults::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 MessagesBotResults::flags() const {
    return m_flags;
}

void MessagesBotResults::setGallery(bool gallery) {
    if(gallery) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

bool MessagesBotResults::gallery() const {
    return (m_flags & 1<<0);
}

void MessagesBotResults::setNextOffset(const QString &nextOffset) {
    m_nextOffset = nextOffset;
}

QString MessagesBotResults::nextOffset() const {
    return m_nextOffset;
}

void MessagesBotResults::setQueryId(qint64 queryId) {
    m_queryId = queryId;
}

qint64 MessagesBotResults::queryId() const {
    return m_queryId;
}

void MessagesBotResults::setResults(const QList<BotInlineResult> &results) {
    m_results = results;
}

QList<BotInlineResult> MessagesBotResults::results() const {
    return m_results;
}

bool MessagesBotResults::operator ==(const MessagesBotResults &b) const {
    return m_classType == b.m_classType &&
           m_flags == b.m_flags &&
           m_nextOffset == b.m_nextOffset &&
           m_queryId == b.m_queryId &&
           m_results == b.m_results;
}

void MessagesBotResults::setClassType(MessagesBotResults::MessagesBotResultsType classType) {
    m_classType = classType;
}

MessagesBotResults::MessagesBotResultsType MessagesBotResults::classType() const {
    return m_classType;
}

bool MessagesBotResults::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesBotResults: {
        m_flags = in->fetchInt();
        m_queryId = in->fetchLong();
        if(m_flags & 1<<1) {
            m_nextOffset = in->fetchQString();
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_results_length = in->fetchInt();
        m_results.clear();
        for (qint32 i = 0; i < m_results_length; i++) {
            BotInlineResult type;
            type.fetch(in);
            m_results.append(type);
        }
        m_classType = static_cast<MessagesBotResultsType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesBotResults::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesBotResults: {
        out->appendInt(m_flags);
        out->appendLong(m_queryId);
        out->appendQString(m_nextOffset);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_results.count());
        for (qint32 i = 0; i < m_results.count(); i++) {
            m_results[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}
