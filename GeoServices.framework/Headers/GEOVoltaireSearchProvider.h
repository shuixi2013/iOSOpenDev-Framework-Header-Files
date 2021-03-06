/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOSearchProvider.h>
#import <GeoServices/PBRequesterDelegate.h>

@class GEORequester;

@interface GEOVoltaireSearchProvider : GEOSearchProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 8 = 0x8
	id _finished;	// 12 = 0xc
	id _spellingSuggestion;	// 16 = 0x10
	id _refinement;	// 20 = 0x14
}
+ (id)hostname;	// 0x202a1
+ (unsigned short)provider;	// 0x2029d
+ (void)_resetURL;	// 0x200cd
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x206c1
- (void)requesterDidCancel:(id)requester;	// 0x20661
- (void)requesterDidFinish:(id)requester;	// 0x204fd
- (void)cancel;	// 0x204dd
- (void)search:(id)search finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement error:(id)error;	// 0x20369
- (void)dealloc;	// 0x201fd
- (id)init;	// 0x200f9
@end
