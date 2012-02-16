/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface SFUDataRepresentation : XXUnknownSuperclass {
@private
	BOOL mHasHash;	// 4 = 0x4
	unsigned mHash;	// 8 = 0x8
}
- (BOOL)isReadable;	// 0x2dd891
- (long long)dataLength;	// 0x2dd89d
- (long long)encodedLength;	// 0x2dd929
- (BOOL)isEncrypted;	// 0x2dd895
- (id)inputStream;	// 0x2dd939
- (id)bufferedInputStream;	// 0x181ef1
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x2dd9c1
- (BOOL)hasSameLocationAs:(id)as;	// 0x2dd899
- (xmlDoc *)xmlDocument;	// 0x183bbd
- (xmlTextReader *)xmlReader;	// 0x19135d
- (xmlTextReader *)xmlReaderForGzippedData;	// 0x2dda31
- (xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)inputStream;	// 0x2ddcf9
- (CGDataProviderRef)cgDataProvider;	// 0x2dde49
- (unsigned long)readIntoData:(id)data;	// 0x2ddaf1
- (unsigned)hash;	// 0x2ddf1d
- (BOOL)isEqual:(id)equal;	// 0x2de169
- (int)compare:(id)compare;	// 0x2de371
@end