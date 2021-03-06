/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSSet;

@interface ASPingTask : ASTask {
	NSSet *_folders;	// 104 = 0x68
	NSSet *_oldFolders;	// 108 = 0x6c
	int _seconds;	// 112 = 0x70
	int _oldSeconds;	// 116 = 0x74
}
@property(readonly, retain) NSSet *folders;	// G=0x52971; converted property
- (BOOL)shouldForceNetworking;	// 0x53579
- (BOOL)shouldReportTimeInNetwork;	// 0x53575
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x53541
- (void)finishWithError:(id)error;	// 0x531a9
- (void)requestCancelTaskWithReason:(int)reason;	// 0x53119
- (BOOL)processContext:(id)context;	// 0x52cc9
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x52cb5
- (id)requestBody;	// 0x52a19
- (void)loadRequest:(id)request;	// 0x529c9
- (double)timeoutInterval;	// 0x529a9
// converted property getter: - (id)folders;	// 0x52971
- (int)heartbeat;	// 0x52961
- (int)commandCode;	// 0x5295d
- (BOOL)shouldHoldPowerAssertion;	// 0x52959
- (int)interfaceBinding;	// 0x52919
- (void)dealloc;	// 0x528b9
- (id)initWithHeartbeat:(int)heartbeat folders:(id)folders oldHeartbeat:(int)heartbeat3 oldFolders:(id)folders4;	// 0x52819
@end
