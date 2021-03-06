/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/XXUnknownSuperclass.h>
#import <CoreMediaStream/NSCoding.h>

@class NSString;

@interface MSSubscribedStream : XXUnknownSuperclass <NSCoding> {
@private
	NSString *_streamID;	// 4 = 0x4
	NSString *_ctag;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *ctag;	// G=0x1b359; S=0x1b369; @synthesize=_ctag
@property(retain, nonatomic) NSString *streamID;	// G=0x1b325; S=0x1b335; @synthesize=_streamID
+ (id)subscribedStreamWithStreamID:(id)streamID;	// 0x1b0b9
// declared property setter: - (void)setCtag:(id)ctag;	// 0x1b369
// declared property getter: - (id)ctag;	// 0x1b359
// declared property setter: - (void)setStreamID:(id)anId;	// 0x1b335
// declared property getter: - (id)streamID;	// 0x1b325
- (id)initWithCoder:(id)coder;	// 0x1b285
- (void)encodeWithCoder:(id)coder;	// 0x1b21d
- (id)description;	// 0x1b1b5
- (void)dealloc;	// 0x1b155
- (id)initWithStreamID:(id)streamID;	// 0x1b101
@end
