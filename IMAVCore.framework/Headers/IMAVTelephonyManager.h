/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <IMAVCore/IMAVCore-Structs.h>
#import <IMAVCore/XXUnknownSuperclass.h>

@class NSMutableDictionary, CTCallCenter;

@interface IMAVTelephonyManager : XXUnknownSuperclass {
	CTCallCenter *_callCenter;	// 4 = 0x4
	CTServerConnectionRef _ctServerConnection;	// 8 = 0x8
	NSMutableDictionary *_currentCallDictionary;	// 12 = 0xc
	BOOL _isDesignatedServiceProvider;	// 16 = 0x10
	CFMachPortRef _ctServerMachPort;	// 20 = 0x14
	CFUUIDRef _ctToken;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) unsigned callState;	// G=0x216a9; 
+ (id)numberToDialForNumber:(id)number dialAssist:(BOOL *)assist;	// 0x1ef79
+ (id)sharedInstance;	// 0x1ecd1
- (BOOL)_breakCSCallsIfNecessary;	// 0x23ca9
- (BOOL)_wantsBreakBeforeMake;	// 0x23bf1
- (void)stopWatchingForCTRequests;	// 0x23b51
- (void)startWatchingForCTRequests;	// 0x23a99
- (void)_chatStateChanged:(id)changed;	// 0x23955
- (void)notifyCallEndedForChat:(id)chat;	// 0x23195
- (void)notifyMissedCallForChat:(id)chat;	// 0x22a81
- (void)notifyCallStartedForChat:(id)chat;	// 0x225e5
- (void)notifyCallConnectingForChat:(id)chat;	// 0x224ed
- (void)notifyCallConnectedForChat:(id)chat;	// 0x21c15
- (BOOL)_isOnCallToID:(id)anId;	// 0x21aa5
- (void)_disconnectCSCallWithID:(id)anId;	// 0x21815
// declared property getter: - (unsigned)callState;	// 0x216a9
- (void)_setCurrentCallStatus:(int)status forChat:(id)chat;	// 0x215cd
- (void)_handleCTServiceRequestName:(CFStringRef)name userInfo:(CFDictionaryRef)info contextInfo:(void *)info3;	// 0x211e5
- (void)_hangUpCall:(CTCallRef)call;	// 0x20f7d
- (void)_answerCall:(CTCallRef)call;	// 0x20d19
- (void)_dialRequested:(CFDictionaryRef)requested;	// 0x20a65
- (void)_setCallRef:(CTCallRef)ref forChat:(id)chat;	// 0x20849
- (CTCallRef)_callRefForChat:(id)chat;	// 0x2080d
- (BOOL)_disconnectCTServerConnection;	// 0x20749
- (BOOL)_reconnectCTServerConnectionIfNecessary;	// 0x20479
- (BOOL)_setupCTServerConnection;	// 0x20071
- (void)_cleanupMachInfo;	// 0x1ff85
- (BOOL)_unregisterCTRequestService;	// 0x1fe9d
- (BOOL)_registerCTRequestService;	// 0x1fcf5
- (void)_handleCallEvent:(id)event;	// 0x1fb05
- (void)__handleCallEvent:(id)event;	// 0x1efbd
- (void)dealloc;	// 0x1eecd
- (id)init;	// 0x1ed85
- (BOOL)retainWeakReference;	// 0x1ed81
- (BOOL)allowsWeakReference;	// 0x1ed7d
@end
