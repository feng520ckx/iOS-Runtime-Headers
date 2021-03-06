/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFSecureElementManagerSession : NFSession <NFAppletCollection, NFSecureElementManagerSessionCallbacks> {
    NSMutableDictionary * _appletsById;
    BOOL  _hasApplets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)_appletsById;
- (void)_setApplets:(id)arg1;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (void)dealloc;
- (BOOL)deleteAllApplets:(BOOL)arg1;
- (BOOL)deleteApplets:(id)arg1 queueServerConnection:(BOOL)arg2;
- (void)didExitRestrictedMode:(id)arg1;
- (BOOL)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2;
- (BOOL)expressModesEnabled;
- (id)expressTransitIdentifier;
- (id)felicaAppletState:(id)arg1;
- (BOOL)getCryptogram:(id*)arg1 challengeResponse:(id*)arg2;
- (id)init;
- (BOOL)refreshSecureElement:(id)arg1;
- (BOOL)requireAuthorizationForAllAppletsExcept:(id)arg1;
- (BOOL)runScript:(id)arg1 forSEID:(id)arg2 results:(id*)arg3 lastStatus:(unsigned int*)arg4;
- (BOOL)setExpressModesEnabled:(BOOL)arg1;
- (BOOL)setExpressTransitApplet:(id)arg1 authorization:(id)arg2;
- (id)signChallenge:(id)arg1 certs:(id*)arg2;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id*)arg3;
- (id)signChallenge:(id)arg1 useOSVersion:(BOOL)arg2 signatureInfo:(id*)arg3;
- (id)stateInformation;
- (id)transceive:(id)arg1 forSEID:(id)arg2;
- (unsigned int)validateSEPairings:(id*)arg1;

@end
