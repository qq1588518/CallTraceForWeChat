//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMEasterEgg2020LuckyBagCgiDelegate-Protocol.h"
#import "MMEasterEgg2020LuckyBagDismissInteractiveTransitionDelegate-Protocol.h"
#import "MMEasterEgg2020LuckyBagGetAwardCgiDelegate-Protocol.h"
#import "MMEasterEgg2020LuckyBagResultCardViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class MMEasterEgg2020LuckyBagCgi, MMEasterEgg2020LuckyBagContentInfo, MMEasterEgg2020LuckyBagDismissInteractiveTransition, MMEasterEgg2020LuckyBagGetAwardCgi, MMEasterEgg2020LuckyBagLoadingInfo, MMEasterEgg2020LuckyBagReportObject, MMEasterEgg2020LuckyBagResultCardView, NSString, UIButton, UIImageView, UILabel, UIScreenEdgePanGestureRecognizer, UIScrollView, WAAppDismissAnimateTransition;

@interface MMEasterEgg2020LuckyBagViewController : MMUIViewController <UIViewControllerTransitioningDelegate, MMEasterEgg2020LuckyBagResultCardViewDelegate, MMEasterEgg2020LuckyBagGetAwardCgiDelegate, MMEasterEgg2020LuckyBagDismissInteractiveTransitionDelegate, MMEasterEgg2020LuckyBagCgiDelegate>
{
    _Bool _canShowCardView;
    MMEasterEgg2020LuckyBagReportObject *_reportObject;
    NSString *_keyword;
    NSString *_appId;
    NSString *_traceId;
    MMEasterEgg2020LuckyBagCgi *_cgi;
    unsigned long long _enterTime;
    MMEasterEgg2020LuckyBagDismissInteractiveTransition *_dismissInteractiveTransition;
    WAAppDismissAnimateTransition *_dismissAnimateTransition;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
    MMEasterEgg2020LuckyBagLoadingInfo *_loadingInfo;
    UIScrollView *_contentView;
    UIImageView *_backgroundLogoView;
    UIButton *_bottomLinkButton;
    UILabel *_bottomSubLabel;
    UIImageView *_bigLuckyBagView;
    MMEasterEgg2020LuckyBagContentInfo *_contentInfo;
    MMEasterEgg2020LuckyBagResultCardView *_cardView;
    MMEasterEgg2020LuckyBagGetAwardCgi *_getAwardCgi;
}

+ (id)defaultContentInfo;
+ (_Bool)awardReceiveButtonEnabledForFailReason:(unsigned long long)arg1;
+ (id)awardReceiveButtonTextForFailReason:(unsigned long long)arg1;
+ (id)awardFailReasonTextForFailReason:(unsigned long long)arg1;
@property(retain, nonatomic) MMEasterEgg2020LuckyBagGetAwardCgi *getAwardCgi; // @synthesize getAwardCgi=_getAwardCgi;
@property(nonatomic) _Bool canShowCardView; // @synthesize canShowCardView=_canShowCardView;
@property(retain, nonatomic) MMEasterEgg2020LuckyBagResultCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) MMEasterEgg2020LuckyBagContentInfo *contentInfo; // @synthesize contentInfo=_contentInfo;
@property(retain, nonatomic) UIImageView *bigLuckyBagView; // @synthesize bigLuckyBagView=_bigLuckyBagView;
@property(retain, nonatomic) UILabel *bottomSubLabel; // @synthesize bottomSubLabel=_bottomSubLabel;
@property(retain, nonatomic) UIButton *bottomLinkButton; // @synthesize bottomLinkButton=_bottomLinkButton;
@property(retain, nonatomic) UIImageView *backgroundLogoView; // @synthesize backgroundLogoView=_backgroundLogoView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMEasterEgg2020LuckyBagLoadingInfo *loadingInfo; // @synthesize loadingInfo=_loadingInfo;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(retain, nonatomic) WAAppDismissAnimateTransition *dismissAnimateTransition; // @synthesize dismissAnimateTransition=_dismissAnimateTransition;
@property(retain, nonatomic) MMEasterEgg2020LuckyBagDismissInteractiveTransition *dismissInteractiveTransition; // @synthesize dismissInteractiveTransition=_dismissInteractiveTransition;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) MMEasterEgg2020LuckyBagCgi *cgi; // @synthesize cgi=_cgi;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) MMEasterEgg2020LuckyBagReportObject *reportObject; // @synthesize reportObject=_reportObject;
- (void).cxx_destruct;
- (void)onLuckyBagGetAwardCgiFailed:(id)arg1 reason:(unsigned long long)arg2;
- (void)onLuckyBagGetAwardCgiOk:(id)arg1;
- (void)onTapReceiveButton;
- (void)onLuckyBagResultCardViewLoadingOk;
- (void)onLuckyBagCgiFailed:(id)arg1;
- (void)onLuckyBagCgiOk:(id)arg1 contentInfo:(id)arg2;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)mergeContentInfo:(id)arg1 fromLoadingInfo:(id)arg2;
- (id)getResultCardViewAnimation;
- (void)enableBottomLink:(id)arg1;
- (void)layoutContentView;
- (void)showResultCardViewIfNeeded;
- (void)onTapBottomLinkButton;
- (void)onTapReturnNavigationItem;
- (void)viewDidTransitionToNewSize;
- (_Bool)useTransparentNavibar;
- (void)initGesture;
- (void)initData;
- (void)initView;
- (void)DismissMyselfAnimated:(_Bool)arg1;
- (void)viewWillDismiss:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)initWithKeyword:(id)arg1 appId:(id)arg2 traceId:(id)arg3 loadingInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

