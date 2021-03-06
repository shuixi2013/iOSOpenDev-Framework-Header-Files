/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/XXUnknownSuperclass.h>
#import <ChatKit/ChatKit-Structs.h>


@interface CKTranscriptTableView : XXUnknownSuperclass {
	id _panGestureRecognizerBlock;	// 720 = 0x2d0
	BOOL ignoresContentOffsetChanges;	// 724 = 0x2d4
}
@property(copy, nonatomic) id panGestureRecognizerBlock;	// G=0x243d1; S=0x24421; @synthesize=_panGestureRecognizerBlock
@property(assign, nonatomic) BOOL ignoresContentOffsetChanges;	// G=0x243b1; S=0x243c1; @synthesize
- (void)dealloc;	// 0x243e1
- (void)handlePan:(id)pan;	// 0x24719
- (BOOL)isFastAnimationAvailableForContentOffset;	// 0x246d9
- (void)cancelPanGesture;	// 0x2468d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x24485
- (void)setContentOffset:(CGPoint)offset;	// 0x24445
// declared property getter: - (BOOL)ignoresContentOffsetChanges;	// 0x243b1
// declared property setter: - (void)setIgnoresContentOffsetChanges:(BOOL)changes;	// 0x243c1
// declared property getter: - (id)panGestureRecognizerBlock;	// 0x243d1
// declared property setter: - (void)setPanGestureRecognizerBlock:(id)block;	// 0x24421
@end
