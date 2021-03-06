/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShade.h>


__attribute__((visibility("hidden")))
@interface OADLinearShade : OADShade {
@private
	float mAngle;	// 12 = 0xc
	BOOL mIsAngleOverridden;	// 16 = 0x10
	BOOL mScaled;	// 17 = 0x11
	BOOL mIsScaledOverridden;	// 18 = 0x12
}
@property(assign) float angle;	// G=0xceb69; S=0xccd59; converted property
@property(assign) BOOL scaled;	// G=0x2a0f5d; S=0xccd79; converted property
+ (id)defaultProperties;	// 0xcccb5
- (id)copyWithZone:(NSZone *)zone;	// 0x1c51cd
- (id)initWithDefaults;	// 0xcccfd
// converted property getter: - (float)angle;	// 0xceb69
// converted property setter: - (void)setAngle:(float)angle;	// 0xccd59
- (BOOL)isAngleOverridden;	// 0xceb99
// converted property getter: - (BOOL)scaled;	// 0x2a0f5d
// converted property setter: - (void)setScaled:(BOOL)scaled;	// 0xccd79
- (BOOL)isScaledOverridden;	// 0x2a0f8d
- (unsigned)hash;	// 0x2a09fd
- (BOOL)isEqual:(id)equal;	// 0x2a0fc5
@end
