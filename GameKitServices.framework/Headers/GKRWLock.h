/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <GameKitServices/GameKitServices-Structs.h>
#import <GameKitServices/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface GKRWLock : XXUnknownSuperclass {
@private
	opaque_pthread_rwlock_t _rwLock;	// 4 = 0x4
}
- (id)init;	// 0x20eb9
- (void)dealloc;	// 0x20f4d
- (void)wrlock;	// 0x20f39
- (int)tryrdlock;	// 0x20f25
- (void)rdlock;	// 0x20f11
- (void)unlock;	// 0x20efd
@end