/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest> {
    NSString * _folderID;
    NSString * _messageIDHeader;
}

@property (nonatomic, readonly) BOOL isUserRequested;
@property (nonatomic, readonly) BOOL shouldSend;

- (void)dealloc;
- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (id)initWithMessage:(id)arg1 mailbox:(id)arg2;
- (BOOL)isUserRequested;
- (BOOL)shouldSend;

@end
