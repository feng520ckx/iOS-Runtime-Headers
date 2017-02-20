/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIEventEnvironment : NSObject {
    UIApplication * _application;
    int  _currentNudgePressType;
    UITouch * _currentTouch;
    BOOL  _didDelayedInit;
    int  _disableTouchCoalescingCount;
    NSMutableDictionary * _estimatedTouchRecordsByContextIDAndEstimationIndex;
    NSMutableArray * _estimatedTouchRecordsInIncomingOrder;
    NSMutableArray * _eventQueue;
    float  _externalTouchScaleFactor;
    _UIGameControllerEvent * _gameControllerEvent;
    BOOL  _hasSeenAnyStylusEvents;
    BOOL  _isSystemApplication;
    UIPhysicalKeyboardEvent * _physicalKeyboardEvent;
    UIPressesEvent * _pressesEvent;
    NSMutableDictionary * _pressesMap;
    BOOL  _shouldRoundTouchLocation;
    UITouchesEvent * _touchesEvent;
    UIWheelEvent * _wheelEvent;
}

@property (nonatomic) UIApplication *application;
@property (nonatomic, retain) NSMutableArray *eventQueue;

- (void).cxx_destruct;
- (id)UIKitEventForHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_disableTouchCoalescingWithCount:(int)arg1;
- (void)_dispatchAndRemoveStaleEstimationUpdateRecordsWithEventTime:(double)arg1 upToRecord:(id)arg2;
- (void)_enableTouchCoalescingWithCount:(int)arg1;
- (void)_enqueueHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)_estimatedTouchRecordForContextID:(id)arg1 estimationIndex:(id)arg2;
- (BOOL)_isTouchCoalescingDisabled;
- (id)_pressForType:(int)arg1;
- (void)_registerEstimatedTouches:(id)arg1 event:(id)arg2 forTouchable:(id)arg3;
- (void)_removeEstimatedTouchRecord:(id)arg1;
- (void)_setPress:(id)arg1 forType:(int)arg2;
- (id)application;
- (id)eventQueue;
- (BOOL)eventWantsLowLatency:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setEventQueue:(id)arg1;

@end