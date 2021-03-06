/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray;

@interface ASSettingsTaskUserInformationGetResponse : ASItem {
	NSArray *_emailAddresses;	// 40 = 0x28
}
@property(retain, nonatomic) NSArray *emailAddresses;	// G=0x16c0d; S=0x16c1d; @synthesize=_emailAddresses
+ (BOOL)notifyOfUnknownTokens;	// 0x168e9
+ (BOOL)frontingBasicTypes;	// 0x16895
+ (BOOL)parsingWithSubItems;	// 0x16841
+ (BOOL)parsingLeafNode;	// 0x167ed
+ (BOOL)acceptsTopLevelLeaves;	// 0x16799
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x16c1d
// declared property getter: - (id)emailAddresses;	// 0x16c0d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x16b61
- (id)asParseRules;	// 0x169f1
- (id)description;	// 0x16989
- (void)dealloc;	// 0x1693d
@end
