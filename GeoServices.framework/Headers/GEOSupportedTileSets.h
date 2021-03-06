/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface GEOSupportedTileSets : PBCodable {
	NSMutableArray *_tileSets;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *tileSets;	// G=0x21c3d; S=0x21c4d; @synthesize=_tileSets
// declared property setter: - (void)setTileSets:(id)sets;	// 0x21c4d
// declared property getter: - (id)tileSets;	// 0x21c3d
- (void)writeTo:(id)to;	// 0x21b29
- (BOOL)readFrom:(id)from;	// 0x219b5
- (id)dictionaryRepresentation;	// 0x21849
- (id)description;	// 0x217d9
- (id)tileSetAtIndex:(unsigned)index;	// 0x217b9
- (unsigned)tileSetsCount;	// 0x21799
- (void)addTileSet:(id)set;	// 0x21735
- (void)dealloc;	// 0x216f1
@end

