//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString, RemindWin;

@interface TransferPhoneGetRcvrResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amountRemindBit; // @dynamic amountRemindBit;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *checkNameMask; // @dynamic checkNameMask;
@property(retain, nonatomic) NSString *checkNameWording; // @dynamic checkNameWording;
@property(retain, nonatomic) NSMutableArray *delayOptions; // @dynamic delayOptions;
@property(retain, nonatomic) NSString *getRcvrExt; // @dynamic getRcvrExt;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(nonatomic) unsigned int invalid; // @dynamic invalid;
@property(retain, nonatomic) RemindWin *jumpWin; // @dynamic jumpWin;
@property(retain, nonatomic) NSString *phone; // @dynamic phone;
@property(retain, nonatomic) NSString *rcvrOpenid; // @dynamic rcvrOpenid;
@property(retain, nonatomic) NSString *rcvrToken; // @dynamic rcvrToken;
@property(retain, nonatomic) NSString *realName; // @dynamic realName;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *timestampMs; // @dynamic timestampMs;
@property(retain, nonatomic) NSString *wxName; // @dynamic wxName;
@property(retain, nonatomic) RemindWin *wxnameChgWin; // @dynamic wxnameChgWin;

@end

