/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAudioStreamInterface : HMDStreamInterface <AVCAudioStreamDelegate> {
    AVCAudioStream * _audioStream;
    unsigned int  _audioStreamSetting;
    <HMDAudioStreamInterfaceDelegate> * _delegate;
    double  _rtcpSendIntervalSec;
    BOOL  _streamStarted;
}

@property (nonatomic, retain) AVCAudioStream *audioStream;
@property (nonatomic) unsigned int audioStreamSetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDAudioStreamInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int direction;
@property (readonly) unsigned int hash;
@property (getter=isMuted, nonatomic) BOOL mute;
@property (getter=isRTCPEnabled, nonatomic) BOOL rtcpEnabled;
@property (nonatomic) double rtcpSendIntervalSec;
@property (getter=isRTCPTimeOutEnabled, nonatomic) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (getter=isRTPTimeOutEnabled, nonatomic) BOOL rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic) BOOL streamStarted;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *syncSource;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callPaused:(id)arg1;
- (void)_callResumed:(id)arg1;
- (void)_callStarted:(id)arg1;
- (void)_callStopped:(id)arg1;
- (BOOL)_createLocalSocket;
- (BOOL)_initializeStreamRemoteDestinationReceiver:(id)arg1;
- (BOOL)_initializeStreamRemoteLocal;
- (BOOL)_initializeStreamRemoteSender:(id)arg1;
- (BOOL)_initializeStreamRemoteSocketReceiver:(id)arg1;
- (void)_pauseStream;
- (void)_resumeStream;
- (void)_startStream:(id)arg1;
- (void)_updateAudioSetting:(unsigned int)arg1;
- (id)audioStream;
- (unsigned int)audioStreamSetting;
- (void)dealloc;
- (id)delegate;
- (int)direction;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6;
- (BOOL)isMuted;
- (BOOL)isRTCPEnabled;
- (BOOL)isRTCPTimeOutEnabled;
- (BOOL)isRTPTimeOutEnabled;
- (id)logIdentifier;
- (double)rtcpSendIntervalSec;
- (double)rtcpTimeOutIntervalSec;
- (double)rtpTimeOutIntervalSec;
- (void)setAudioStream:(id)arg1;
- (void)setAudioStreamSetting:(unsigned int)arg1;
- (void)setDirection:(int)arg1;
- (void)setMute:(BOOL)arg1;
- (void)setRtcpEnabled:(BOOL)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpSendIntervalSec:(double)arg1;
- (void)setRtcpTimeOutEnabled:(BOOL)arg1;
- (void)setRtcpTimeOutIntervalSec:(double)arg1;
- (void)setRtpTimeOutEnabled:(BOOL)arg1;
- (void)setRtpTimeOutIntervalSec:(double)arg1;
- (void)setStreamStarted:(BOOL)arg1;
- (void)startStream:(id)arg1;
- (void)stopStream;
- (void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
- (void)streamDidRTCPTimeOut:(id)arg1;
- (void)streamDidRTPTimeOut:(id)arg1;
- (void)streamDidServerDie:(id)arg1;
- (void)streamDidStop:(id)arg1;
- (BOOL)streamStarted;
- (id)syncSource;
- (void)updateAudioSetting:(unsigned int)arg1;

@end
