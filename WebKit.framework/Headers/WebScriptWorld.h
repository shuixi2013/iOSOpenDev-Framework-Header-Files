/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/XXUnknownSuperclass.h>
#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebScriptWorld.h>

@class WebScriptWorldPrivate;

@interface WebScriptWorld : XXUnknownSuperclass {
@private
	WebScriptWorldPrivate *_private;	// 4 = 0x4
}
+ (id)standardWorld;	// 0x73bd5
+ (id)world;	// 0x25821
+ (id)scriptWorldForGlobalContext:(OpaqueJSContext *)globalContext;	// 0x73bb9
- (id)initWithWorld:(PassRefPtr<WebCore::DOMWrapperWorld>)world;	// 0x25951
- (id)init;	// 0x25859
- (void)unregisterWorld;	// 0x25e51
- (void)dealloc;	// 0x25e71
@end

@interface WebScriptWorld (WebInternal)
+ (id)findOrCreateWorld:(DOMWrapperWorld *)world;	// 0x73d31
@end