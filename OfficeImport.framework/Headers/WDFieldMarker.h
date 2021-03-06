/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDFieldMarker : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	int mFieldPosition;	// 12 = 0xc
	int mMarkerType;	// 16 = 0x10
	unsigned char mFieldType;	// 20 = 0x14
	unsigned mZombieEmbed : 1;	// 21 = 0x15
	unsigned mResultDirty : 1;	// 21 = 0x15
	unsigned mResultEdited : 1;	// 21 = 0x15
	unsigned mLocked : 1;	// 21 = 0x15
	unsigned mPrivateResult : 1;	// 21 = 0x15
	unsigned mNested : 1;	// 21 = 0x15
	unsigned mHasSeparator : 1;	// 21 = 0x15
}
@property(assign) long fieldPosition;	// G=0x28c9dd; S=0x13b8d9; converted property
@property(assign) int fieldMarkerType;	// G=0x91845; S=0x13b8e9; converted property
@property(assign) unsigned char fieldType;	// G=0x94ac1; S=0x13b8fd; converted property
@property(assign) BOOL zombieEmbed;	// G=0x28c9ed; S=0x28ca09; converted property
@property(assign) BOOL resultDirty;	// G=0x28ca25; S=0x28ca41; converted property
@property(assign) BOOL resultEdited;	// G=0x28ca61; S=0x28ca7d; converted property
@property(assign) BOOL locked;	// G=0x28ca9d; S=0x28cab9; converted property
@property(assign) BOOL privateResult;	// G=0x28cad9; S=0x28caf5; converted property
@property(assign) BOOL nested;	// G=0x28cb15; S=0x28cb31; converted property
@property(assign) BOOL hasSeparator;	// G=0x28cb51; S=0x28cb6d; converted property
- (id)properties;	// 0x13b8c9
- (void)clearProperties;	// 0x28cb8d
- (id)initWithParagraph:(id)paragraph;	// 0x13b541
- (void)dealloc;	// 0xa2dd9
// converted property getter: - (long)fieldPosition;	// 0x28c9dd
// converted property setter: - (void)setFieldPosition:(long)position;	// 0x13b8d9
// converted property getter: - (int)fieldMarkerType;	// 0x91845
// converted property setter: - (void)setFieldMarkerType:(int)type;	// 0x13b8e9
// converted property getter: - (unsigned char)fieldType;	// 0x94ac1
// converted property setter: - (void)setFieldType:(unsigned char)type;	// 0x13b8fd
- (int)runType;	// 0x941f1
// converted property getter: - (BOOL)zombieEmbed;	// 0x28c9ed
// converted property setter: - (void)setZombieEmbed:(BOOL)embed;	// 0x28ca09
// converted property getter: - (BOOL)resultDirty;	// 0x28ca25
// converted property setter: - (void)setResultDirty:(BOOL)dirty;	// 0x28ca41
// converted property getter: - (BOOL)resultEdited;	// 0x28ca61
// converted property setter: - (void)setResultEdited:(BOOL)edited;	// 0x28ca7d
// converted property getter: - (BOOL)locked;	// 0x28ca9d
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x28cab9
// converted property getter: - (BOOL)privateResult;	// 0x28cad9
// converted property setter: - (void)setPrivateResult:(BOOL)result;	// 0x28caf5
// converted property getter: - (BOOL)nested;	// 0x28cb15
// converted property setter: - (void)setNested:(BOOL)nested;	// 0x28cb31
// converted property getter: - (BOOL)hasSeparator;	// 0x28cb51
// converted property setter: - (void)setHasSeparator:(BOOL)separator;	// 0x28cb6d
@end
