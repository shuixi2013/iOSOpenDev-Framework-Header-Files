/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class DASearchQuery;

@interface ASSearchTask : ASTask {
	DASearchQuery *_query;	// 104 = 0x68
	int _numDownloadedElements;	// 108 = 0x6c
}
@property(readonly, assign) DASearchQuery *query;	// G=0x14375; @synthesize=_query
// declared property getter: - (id)query;	// 0x14375
- (id)description;	// 0x1430d
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x14275
- (int)commandCode;	// 0x14271
- (void)dealloc;	// 0x14225
- (id)initWithQuery:(id)query;	// 0x141d1
@end
