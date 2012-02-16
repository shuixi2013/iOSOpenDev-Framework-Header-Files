/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>

@class UIImageView, UILabel;

@interface PLPlayingExternallyBackgroundView : XXUnknownSuperclass {
	UILabel *_titleLabel;	// 48 = 0x30
	UILabel *_messageLabel;	// 52 = 0x34
	UIImageView *_imageView;	// 56 = 0x38
	UIEdgeInsets _edgeInsets;	// 60 = 0x3c
}
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0xc4325; S=0xc4349; @synthesize=_edgeInsets
// declared property setter: - (void)setEdgeInsets:(UIEdgeInsets)insets;	// 0xc4349
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0xc4325
- (id)_newLabelWithText:(id)text withFont:(id)font;	// 0xc40f5
- (void)layoutSubviews;	// 0xc3cf1
- (void)setMessage:(id)message;	// 0xc3c01
- (void)setTitle:(id)title;	// 0xc3b11
- (void)dealloc;	// 0xc3a9d
- (id)initWithFrame:(CGRect)frame;	// 0xc39cd
@end