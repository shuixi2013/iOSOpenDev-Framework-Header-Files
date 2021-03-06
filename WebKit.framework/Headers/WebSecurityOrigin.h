/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/XXUnknownSuperclass.h>
#import <WebKit/WebSecurityOrigin.h>
#import <WebKit/WebKit-Structs.h>

@class WebSecurityOriginPrivate;
@protocol WebQuotaManager;

@interface WebSecurityOrigin : XXUnknownSuperclass {
@private
	WebSecurityOriginPrivate *_private;	// 4 = 0x4
	id<WebQuotaManager> _applicationCacheQuotaManager;	// 8 = 0x8
	id<WebQuotaManager> _databaseQuotaManager;	// 12 = 0xc
}
- (id)initWithURL:(id)url;	// 0x86185
- (id)protocol;	// 0x86059
- (id)host;	// 0x85f2d
- (id)databaseIdentifier;	// 0x85e21
- (id)toString;	// 0x85d15
- (id)domain;	// 0x85ba9
- (unsigned short)port;	// 0x85b85
- (BOOL)isEqual:(id)equal;	// 0x85ca9
- (void)dealloc;	// 0x2b9fd
- (void)finalize;	// 0x85c51
@end

@interface WebSecurityOrigin (Deprecated)
@property(assign) unsigned long long quota;	// G=0x86389; S=0x863a9; converted property
- (unsigned long long)usage;	// 0x86369
// converted property getter: - (unsigned long long)quota;	// 0x86389
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x863a9
@end

@interface WebSecurityOrigin (WebQuotaManagers)
- (id)applicationCacheQuotaManager;	// 0x85bb9
- (id)databaseQuotaManager;	// 0x85c05
@end

@interface WebSecurityOrigin (WebInternal)
- (id)_initWithWebCoreSecurityOrigin:(SecurityOrigin *)webCoreSecurityOrigin;	// 0x2b9b1
- (SecurityOrigin *)_core;	// 0x85b99
@end
