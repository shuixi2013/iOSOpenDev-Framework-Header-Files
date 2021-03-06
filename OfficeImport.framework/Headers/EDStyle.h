/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDStyle.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/EDImmutableObject.h>

@class EDProtection, EDResources;

__attribute__((visibility("hidden")))
@interface EDStyle : XXUnknownSuperclass <NSCopying, EDImmutableObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mParentIndex;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	unsigned mFontIndex;	// 16 = 0x10
	unsigned mFillIndex;	// 20 = 0x14
	unsigned mAlignmentInfoIndex;	// 24 = 0x18
	unsigned mBordersIndex;	// 28 = 0x1c
	EDProtection *mProtection;	// 32 = 0x20
	unsigned mIndex;	// 36 = 0x24
	bool mContentFormatOverridden;	// 40 = 0x28
	bool mFontOverridden;	// 41 = 0x29
	bool mFillOverridden;	// 42 = 0x2a
	bool mAlignmentInfoOverridden;	// 43 = 0x2b
	bool mBordersOverridden;	// 44 = 0x2c
	bool mProtectionOverridden;	// 45 = 0x2d
	bool mDoNotModify;	// 46 = 0x2e
}
@property(assign, getter=isContentFormatOverridden) bool contentFormatOverridden;	// G=0xfd8ed; S=0xe0315; converted property
@property(retain) id contentFormat;	// G=0xfd90d; S=0x2525a5; converted property
@property(assign, getter=isFontOverridden) bool fontOverridden;	// G=0x106fcd; S=0xe0275; converted property
@property(retain) id font;	// G=0xeb8cd; S=0x1fa7a1; converted property
@property(assign, getter=isFillOverridden) bool fillOverridden;	// G=0x252401; S=0xe02d5; converted property
@property(retain) id fill;	// G=0xfbc89; S=0xe0051; converted property
@property(assign, getter=isAlignmentInfoOverridden) bool alignmentInfoOverridden;	// G=0xfc415; S=0xe0295; converted property
@property(retain) id alignmentInfo;	// G=0xfbdd9; S=0xdf4a5; converted property
@property(assign, getter=isBordersOverridden) bool bordersOverridden;	// G=0xfbc79; S=0xe02b5; converted property
@property(retain) id borders;	// G=0xfe7d9; S=0xdfd2d; converted property
@property(assign, getter=isProtectionOverridden) bool protectionOverridden;	// G=0x252411; S=0xe02f5; converted property
@property(retain) id protection;	// G=0x252421; S=0xe01dd; converted property
@property(retain) id parent;	// G=0x25255d; S=0x252501; converted property
+ (id)styleWithResources:(id)resources;	// 0x2524b5
- (id)initWithResources:(id)resources;	// 0xdedad
- (void)dealloc;	// 0x111bc9
- (id)copyWithZone:(NSZone *)zone;	// 0x1f9be5
- (BOOL)isEquivalentToStyle:(id)style;	// 0x1fa959
- (BOOL)isEqualToStyle:(id)style;	// 0x1fa8a5
- (BOOL)isEqual:(id)equal;	// 0x1fa849
- (unsigned)hash;	// 0x25239d
// converted property getter: - (bool)isContentFormatOverridden;	// 0xfd8ed
// converted property setter: - (void)setContentFormatOverridden:(bool)overridden;	// 0xe0315
// converted property getter: - (id)contentFormat;	// 0xfd90d
// converted property setter: - (void)setContentFormat:(id)format;	// 0x2525a5
// converted property getter: - (bool)isFontOverridden;	// 0x106fcd
// converted property setter: - (void)setFontOverridden:(bool)overridden;	// 0xe0275
// converted property getter: - (id)font;	// 0xeb8cd
// converted property setter: - (void)setFont:(id)font;	// 0x1fa7a1
// converted property getter: - (bool)isFillOverridden;	// 0x252401
// converted property setter: - (void)setFillOverridden:(bool)overridden;	// 0xe02d5
// converted property getter: - (id)fill;	// 0xfbc89
// converted property setter: - (void)setFill:(id)fill;	// 0xe0051
// converted property getter: - (bool)isAlignmentInfoOverridden;	// 0xfc415
// converted property setter: - (void)setAlignmentInfoOverridden:(bool)overridden;	// 0xe0295
// converted property getter: - (id)alignmentInfo;	// 0xfbdd9
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0xdf4a5
// converted property getter: - (bool)isBordersOverridden;	// 0xfbc79
// converted property setter: - (void)setBordersOverridden:(bool)overridden;	// 0xe02b5
// converted property getter: - (id)borders;	// 0xfe7d9
// converted property setter: - (void)setBorders:(id)borders;	// 0xdfd2d
// converted property getter: - (bool)isProtectionOverridden;	// 0x252411
// converted property setter: - (void)setProtectionOverridden:(bool)overridden;	// 0xe02f5
// converted property getter: - (id)protection;	// 0x252421
// converted property setter: - (void)setProtection:(id)protection;	// 0xe01dd
// converted property getter: - (id)parent;	// 0x25255d
// converted property setter: - (void)setParent:(id)parent;	// 0x252501
- (unsigned)index;	// 0xfaea5
- (void)setDoNotModify:(bool)modify;	// 0xe0381
@end

@interface EDStyle (EDInternal)
@property(assign) unsigned fontIndex;	// G=0x252431; S=0xdf155; converted property
@property(assign) unsigned contentFormatId;	// G=0xfd8fd; S=0xe0241; converted property
@property(assign) unsigned parentIndex;	// G=0x252441; S=0xdef85; converted property
@property(assign) unsigned bordersIndex;	// G=0x252451; S=0x1a42b1; converted property
@property(assign) unsigned fillIndex;	// G=0x252461; S=0x1a42e5; converted property
@property(assign) unsigned alignmentInfoIndex;	// G=0x252471; S=0x252481; converted property
// converted property getter: - (unsigned)fontIndex;	// 0x252431
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0xdf155
// converted property getter: - (unsigned)contentFormatId;	// 0xfd8fd
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0xe0241
// converted property getter: - (unsigned)parentIndex;	// 0x252441
// converted property setter: - (void)setParentIndex:(unsigned)index;	// 0xdef85
// converted property getter: - (unsigned)bordersIndex;	// 0x252451
// converted property setter: - (void)setBordersIndex:(unsigned)index;	// 0x1a42b1
// converted property getter: - (unsigned)fillIndex;	// 0x252461
// converted property setter: - (void)setFillIndex:(unsigned)index;	// 0x1a42e5
// converted property getter: - (unsigned)alignmentInfoIndex;	// 0x252471
// converted property setter: - (void)setAlignmentInfoIndex:(unsigned)index;	// 0x252481
@end

@interface EDStyle (EDStylesCollection)
- (void)setIndex:(unsigned)index;	// 0xe0391
@end
