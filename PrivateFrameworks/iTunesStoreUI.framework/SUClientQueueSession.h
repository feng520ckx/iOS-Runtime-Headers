/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSSet;

@interface SUClientQueueSession : NSObject {
    int _count;
    NSSet *_downloadKinds;
    id _queue;
}

@property int count;
@property(retain) NSSet * downloadKinds;
@property(retain) id queue;

- (int)count;
- (void)dealloc;
- (id)downloadKinds;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)setCount:(int)arg1;
- (void)setDownloadKinds:(id)arg1;
- (void)setQueue:(id)arg1;

@end