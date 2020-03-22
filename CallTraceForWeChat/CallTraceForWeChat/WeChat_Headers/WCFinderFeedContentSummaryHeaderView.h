//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderFeedContentHeaderView.h"

#import "WCFinderContactExt-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView, WCFinderAnimationLoadingView, WCFinderContact, WCFinderHeadImageView;

@interface WCFinderFeedContentSummaryHeaderView : WCFinderFeedContentHeaderView <WCFinderHeadImageViewDelegate, WCFinderContactExt>
{
    _Bool _shouldNickNameBeLinkColor;
    _Bool _shouldFollowBtnHidden;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    WCFinderContact *_contact;
    UIImageView *_authInfoIconView;
    UIView *_topLine;
    UILabel *_authInfoLabel;
    UIButton *_followBtn;
    WCFinderAnimationLoadingView *_loadingView;
    NSString *_tipsString;
    UILabel *_tipsInfoLabel;
}

@property(retain, nonatomic) UILabel *tipsInfoLabel; // @synthesize tipsInfoLabel=_tipsInfoLabel;
@property(retain, nonatomic) NSString *tipsString; // @synthesize tipsString=_tipsString;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImageView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (_Bool)shouldFollowBtnHidden;
- (_Bool)shouldNickNameBeLinkColor;
- (void).cxx_destruct;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFinderContactFollowUnFollowStart;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1 isFollowing:(_Bool)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (void)startUnFollowAnimation;
- (void)didClickFollowBtn:(id)arg1;
- (void)clickAvator;
- (void)setShouldFollowBtnHidden:(_Bool)arg1;
- (void)setShouldNickNameBeLinkColor:(_Bool)arg1;
- (void)resetReuseState;
- (void)hideFollowViewIfNeeded;
- (void)updateFollowUI:(_Bool)arg1;
- (void)updateAuthInfoLabel;
- (void)updateAuthInfoIconView;
- (void)updateTimeLabelUI;
- (void)adjustUIMarginWithMaxMargin:(double)arg1;
- (void)adjustUIMargin;
- (void)reloadHeaderWithContact:(id)arg1 tipsString:(id)arg2;
- (void)updateHeaderContentWithContact:(id)arg1 tipsString:(id)arg2;
- (void)updateRightTipsUI:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
