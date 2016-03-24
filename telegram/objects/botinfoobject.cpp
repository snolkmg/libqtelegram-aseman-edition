// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "botinfoobject.h"

BotInfoObject::BotInfoObject(const BotInfo &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

BotInfoObject::BotInfoObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

BotInfoObject::~BotInfoObject() {
}

void BotInfoObject::setCommands(const QList<BotCommand> &commands) {
    if(m_core.commands() == commands) return;
    m_core.setCommands(commands);
    Q_EMIT commandsChanged();
    Q_EMIT coreChanged();
}

QList<BotCommand> BotInfoObject::commands() const {
    return m_core.commands();
}

void BotInfoObject::setDescription(const QString &description) {
    if(m_core.description() == description) return;
    m_core.setDescription(description);
    Q_EMIT descriptionChanged();
    Q_EMIT coreChanged();
}

QString BotInfoObject::description() const {
    return m_core.description();
}

void BotInfoObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

qint32 BotInfoObject::userId() const {
    return m_core.userId();
}

BotInfoObject &BotInfoObject::operator =(const BotInfo &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT commandsChanged();
    Q_EMIT descriptionChanged();
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool BotInfoObject::operator ==(const BotInfo &b) const {
    return m_core == b;
}

void BotInfoObject::setClassType(quint32 classType) {
    BotInfo::BotInfoType result;
    switch(classType) {
    case TypeBotInfo:
        result = BotInfo::typeBotInfo;
        break;
    default:
        result = BotInfo::typeBotInfo;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 BotInfoObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case BotInfo::typeBotInfo:
        result = TypeBotInfo;
        break;
    default:
        result = TypeBotInfo;
        break;
    }

    return result;
}

void BotInfoObject::setCore(const BotInfo &core) {
    operator =(core);
}

BotInfo BotInfoObject::core() const {
    return m_core;
}

