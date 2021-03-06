/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSProcessInfo.h>
#import <DataAccessExpress/DataAccessExpress-Structs.h>

@class NSString;

@interface DADownloadContext : NSProcessInfo {
@private
	NSString *_attachmentUUID;	// 4 = 0x4
	NSString *_accountID;	// 8 = 0x8
	dispatch_queue_s *_queue;	// 12 = 0xc
	id _progressBlock;	// 16 = 0x10
	id _completionBlock;	// 20 = 0x14
}
- (void)finishedWithError:(id)error;	// 0x1379
- (void)updateProgressDownloadedByteCount:(long long)count totalByteCount:(long long)count2;	// 0x1219
- (void)dealloc;	// 0x1175
- (id)initWithAttachmentUUID:(id)attachmentUUID accountID:(id)anId queue:(dispatch_queue_s *)queue downloadProgressBlock:(id)block completionBlock:(id)block5;	// 0x105d
@end
