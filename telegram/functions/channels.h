// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_FNC_CHANNELS
#define LQTG_FNC_CHANNELS

#include "telegramfunctionobject.h"
#include "telegram/types/messagesdialogs.h"
#include <QtGlobal>
#include "telegram/types/messagesmessages.h"
#include "telegram/types/inputchannel.h"
#include "telegram/types/messagesaffectedmessages.h"
#include <QList>
#include "telegram/types/messagesaffectedhistory.h"
#include "telegram/types/inputuser.h"
#include "telegram/types/channelschannelparticipants.h"
#include "telegram/types/channelparticipantsfilter.h"
#include "telegram/types/channelschannelparticipant.h"
#include "telegram/types/messageschats.h"
#include "telegram/types/messageschatfull.h"
#include "telegram/types/updatestype.h"
#include <QString>
#include "telegram/types/channelparticipantrole.h"
#include "telegram/types/inputchatphoto.h"
#include "telegram/types/exportedchatinvite.h"

namespace Tg {
namespace Functions {

class LIBQTELEGRAMSHARED_EXPORT Channels : public TelegramFunctionObject
{
public:
    enum ChannelsFunction {
        fncChannelsGetDialogs = 0xa9d3d249,
        fncChannelsGetImportantHistory = 0x8f494bb2,
        fncChannelsReadHistory = 0xcc104937,
        fncChannelsDeleteMessages = 0x84c1fd4e,
        fncChannelsDeleteUserHistory = 0xd10dd71b,
        fncChannelsReportSpam = 0xfe087810,
        fncChannelsGetMessages = 0x93d7b347,
        fncChannelsGetParticipants = 0x24d98f92,
        fncChannelsGetParticipant = 0x546dd7a6,
        fncChannelsGetChannels = 0xa7f6bbb,
        fncChannelsGetFullChannel = 0x8736a09,
        fncChannelsCreateChannel = 0xf4893d7f,
        fncChannelsEditAbout = 0x13e27f1e,
        fncChannelsEditAdmin = 0xeb7611d0,
        fncChannelsEditTitle = 0x566decd0,
        fncChannelsEditPhoto = 0xf12e57c9,
        fncChannelsToggleComments = 0xaaa29e88,
        fncChannelsCheckUsername = 0x10e6bd2c,
        fncChannelsUpdateUsername = 0x3514b3de,
        fncChannelsJoinChannel = 0x24b524c5,
        fncChannelsLeaveChannel = 0xf836aa95,
        fncChannelsInviteToChannel = 0x199f3a6c,
        fncChannelsKickFromChannel = 0xa672de14,
        fncChannelsExportInvite = 0xc7560885,
        fncChannelsDeleteChannel = 0xc0111fe3,
        fncChannelsToggleInvites = 0x49609307
    };

    Channels();
    virtual ~Channels();

    static bool getDialogs(OutboundPkt *out, qint32 offset, qint32 limit);
    static MessagesDialogs getDialogsResult(InboundPkt *in);

    static bool getImportantHistory(OutboundPkt *out, const InputChannel &channel, qint32 offsetId, qint32 offsetDate, qint32 addOffset, qint32 limit, qint32 maxId, qint32 minId);
    static MessagesMessages getImportantHistoryResult(InboundPkt *in);

    static bool readHistory(OutboundPkt *out, const InputChannel &channel, qint32 maxId);
    static bool readHistoryResult(InboundPkt *in);

    static bool deleteMessages(OutboundPkt *out, const InputChannel &channel, const QList<qint32> &id);
    static MessagesAffectedMessages deleteMessagesResult(InboundPkt *in);

    static bool deleteUserHistory(OutboundPkt *out, const InputChannel &channel, const InputUser &userId);
    static MessagesAffectedHistory deleteUserHistoryResult(InboundPkt *in);

    static bool reportSpam(OutboundPkt *out, const InputChannel &channel, const InputUser &userId, const QList<qint32> &id);
    static bool reportSpamResult(InboundPkt *in);

    static bool getMessages(OutboundPkt *out, const InputChannel &channel, const QList<qint32> &id);
    static MessagesMessages getMessagesResult(InboundPkt *in);

    static bool getParticipants(OutboundPkt *out, const InputChannel &channel, const ChannelParticipantsFilter &filter, qint32 offset, qint32 limit);
    static ChannelsChannelParticipants getParticipantsResult(InboundPkt *in);

    static bool getParticipant(OutboundPkt *out, const InputChannel &channel, const InputUser &userId);
    static ChannelsChannelParticipant getParticipantResult(InboundPkt *in);

    static bool getChannels(OutboundPkt *out, const QList<InputChannel> &id);
    static MessagesChats getChannelsResult(InboundPkt *in);

    static bool getFullChannel(OutboundPkt *out, const InputChannel &channel);
    static MessagesChatFull getFullChannelResult(InboundPkt *in);

    static bool createChannel(OutboundPkt *out, bool broadcast, bool megagroup, const QString &title, const QString &about);
    static UpdatesType createChannelResult(InboundPkt *in);

    static bool editAbout(OutboundPkt *out, const InputChannel &channel, const QString &about);
    static bool editAboutResult(InboundPkt *in);

    static bool editAdmin(OutboundPkt *out, const InputChannel &channel, const InputUser &userId, const ChannelParticipantRole &role);
    static UpdatesType editAdminResult(InboundPkt *in);

    static bool editTitle(OutboundPkt *out, const InputChannel &channel, const QString &title);
    static UpdatesType editTitleResult(InboundPkt *in);

    static bool editPhoto(OutboundPkt *out, const InputChannel &channel, const InputChatPhoto &photo);
    static UpdatesType editPhotoResult(InboundPkt *in);

    static bool toggleComments(OutboundPkt *out, const InputChannel &channel, bool enabled);
    static UpdatesType toggleCommentsResult(InboundPkt *in);

    static bool checkUsername(OutboundPkt *out, const InputChannel &channel, const QString &username);
    static bool checkUsernameResult(InboundPkt *in);

    static bool updateUsername(OutboundPkt *out, const InputChannel &channel, const QString &username);
    static bool updateUsernameResult(InboundPkt *in);

    static bool joinChannel(OutboundPkt *out, const InputChannel &channel);
    static UpdatesType joinChannelResult(InboundPkt *in);

    static bool leaveChannel(OutboundPkt *out, const InputChannel &channel);
    static UpdatesType leaveChannelResult(InboundPkt *in);

    static bool inviteToChannel(OutboundPkt *out, const InputChannel &channel, const QList<InputUser> &users);
    static UpdatesType inviteToChannelResult(InboundPkt *in);

    static bool kickFromChannel(OutboundPkt *out, const InputChannel &channel, const InputUser &userId, bool kicked);
    static UpdatesType kickFromChannelResult(InboundPkt *in);

    static bool exportInvite(OutboundPkt *out, const InputChannel &channel);
    static ExportedChatInvite exportInviteResult(InboundPkt *in);

    static bool deleteChannel(OutboundPkt *out, const InputChannel &channel);
    static UpdatesType deleteChannelResult(InboundPkt *in);

    static bool toggleInvites(OutboundPkt *out, const InputChannel &channel, bool enabled);
    static UpdatesType toggleInvitesResult(InboundPkt *in);

};

}
}

#endif // LQTG_FNC_CHANNELS
