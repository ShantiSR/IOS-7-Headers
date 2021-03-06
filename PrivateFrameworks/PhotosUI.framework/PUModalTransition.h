/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotosUI/PUViewControllerTransition.h>

#import "UIViewControllerTransitioningDelegate.h"

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate>
{
    int __operation;
}

@property(nonatomic, setter=_setOperation:) int _operation; // @synthesize _operation=__operation;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animatorForDismissedController:(id)arg1;
- (id)animatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)completeInteractiveDismissTransitionFinished:(BOOL)arg1;
- (void)completeInteractivePresentTransitionFinished:(BOOL)arg1;
- (void)transitionWillDismissInteractively:(BOOL)arg1;
- (void)transitionWillPresentInteractively:(BOOL)arg1;

@end

