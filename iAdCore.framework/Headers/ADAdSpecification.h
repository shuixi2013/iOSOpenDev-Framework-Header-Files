/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/iAdCore-Structs.h>
#import <iAdCore/ADAdSpecification.h>
#import <iAdCore/XXUnknownSuperclass.h>

@class NSString;

@interface ADAdSpecification : XXUnknownSuperclass {
	struct {
		int *list;
		unsigned count;
		unsigned size;
	} _sizes;	// 4 = 0x4
	NSString *_section;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *section;	// G=0x14de1; S=0x14df1; @synthesize=_section
@property(readonly, assign, nonatomic) BOOL hasSection;	// G=0x14ad1; 
@property(readonly, assign, nonatomic) int *sizes;	// G=0x149dd; 
@property(readonly, assign, nonatomic) unsigned sizesCount;	// G=0x149c9; 
// declared property setter: - (void)setSection:(id)section;	// 0x14df1
// declared property getter: - (id)section;	// 0x14de1
- (void)writeTo:(id)to;	// 0x14d69
- (BOOL)readFrom:(id)from;	// 0x14bd5
- (id)dictionaryRepresentation;	// 0x14b59
- (id)description;	// 0x14ae9
// declared property getter: - (BOOL)hasSection;	// 0x14ad1
- (void)setSizes:(int *)sizes count:(unsigned)count;	// 0x14ab9
- (int)sizeAtIndex:(unsigned)index;	// 0x14a15
- (void)addSize:(int)size;	// 0x14a01
- (void)clearSizes;	// 0x149ed
// declared property getter: - (int *)sizes;	// 0x149dd
// declared property getter: - (unsigned)sizesCount;	// 0x149c9
- (void)dealloc;	// 0x14975
@end

@interface ADAdSpecification (UniqueIdentifier)
- (id)_uniqueIdentifier;	// 0x854d
@end
