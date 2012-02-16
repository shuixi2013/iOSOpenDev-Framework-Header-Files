/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/XXUnknownSuperclass.h>

@class NSMutableSet, NSData, NSArray, NSMutableArray;

@interface FTPushHandler : XXUnknownSuperclass {
	NSMutableSet *_topics;	// 4 = 0x4
	NSMutableArray *_handlers;	// 8 = 0x8
	BOOL _registeredForPush;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int connectionStatus;	// G=0x146c5; 
@property(assign, nonatomic) BOOL registered;	// G=0x146ad; S=0x146bd; 
@property(readonly, assign, nonatomic) NSData *pushToken;	// G=0x146c1; 
@property(retain, nonatomic) NSArray *topics;	// G=0x145bd; S=0x14519; 
+ (id)sharedInstance;	// 0x1435d
+ (id)alloc;	// 0x14331
- (void)removeListener:(id)listener;	// 0x14749
- (void)addListener:(id)listener;	// 0x146c9
// declared property getter: - (int)connectionStatus;	// 0x146c5
// declared property getter: - (id)pushToken;	// 0x146c1
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x146bd
// declared property getter: - (BOOL)registered;	// 0x146ad
- (void)removeTopic:(id)topic;	// 0x14645
- (void)addTopic:(id)topic;	// 0x145dd
// declared property getter: - (id)topics;	// 0x145bd
- (void)updateTopics;	// 0x145b9
// declared property setter: - (void)setTopics:(id)topics;	// 0x14519
- (void)requestKeepAlive;	// 0x14509
- (void)dealloc;	// 0x144a9
- (id)initWithTopics:(id)topics;	// 0x14425
- (id)init;	// 0x14411
- (BOOL)retainWeakReference;	// 0x1440d
- (BOOL)allowsWeakReference;	// 0x14409
@end