/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/DOMEvent.h>

@class DOMMessagePort, DOMAbstractView, NSString;

__attribute__((visibility("hidden")))
@interface DOMMessageEvent : DOMEvent {
}
@property(readonly, retain) DOMMessagePort *messagePort;	// G=0x33f659; 
@property(readonly, retain) DOMAbstractView *source;	// G=0x33f59d; 
@property(readonly, copy) NSString *lastEventId;	// G=0x33f389; 
@property(readonly, copy) NSString *origin;	// G=0x33f2c1; 
@property(readonly, retain) NSString *data;	// G=0x33f451; 
// declared property getter: - (id)data;	// 0x33f451
// declared property getter: - (id)origin;	// 0x33f2c1
// declared property getter: - (id)lastEventId;	// 0x33f389
// declared property getter: - (id)source;	// 0x33f59d
// declared property getter: - (id)messagePort;	// 0x33f659
- (void)initMessageEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)port;	// 0x33f71d
@end
