//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, OpenIMChatRoomMemberInReq;

@interface ApproveAddOpenIMChatRoomMemberReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *invitedMember; // @dynamic invitedMember;
@property(retain, nonatomic) OpenIMChatRoomMemberInReq *inviter; // @dynamic inviter;
@property(retain, nonatomic) NSString *roomName; // @dynamic roomName;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end
