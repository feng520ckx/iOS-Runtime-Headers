/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface DataSourceCache : NSCache  {
}

+ (id)cacheKeyForLeaderboardWithGame:(id)arg1 player:(id)arg2 cagetoryID:(id)arg3;
+ (id)cacheKeyForPlayer:(id)arg1 game:(id)arg2;
+ (id)leaderboardCache;
+ (id)gameCompareCache;
+ (id)gameDetailCache;
+ (id)playerDetailCache;
+ (id)cacheKeyForLeaderboardWithGame:(id)arg1 player:(id)arg2 cagetoryID:(id)arg3 timeScope:(int)arg4 playerScope:(int)arg5;
+ (id)cacheKeyForPlayerKey:(id)arg1 gameKey:(id)arg2;

- (id)dataSourceForKey:(id)arg1 withController:(id)arg2;
- (void)purgeCache:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end