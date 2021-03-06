/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <AssistantServices/XXUnknownSuperclass.h>
#import <AssistantServices/assistantd-Structs.h>

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ADServiceManager : XXUnknownSuperclass {
	dispatch_queue_s *_queue;	// 4 = 0x4
	NSMutableDictionary *_identifierToPrunedInfos;	// 8 = 0x8
	NSMutableDictionary *_domainToCommandsMap;	// 12 = 0xc
	NSMutableDictionary *_connectionMap;	// 16 = 0x10
	NSMutableDictionary *_syncKeyToBundleMap;	// 20 = 0x14
	NSMutableArray *_clearsDomainObjectsIdentifiers;	// 24 = 0x18
	NSMutableArray *_restrictedCommands;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableArray *restrictedCommands;	// G=0x15fad; converted property
- (id)serviceConnectionForIdentifier:(id)identifier;	// 0x16065
- (id)_connectionMap;	// 0x16015
// converted property getter: - (id)restrictedCommands;	// 0x15fad
- (id)_chatKitDynamicRestrictedCommands;	// 0x15ee9
- (id)servicesThatNeedToClearDomainObjects;	// 0x15ddd
- (BOOL)serviceWithIdentifier:(id)identifier implementsCommand:(id)command forDomain:(id)domain;	// 0x15d79
- (BOOL)serviceWithIdentifier:(id)identifier usesManagedStorageForDomain:(id)domain;	// 0x15d35
- (id)syncClassNameForIdentifier:(id)identifier anchorKey:(id)key;	// 0x15cf9
- (id)serviceIdentifierForSyncAnchorKey:(id)syncAnchorKey;	// 0x15cb9
- (id)allSyncAnchorKeys;	// 0x15c7d
- (id)serviceIdentifierForDomain:(id)domain command:(id)command;	// 0x15c1d
- (id)serviceInfoForIdentifier:(id)identifier;	// 0x15c0d
- (id)allServiceIdentifiers;	// 0x15be5
- (id)_bundleInfoForIdentifier:(id)identifier;	// 0x15b71
- (id)_infoDictionariesMap;	// 0x15325
- (id)_prunedDictionaryFromInfoDictionary:(id)infoDictionary forBundleWithIdentifier:(id)identifier;	// 0x14959
- (void)dealloc;	// 0x1488d
- (id)init;	// 0x14865
- (id)initWithQueue:(dispatch_queue_s *)queue;	// 0x147a1
@end
