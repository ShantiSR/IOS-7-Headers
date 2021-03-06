/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MediaPlayer/MPTransportControls.h>

@class UIActivityIndicatorView, UILabel;

@interface MPInlineTransportControls : MPTransportControls
{
    UILabel *_loadingMovieLabel;
    UIActivityIndicatorView *_loadingMovieIndicator;
}

- (void).cxx_destruct;
- (void)_enableAnimationIfNecessary:(id)arg1;
- (void)_disableAnimationIfNecessary:(id)arg1;
@property(readonly, nonatomic) struct CGRect availableProgressControlAreaFrame;
- (void)layoutSubviews;
- (void)setDisabledParts:(unsigned long long)arg1;
- (id)pauseButtonImage;
- (id)playButtonImage;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (id)newButtonForPart:(unsigned long long)arg1;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

