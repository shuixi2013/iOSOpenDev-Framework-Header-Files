/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <AppSupport/InvocationTrampoline.h>


@interface CapturedInvocationTrampoline : InvocationTrampoline {
	NSInvocation **_outInvocation;	// 8 = 0x8
}
- (id)initWithTarget:(id)target outInvocation:(id *)invocation;	// 0x15259
- (void)forwardInvocation:(id)invocation;	// 0x14e61
@end