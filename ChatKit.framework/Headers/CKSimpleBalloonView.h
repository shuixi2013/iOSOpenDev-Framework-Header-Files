/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonView.h>
#import <ChatKit/ChatKit-Structs.h>

@class UILabel, NSString;

@interface CKSimpleBalloonView : CKBalloonView {
	NSString *_text;	// 96 = 0x60
	UILabel *_textLabel;	// 100 = 0x64
	UILabel *_subjectLabel;	// 104 = 0x68
}
@property(retain, nonatomic) UILabel *textLabel;	// G=0x46d5; S=0x4f59; @synthesize=_textLabel
@property(retain, nonatomic) UILabel *subjectLabel;	// G=0x46c5; S=0x4f81; @synthesize=_subjectLabel
@property(retain) NSString *text;	// G=0x4665; S=0x46e5; converted property
@property(retain) id subject;	// G=0x4695; S=0x5779; converted property
+ (BOOL)needsSingleTapGestureRecognizer;	// 0x465d
+ (CGSize)balloonSizeConstrainedToWidth:(float)width text:(id)text subject:(id)subject textBalloonSize:(CGSize *)size subjectBalloonSize:(CGSize *)size5;	// 0x4b39
+ (float)heightForText:(id)text width:(float)width includeBuffers:(BOOL)buffers;	// 0x494d
+ (BOOL)showsSubject;	// 0x4661
+ (UIEdgeInsets)contentInsetsForBalloonOrientation:(int)balloonOrientation;	// 0x48ad
- (void)dealloc;	// 0x4809
- (id)initWithFrame:(CGRect)frame delegate:(id)delegate;	// 0x58cd
- (void)prepareForReuse;	// 0x5879
- (void)updateTextShadowColor;	// 0x57f9
- (float)tightenedWidth;	// 0x57b9
// converted property getter: - (id)text;	// 0x4665
// converted property getter: - (id)subject;	// 0x4695
// converted property setter: - (void)setText:(id)text;	// 0x46e5
// converted property setter: - (void)setSubject:(id)subject;	// 0x5779
- (void)setMessagePart:(id)part;	// 0x5721
- (void)setComposition:(id)composition;	// 0x473d
- (void)drawRect:(CGRect)rect;	// 0x5559
- (void)layoutSubviews;	// 0x5405
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x520d
- (void)updateLabels;	// 0x4fa9
- (void)updateFontSize;	// 0x4771
// declared property getter: - (id)subjectLabel;	// 0x46c5
// declared property setter: - (void)setSubjectLabel:(id)label;	// 0x4f81
// declared property getter: - (id)textLabel;	// 0x46d5
// declared property setter: - (void)setTextLabel:(id)label;	// 0x4f59
@end
