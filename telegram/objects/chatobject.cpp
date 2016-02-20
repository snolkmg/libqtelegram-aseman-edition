// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "chatobject.h"

ChatObject::ChatObject(const Chat &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_migratedTo(0),
    m_photo(0),
    m_core(core)
{
    m_migratedTo = new InputChannelObject(m_core.migratedTo(), this);
    connect(m_migratedTo.data(), &InputChannelObject::coreChanged, this, &ChatObject::coreMigratedToChanged);
    m_photo = new ChatPhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &ChatPhotoObject::coreChanged, this, &ChatObject::corePhotoChanged);
}

ChatObject::ChatObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_migratedTo(0),
    m_photo(0),
    m_core()
{
    m_migratedTo = new InputChannelObject(m_core.migratedTo(), this);
    connect(m_migratedTo.data(), &InputChannelObject::coreChanged, this, &ChatObject::coreMigratedToChanged);
    m_photo = new ChatPhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &ChatPhotoObject::coreChanged, this, &ChatObject::corePhotoChanged);
}

ChatObject::~ChatObject() {
}

void ChatObject::setAccessHash(qint64 accessHash) {
    if(m_core.accessHash() == accessHash) return;
    m_core.setAccessHash(accessHash);
    Q_EMIT accessHashChanged();
    Q_EMIT coreChanged();
}

qint64 ChatObject::accessHash() const {
    return m_core.accessHash();
}

void ChatObject::setAdmin(bool admin) {
    if(m_core.admin() == admin) return;
    m_core.setAdmin(admin);
    Q_EMIT adminChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::admin() const {
    return m_core.admin();
}

void ChatObject::setAdminsEnabled(bool adminsEnabled) {
    if(m_core.adminsEnabled() == adminsEnabled) return;
    m_core.setAdminsEnabled(adminsEnabled);
    Q_EMIT adminsEnabledChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::adminsEnabled() const {
    return m_core.adminsEnabled();
}

void ChatObject::setBroadcast(bool broadcast) {
    if(m_core.broadcast() == broadcast) return;
    m_core.setBroadcast(broadcast);
    Q_EMIT broadcastChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::broadcast() const {
    return m_core.broadcast();
}

void ChatObject::setCreator(bool creator) {
    if(m_core.creator() == creator) return;
    m_core.setCreator(creator);
    Q_EMIT creatorChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::creator() const {
    return m_core.creator();
}

void ChatObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 ChatObject::date() const {
    return m_core.date();
}

void ChatObject::setDeactivated(bool deactivated) {
    if(m_core.deactivated() == deactivated) return;
    m_core.setDeactivated(deactivated);
    Q_EMIT deactivatedChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::deactivated() const {
    return m_core.deactivated();
}

void ChatObject::setEditor(bool editor) {
    if(m_core.editor() == editor) return;
    m_core.setEditor(editor);
    Q_EMIT editorChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::editor() const {
    return m_core.editor();
}

void ChatObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 ChatObject::flags() const {
    return m_core.flags();
}

void ChatObject::setId(qint32 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint32 ChatObject::id() const {
    return m_core.id();
}

void ChatObject::setInvitesEnabled(bool invitesEnabled) {
    if(m_core.invitesEnabled() == invitesEnabled) return;
    m_core.setInvitesEnabled(invitesEnabled);
    Q_EMIT invitesEnabledChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::invitesEnabled() const {
    return m_core.invitesEnabled();
}

void ChatObject::setKicked(bool kicked) {
    if(m_core.kicked() == kicked) return;
    m_core.setKicked(kicked);
    Q_EMIT kickedChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::kicked() const {
    return m_core.kicked();
}

void ChatObject::setLeft(bool left) {
    if(m_core.left() == left) return;
    m_core.setLeft(left);
    Q_EMIT leftChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::left() const {
    return m_core.left();
}

void ChatObject::setMegagroup(bool megagroup) {
    if(m_core.megagroup() == megagroup) return;
    m_core.setMegagroup(megagroup);
    Q_EMIT megagroupChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::megagroup() const {
    return m_core.megagroup();
}

void ChatObject::setMigratedTo(InputChannelObject* migratedTo) {
    if(m_migratedTo == migratedTo) return;
    if(m_migratedTo) delete m_migratedTo;
    m_migratedTo = migratedTo;
    if(m_migratedTo) {
        m_migratedTo->setParent(this);
        m_core.setMigratedTo(m_migratedTo->core());
        connect(m_migratedTo.data(), &InputChannelObject::coreChanged, this, &ChatObject::coreMigratedToChanged);
    }
    Q_EMIT migratedToChanged();
    Q_EMIT coreChanged();
}

InputChannelObject*  ChatObject::migratedTo() const {
    return m_migratedTo;
}

void ChatObject::setModerator(bool moderator) {
    if(m_core.moderator() == moderator) return;
    m_core.setModerator(moderator);
    Q_EMIT moderatorChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::moderator() const {
    return m_core.moderator();
}

void ChatObject::setParticipantsCount(qint32 participantsCount) {
    if(m_core.participantsCount() == participantsCount) return;
    m_core.setParticipantsCount(participantsCount);
    Q_EMIT participantsCountChanged();
    Q_EMIT coreChanged();
}

qint32 ChatObject::participantsCount() const {
    return m_core.participantsCount();
}

void ChatObject::setPhoto(ChatPhotoObject* photo) {
    if(m_photo == photo) return;
    if(m_photo) delete m_photo;
    m_photo = photo;
    if(m_photo) {
        m_photo->setParent(this);
        m_core.setPhoto(m_photo->core());
        connect(m_photo.data(), &ChatPhotoObject::coreChanged, this, &ChatObject::corePhotoChanged);
    }
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

ChatPhotoObject*  ChatObject::photo() const {
    return m_photo;
}

void ChatObject::setRestricted(bool restricted) {
    if(m_core.restricted() == restricted) return;
    m_core.setRestricted(restricted);
    Q_EMIT restrictedChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::restricted() const {
    return m_core.restricted();
}

void ChatObject::setRestrictionReason(const QString &restrictionReason) {
    if(m_core.restrictionReason() == restrictionReason) return;
    m_core.setRestrictionReason(restrictionReason);
    Q_EMIT restrictionReasonChanged();
    Q_EMIT coreChanged();
}

QString ChatObject::restrictionReason() const {
    return m_core.restrictionReason();
}

void ChatObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

QString ChatObject::title() const {
    return m_core.title();
}

void ChatObject::setUsername(const QString &username) {
    if(m_core.username() == username) return;
    m_core.setUsername(username);
    Q_EMIT usernameChanged();
    Q_EMIT coreChanged();
}

QString ChatObject::username() const {
    return m_core.username();
}

void ChatObject::setVerified(bool verified) {
    if(m_core.verified() == verified) return;
    m_core.setVerified(verified);
    Q_EMIT verifiedChanged();
    Q_EMIT coreChanged();
}

bool ChatObject::verified() const {
    return m_core.verified();
}

void ChatObject::setVersion(qint32 version) {
    if(m_core.version() == version) return;
    m_core.setVersion(version);
    Q_EMIT versionChanged();
    Q_EMIT coreChanged();
}

qint32 ChatObject::version() const {
    return m_core.version();
}

ChatObject &ChatObject::operator =(const Chat &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_migratedTo->setCore(b.migratedTo());
    m_photo->setCore(b.photo());

    Q_EMIT accessHashChanged();
    Q_EMIT adminChanged();
    Q_EMIT adminsEnabledChanged();
    Q_EMIT broadcastChanged();
    Q_EMIT creatorChanged();
    Q_EMIT dateChanged();
    Q_EMIT deactivatedChanged();
    Q_EMIT editorChanged();
    Q_EMIT flagsChanged();
    Q_EMIT idChanged();
    Q_EMIT invitesEnabledChanged();
    Q_EMIT kickedChanged();
    Q_EMIT leftChanged();
    Q_EMIT megagroupChanged();
    Q_EMIT migratedToChanged();
    Q_EMIT moderatorChanged();
    Q_EMIT participantsCountChanged();
    Q_EMIT photoChanged();
    Q_EMIT restrictedChanged();
    Q_EMIT restrictionReasonChanged();
    Q_EMIT titleChanged();
    Q_EMIT usernameChanged();
    Q_EMIT verifiedChanged();
    Q_EMIT versionChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ChatObject::operator ==(const Chat &b) const {
    return m_core == b;
}

void ChatObject::setClassType(quint32 classType) {
    Chat::ChatType result;
    switch(classType) {
    case TypeChatEmpty:
        result = Chat::typeChatEmpty;
        break;
    case TypeChat:
        result = Chat::typeChat;
        break;
    case TypeChatForbidden:
        result = Chat::typeChatForbidden;
        break;
    case TypeChannel:
        result = Chat::typeChannel;
        break;
    case TypeChannelForbidden:
        result = Chat::typeChannelForbidden;
        break;
    default:
        result = Chat::typeChatEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 ChatObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case Chat::typeChatEmpty:
        result = TypeChatEmpty;
        break;
    case Chat::typeChat:
        result = TypeChat;
        break;
    case Chat::typeChatForbidden:
        result = TypeChatForbidden;
        break;
    case Chat::typeChannel:
        result = TypeChannel;
        break;
    case Chat::typeChannelForbidden:
        result = TypeChannelForbidden;
        break;
    default:
        result = TypeChatEmpty;
        break;
    }

    return result;
}

void ChatObject::setCore(const Chat &core) {
    operator =(core);
}

Chat ChatObject::core() const {
    return m_core;
}

void ChatObject::coreMigratedToChanged() {
    if(m_core.migratedTo() == m_migratedTo->core()) return;
    m_core.setMigratedTo(m_migratedTo->core());
    Q_EMIT migratedToChanged();
    Q_EMIT coreChanged();
}

void ChatObject::corePhotoChanged() {
    if(m_core.photo() == m_photo->core()) return;
    m_core.setPhoto(m_photo->core());
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

