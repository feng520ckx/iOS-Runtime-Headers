/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CAMediaTimingFunction;

@interface FIUIPropertyAnimation : NSObject {
    CAMediaTimingFunction *_animationTimingFunction;
    id _completionHandler;
    double _currentAnimationTime;
    double _duration;
}

@property(readonly) CAMediaTimingFunction * animationTimingFunction;
@property(readonly) id completionHandler;
@property(readonly) double duration;

+ (id)animationWithDuration:(double)arg1 timingFunction:(id)arg2 completion:(id)arg3;

- (void).cxx_destruct;
- (id)_currentValue;
- (id)_endValue;
- (void)_setCurrentValue:(id)arg1;
- (void)_setEndValue:(id)arg1;
- (void)_setStartValue:(id)arg1;
- (id)_startValue;
- (void)_updateWithProgress:(float)arg1;
- (id)animationTimingFunction;
- (void)callAndReleaseCompletionHandler;
- (id)completionHandler;
- (double)duration;
- (BOOL)isFinishedAnimating;
- (void)update:(double)arg1;
- (id)valueByAddingCurrentValueToValue:(id)arg1;

@end