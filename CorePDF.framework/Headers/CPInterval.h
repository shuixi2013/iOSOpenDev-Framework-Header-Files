/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */




@interface CPInterval : NSObject {
	float left;	// 4 = 0x4
	float right;	// 8 = 0x8
}
@property(readonly, assign) float left;	// G=0x4005d; converted property
@property(readonly, assign) float right;	// G=0x4006d; converted property
- (id)initLeft:(float)left right:(float)right;	// 0x4007d
- (BOOL)intersects:(id)intersects;	// 0x3fff1
- (void)add:(id)add;	// 0x40179
// converted property getter: - (float)left;	// 0x4005d
// converted property getter: - (float)right;	// 0x4006d
- (BOOL)contains:(id)contains;	// 0x400e5
@end
