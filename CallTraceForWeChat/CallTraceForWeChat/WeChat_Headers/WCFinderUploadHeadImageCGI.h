//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSData, NSString;

@interface WCFinderUploadHeadImageCGI : WCFinderBaseCgi
{
    unsigned int _imageDataTotalLength;
    unsigned int _currentTaskStartPos;
    NSString *_imageDataMD5;
    NSData *_imageData;
    unsigned long long _scene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBolck;
}

@property(copy, nonatomic) CDUnknownBlockType failureBolck; // @synthesize failureBolck=_failureBolck;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int currentTaskStartPos; // @synthesize currentTaskStartPos=_currentTaskStartPos;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) unsigned int imageDataTotalLength; // @synthesize imageDataTotalLength=_imageDataTotalLength;
@property(retain, nonatomic) NSString *imageDataMD5; // @synthesize imageDataMD5=_imageDataMD5;
- (void).cxx_destruct;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithScene:(unsigned long long)arg1 avatarData:(id)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end
