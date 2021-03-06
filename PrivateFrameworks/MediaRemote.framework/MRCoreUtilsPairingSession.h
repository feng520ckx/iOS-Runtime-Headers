/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession {
    MRPasscodeCredentials * _credentials;
    MRPairedDevice * _device;
    NSData * _inputKey;
    NSMutableData * _inputNonce;
    NSData * _outputKey;
    NSMutableData * _outputNonce;
    struct { 
        void *context; 
        int (*showSetupCode_f)(); 
        int (*hideSetupCode_f)(); 
        int (*promptForSetupCode_f)(); 
        int (*copyIdentity_f)(); 
        int (*findPeer_f)(); 
        int (*savePeer_f)(); 
        int (*resumeRequest_f)(); 
        int (*resumeResponse_f)(); 
    }  _pairingDelegate;
    struct PairingSessionPrivate { } * _pairingSession;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _state;
}

@property (nonatomic, readonly) MRPairedDevice *device;
@property (nonatomic, retain) NSData *inputKey;
@property (nonatomic, retain) NSMutableData *inputNonce;
@property (nonatomic, retain) NSData *outputKey;
@property (nonatomic, retain) NSMutableData *outputNonce;
@property (getter=isPaired, nonatomic, readonly) BOOL paired;
@property (nonatomic, readonly) NSArray *pairedDevices;

- (id)_addPeer:(struct PairingSessionPrivate { }*)arg1;
- (void)_delegateDidEnterPasscode:(id)arg1;
- (long)_displaySetupCode:(id)arg1;
- (id)_extendedInfoDictionary;
- (id)_generateSetupCodeWithMaximumLength:(unsigned int)arg1;
- (void)_handlePairingFailureWithError:(id)arg1;
- (void)_handleSetupExchangeComplete;
- (void)_hideSetupCode;
- (void)_onQueueDeriveEncryptionKeys;
- (id)_onQueueInitializePairingSessionWithState:(unsigned int)arg1;
- (id)_onQueuePerformPairingExchangeWithInputData:(id)arg1 error:(id*)arg2;
- (id)_peerIdentifier:(struct PairingSessionPrivate { }*)arg1;
- (long)_promptForSetupCodeWithDelay:(double)arg1;
- (id)_removePeer:(struct PairingSessionPrivate { }*)arg1;
- (id)_updatePeer:(struct PairingSessionPrivate { }*)arg1;
- (void)close;
- (void)dealloc;
- (id)decryptData:(id)arg1 withError:(id*)arg2;
- (BOOL)deleteIdentityWithError:(id*)arg1;
- (id)device;
- (id)encryptData:(id)arg1 withError:(id*)arg2;
- (void)handlePairingExchangeData:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePairingFailureWithStatus:(long)arg1;
- (id)initWithRole:(unsigned int)arg1 device:(id)arg2;
- (id)inputKey;
- (id)inputNonce;
- (BOOL)isPaired;
- (BOOL)isValid;
- (void)open;
- (id)outputKey;
- (id)outputNonce;
- (id)pairedDevices;
- (void)setInputKey:(id)arg1;
- (void)setInputNonce:(id)arg1;
- (void)setOutputKey:(id)arg1;
- (void)setOutputNonce:(id)arg1;
- (id)unpair;
- (id)updatePairing;

@end
