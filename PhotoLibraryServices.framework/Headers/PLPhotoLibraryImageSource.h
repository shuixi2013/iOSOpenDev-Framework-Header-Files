/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLImageSource.h>


@interface PLPhotoLibraryImageSource : PLImageSource {
	int _imageFormat;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int imageFormat;	// G=0x200ed; 
- (BOOL)isEqual:(id)equal;	// 0x201e5
- (unsigned)hash;	// 0x201d5
- (id)newImageForAsset:(id)asset createMetadata:(id *)metadata;	// 0x20161
- (id)description;	// 0x200fd
// declared property getter: - (int)imageFormat;	// 0x200ed
- (unsigned short)sourceIdentifier;	// 0x200d5
- (id)initWithImageFormat:(int)imageFormat;	// 0x20095
@end