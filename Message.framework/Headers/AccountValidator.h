/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/XXUnknownSuperclass.h>

@class NSArray, ActivityMonitor, Account, MFError;

@interface AccountValidator : XXUnknownSuperclass {
	Account *_account;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	ActivityMonitor *_accountValidationActivity;	// 12 = 0xc
	struct {
		unsigned useSSL : 1;
		unsigned incomingServerSupportsSSL : 1;
		unsigned smtpServerSupportsSSL : 1;
		unsigned validationInProgress : 1;
		unsigned canceled : 1;
		unsigned unused : 27;
	} _flags;	// 16 = 0x10
	MFError *_incomingServerValidationError;	// 20 = 0x14
	MFError *_smtpServerValidationError;	// 24 = 0x18
	NSArray *_incomingServerAuthSchemes;	// 28 = 0x1c
	NSArray *_smtpServerAuthSchemes;	// 32 = 0x20
}
@property(readonly, retain) Account *account;	// G=0x49029; converted property
- (id)init;	// 0x49051
- (void)dealloc;	// 0x4a5a5
- (void)setDelegate:(id)delegate;	// 0x49019
- (void)validateAccount:(id)account useSSL:(BOOL)ssl;	// 0x4a541
- (void)validateAccountWithoutFallbacks:(id)fallbacks;	// 0x4a4cd
// converted property getter: - (id)account;	// 0x49029
- (void)cancelValidation;	// 0x4a4bd
- (id)_ispAccountInfo;	// 0x49039
- (void)_backgroundValidateAccountFinished:(id)finished authSchemes:(id)schemes;	// 0x4a31d
- (void)_validateAccount:(id)account;	// 0x497d1
- (void)_validateAccountWithoutFallbacks:(id)fallbacks;	// 0x49355
- (BOOL)_incomingServerValid;	// 0x49321
- (BOOL)_outgoingServerValid;	// 0x492ed
- (void)stop;	// 0x492b9
- (BOOL)accountValidationCanceled;	// 0x4903d
- (void)_validateAccountInBackground:(id)background withFallbacks:(BOOL)fallbacks;	// 0x49195
- (BOOL)accountIsValid;	// 0x49135
- (BOOL)accountSupportsSSL;	// 0x490d9
- (id)error;	// 0x4907d
@end
