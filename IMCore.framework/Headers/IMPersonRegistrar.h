/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */



@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject {
	NSMutableDictionary *_personMap;	// 4 = 0x4
}
@property(retain) NSMutableDictionary *_personMap;	// G=0x4dc7d; S=0x4dc91; @synthesize
+ (id)sharedInstance;	// 0x4d92d
// declared property setter: - (void)set_personMap:(id)map;	// 0x4dc91
// declared property getter: - (id)_personMap;	// 0x4dc7d
- (void)_dumpAllPersons;	// 0x4db91
- (id)personForUniqueID:(id)uniqueID;	// 0x4db71
- (void)unregisterPerson:(id)person;	// 0x4dae9
- (void)registerPerson:(id)person;	// 0x4da2d
- (void)dealloc;	// 0x4d9e1
- (BOOL)retainWeakReference;	// 0x4d9dd
- (BOOL)allowsWeakReference;	// 0x4d9d9
@end
