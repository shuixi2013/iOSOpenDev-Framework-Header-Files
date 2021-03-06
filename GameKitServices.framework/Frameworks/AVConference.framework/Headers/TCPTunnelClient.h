/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VideoConferenceRealTimeChannel.h>
#import <AVConference/XXUnknownSuperclass.h>

@class NSString, TCPBufferPool, NSMutableDictionary, NSData, NSDictionary, NSMutableData;

__attribute__((visibility("hidden")))
@interface TCPTunnelClient : XXUnknownSuperclass <VideoConferenceRealTimeChannel> {
@private
	int _connectState;	// 4 = 0x4
	int _connectedFD;	// 8 = 0x8
	id _handler;	// 12 = 0xc
	id _allocationResponseHandler;	// 16 = 0x10
	id _terminationHandler;	// 20 = 0x14
	id _bindingResponseHandler;	// 24 = 0x18
	id _destroyHandler;	// 28 = 0x1c
	dispatch_queue_s *_queue;	// 32 = 0x20
	dispatch_source_s *_readSource;	// 36 = 0x24
	dispatch_source_s *_writeSource;	// 40 = 0x28
	dispatch_source_s *_timer;	// 44 = 0x2c
	float _fTimeout;	// 48 = 0x30
	NSString *_participantID;	// 52 = 0x34
	unsigned short _channelNumber;	// 56 = 0x38
	NSMutableDictionary *_reqRespDict;	// 60 = 0x3c
	NSDictionary *_relayUpdateDict;	// 64 = 0x40
	tagIPPORT _serverIPPort;	// 68 = 0x44
	NSData *_allocateReq;	// 108 = 0x6c
	NSData *_channelBReq;	// 112 = 0x70
	NSMutableData *_currentlyReadingMessage;	// 116 = 0x74
	int _currentlyReadingDataGoalLength;	// 120 = 0x78
	unsigned short _currentMsgType;	// 124 = 0x7c
	int _currentPadding;	// 128 = 0x80
	char *_writeBuf;	// 132 = 0x84
	int _head;	// 136 = 0x88
	int _tail;	// 140 = 0x8c
	TCPBufferPool *_bufferPool;	// 144 = 0x90
}
@property(copy) id receiveHandler;	// G=0x5df3d; S=0x5df15; @synthesize=_handler
@property(copy) id allocationResponseHandler;	// G=0x5df7d; S=0x5df55; @synthesize=_allocationResponseHandler
@property(copy) id bindingResponseHandler;	// G=0x5dfbd; S=0x5df95; @synthesize=_bindingResponseHandler
@property(copy) id destroyHandler;	// G=0x5dffd; S=0x5dfd5; @synthesize=_destroyHandler
@property(copy) id terminationHandler;	// G=0x5e03d; S=0x5e015; @synthesize=_terminationHandler
@property(copy) NSString *participantID;	// G=0x5e07d; S=0x5e055; @synthesize=_participantID
- (void)resetConnection;	// 0x5a4c5
- (void)reportErrorAndTerminate:(int)terminate detail:(int)detail description:(id)description reason:(id)reason;	// 0x5a531
- (void)destroyDispatchTimer;	// 0x5a849
- (void)createDispatchTimer:(float)timer withDetailedError:(int)detailedError;	// 0x5ac4d
- (void)processSocketRead;	// 0x5b56d
- (void)sendTCPData:(const void *)data bufSize:(int)size;	// 0x5c1e5
- (void)processSocketWrite:(unsigned char)write;	// 0x5c479
- (void)vcArg:(id)arg sendControlData:(id)data isTypeSSL:(BOOL)ssl withTimeout:(float)timeout withDetail:(int)detail;	// 0x5b21d
- (void)receivedControlData:(id)data;	// 0x5ca45
- (void)processSocketReadSSL;	// 0x5bbcd
- (void)receivedSSLConnectionData:(id)data recordType:(unsigned short)type;	// 0x5c7b9
- (id)initWithRelayRequestDictionary:(id)relayRequestDictionary withCallID:(int)callID relayType:(unsigned char)type errorCode:(int *)code;	// 0x5d975
- (void)dealloc;	// 0x5e945
- (void)finalize;	// 0x5e8a1
- (unsigned)connectionType;	// 0x5a489
- (BOOL)sendAllocateMsg:(id *)msg;	// 0x5e5f9
- (BOOL)sendChannelBindingMsgWithDict:(id)dict error:(id *)error;	// 0x5e315
- (BOOL)sendRefreshMsg:(unsigned)msg error:(id *)error;	// 0x5e195
- (void)vcArg:(id)arg sendRealTimeData:(id)data toParticipantID:(id)participantID;	// 0x5b30d
- (void)unbindChannel;	// 0x5e095
- (void)closeTunnelSocket;	// 0x5b4c5
- (BOOL)isTunnelSocketClosed;	// 0x5a4a9
// declared property getter: - (id)participantID;	// 0x5e07d
// declared property setter: - (void)setParticipantID:(id)anId;	// 0x5e055
// declared property getter: - (id)terminationHandler;	// 0x5e03d
// declared property setter: - (void)setTerminationHandler:(id)handler;	// 0x5e015
// declared property getter: - (id)destroyHandler;	// 0x5dffd
// declared property setter: - (void)setDestroyHandler:(id)handler;	// 0x5dfd5
// declared property getter: - (id)bindingResponseHandler;	// 0x5dfbd
// declared property setter: - (void)setBindingResponseHandler:(id)handler;	// 0x5df95
// declared property getter: - (id)allocationResponseHandler;	// 0x5df7d
// declared property setter: - (void)setAllocationResponseHandler:(id)handler;	// 0x5df55
// declared property getter: - (id)receiveHandler;	// 0x5df3d
// declared property setter: - (void)setReceiveHandler:(id)handler;	// 0x5df15
@end
