/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <IMAVCore/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface IMAVDVDController : XXUnknownSuperclass {
	BOOL _didPause;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x377cd
- (void)pause;	// 0x378f5
- (void)resume;	// 0x378e1
- (BOOL)_playDVD;	// 0x378dd
- (BOOL)_pauseDVD;	// 0x378d9
- (void)dealloc;	// 0x378ad
- (id)init;	// 0x37881
- (BOOL)retainWeakReference;	// 0x3787d
- (BOOL)allowsWeakReference;	// 0x37879
@end
