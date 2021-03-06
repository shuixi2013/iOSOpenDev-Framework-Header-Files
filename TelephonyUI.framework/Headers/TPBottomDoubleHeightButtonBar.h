/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPBottomBar.h>

@class TPButton, UIView, UIImageView;

@interface TPBottomDoubleHeightButtonBar : TPBottomBar {
	UIImageView *_backgroundView;	// 56 = 0x38
	UIView *_topWell;	// 60 = 0x3c
	UIView *_bottomWell;	// 64 = 0x40
	TPButton *_topButton;	// 68 = 0x44
	TPButton *_bottomButton;	// 72 = 0x48
}
@property(readonly, retain, nonatomic) TPButton *topButton;	// G=0xf4a1; @synthesize=_topButton
@property(readonly, retain, nonatomic) TPButton *bottomButton;	// G=0xf491; @synthesize=_bottomButton
+ (id)_backgroundImage;	// 0xf48d
+ (float)defaultHeightForOrientation:(int)orientation;	// 0xf54d
- (id)initForIncomingCallOnFaceTimeCallWithFrame:(CGRect)frame;	// 0xf561
- (void)dealloc;	// 0xf4b1
// declared property getter: - (id)bottomButton;	// 0xf491
// declared property getter: - (id)topButton;	// 0xf4a1
@end
