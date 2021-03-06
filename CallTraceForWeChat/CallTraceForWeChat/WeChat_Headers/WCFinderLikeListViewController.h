//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderContentTableViewCellDelegate-Protocol.h"
#import "WCFinderFeedCommentTableViewCellDelegate-Protocol.h"
#import "WCFinderLikeListViewModelDelegate-Protocol.h"
#import "WCFinderMulitMediaTableViewCellDelegate-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"
#import "WCFinderToolbarTableViewCellDelegate-Protocol.h"

@class ForwardMessageLogicController, NSIndexPath, NSMutableDictionary, NSString, UILabel, UITableView, UITapGestureRecognizer, UIView, WCFinderCreateCoordinator, WCFinderFeedContentVM, WCFinderLikeListViewModel, WCFinderRefreshTableFooterView;

@interface WCFinderLikeListViewController : MMUIViewController <WCFinderLikeListViewModelDelegate, MMRefreshTableFooterDelegate, UITableViewDelegate, UITableViewDataSource, ForwardMessageLogicDelegate, WCFinderMulitMediaTableViewCellDelegate, WCFinderContentTableViewCellDelegate, WCFinderToolbarTableViewCellDelegate, WCFinderFeedCommentTableViewCellDelegate, WCFinderRefreshTableFooterViewDelegate, MMScrollActionSheetDelegate, WCFinderPostingCommentExt>
{
    _Bool _isSilencePlay;
    _Bool _isDisableVideoAutoPlay;
    WCFinderLikeListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    UIView *_noDataTipsView;
    UITableView *_tableView;
    ForwardMessageLogicController *_forwardLogic;
    WCFinderFeedContentVM *_currentShareContentVM;
    NSString *_latestAutoplayVideoTid;
    NSIndexPath *_currentForceIndexPath;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    NSMutableDictionary *_exposureDict;
    WCFinderCreateCoordinator *_createCoordinator;
}

@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) NSMutableDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) NSIndexPath *currentForceIndexPath; // @synthesize currentForceIndexPath=_currentForceIndexPath;
@property(nonatomic) _Bool isDisableVideoAutoPlay; // @synthesize isDisableVideoAutoPlay=_isDisableVideoAutoPlay;
@property(retain, nonatomic) NSString *latestAutoplayVideoTid; // @synthesize latestAutoplayVideoTid=_latestAutoplayVideoTid;
@property(retain, nonatomic) WCFinderFeedContentVM *currentShareContentVM; // @synthesize currentShareContentVM=_currentShareContentVM;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *noDataTipsView; // @synthesize noDataTipsView=_noDataTipsView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderLikeListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (_Bool)enableFeedShare;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onClickRightItem;
- (void)onClickCommentUserName:(id)arg1;
- (void)finderCommentCell:(id)arg1 didClickCommentLikeWithcomment:(id)arg2 contentVM:(id)arg3;
- (void)onRefreshMediaUI:(id)arg1 needAnimation:(_Bool)arg2;
- (void)onRefreshCommentUI:(id)arg1 needAnimation:(_Bool)arg2;
- (void)onClickCommentAction:(id)arg1 contentVM:(id)arg2;
- (void)showCommentActionSheetWithComment:(id)arg1 contentVM:(id)arg2;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)onContentTableViewCell:(id)arg1 longPressContentAction:(id)arg2 rect:(struct CGRect)arg3;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(_Bool)arg2;
- (void)clickContentPOIAction:(id)arg1;
- (void)onRefreshToolbarUI:(id)arg1;
- (id)getItemArrayConfig;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2;
- (void)onClickToolbarMoreAction:(id)arg1;
- (void)onClickToolbarLikeAction:(id)arg1;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)photoContentPageTurning:(id)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)onFeedFollowStatusChanged:(id)arg1 isFollow:(_Bool)arg2 contentVM:(id)arg3;
- (void)showSpamTipsWithString:(id)arg1;
- (void)didFeedDoubleLikeAction:(id)arg1;
- (void)onFeedCellDidClickHeaderView:(id)arg1 contentVM:(id)arg2;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)scrollEndProcess;
- (void)throttleScrollProcess;
- (void)preladVideoItems;
- (void)checkCurrentForceIndexPath;
- (void)stopVisibleVideo;
- (void)reportStopPlayMetaReportWithCell:(id)arg1 tid:(id)arg2;
- (void)stopCurrentVideo;
- (void)autoplayVideoProcess;
- (id)getCurrentForceIndexPath:(id)arg1;
- (id)getVisibleVideoIndexPathArray:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)processLastVideoHunger;
- (void)resetFooterViewNormal;
- (void)finderLikeListFetchFailWithErrorCode:(int)arg1;
- (void)finderLikeListEmpty;
- (void)finderLikeListDisinclineContentVM:(id)arg1 index:(long long)arg2;
- (void)finderLikeListNoMoreData;
- (void)finderLikeListLoadMoreFinished;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)configureTableView;
- (void)dealloc;
- (void)willDisappear;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

