/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLChangeNotification.h>
#import <PhotoLibraryServices/PLContainerChangeNotification.h>
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>

@class PLManagedObject, NSIndexSet, NSArray, PLObjectSnapshot, NSString;

@interface PLContainerChangeNotification : PLChangeNotification {
@private
	id _object;	// 4 = 0x4
	PLObjectSnapshot *_snapshot;	// 8 = 0x8
	NSArray *_changedObjects;	// 12 = 0xc
	BOOL _didCalculateDiffs;	// 16 = 0x10
	BOOL _shouldReload;	// 17 = 0x11
	NSIndexSet *_deletedIndexes;	// 20 = 0x14
	NSIndexSet *_insertedIndexes;	// 24 = 0x18
	NSIndexSet *_movedIndexes;	// 28 = 0x1c
	CFArrayRef _movedFromIndexes;	// 32 = 0x20
	NSIndexSet *_changedIndexes;	// 36 = 0x24
	BOOL _countDidChange;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSArray *changedObjects;	// G=0x66351; 
@property(readonly, assign, nonatomic) NSArray *insertedObjects;	// G=0x662b9; 
@property(readonly, assign, nonatomic) NSArray *deletedObjects;	// G=0x66221; 
@property(readonly, assign, nonatomic) NSIndexSet *changedIndexes;	// G=0x661b1; 
@property(readonly, assign, nonatomic) BOOL hasMoves;	// G=0x66181; 
@property(readonly, assign, nonatomic) NSIndexSet *insertedIndexes;	// G=0x65f4d; 
@property(readonly, assign, nonatomic) NSIndexSet *deletedIndexes;	// G=0x65f15; 
@property(readonly, assign, nonatomic) BOOL shouldReload;	// G=0x65edd; 
@property(readonly, retain) id object;	// G=0x65e51; converted property
@property(readonly, assign) BOOL countDidChange;	// G=0x661e9; converted property
// declared property getter: - (id)changedObjects;	// 0x66351
// declared property getter: - (id)insertedObjects;	// 0x662b9
// declared property getter: - (id)deletedObjects;	// 0x66221
// converted property getter: - (BOOL)countDidChange;	// 0x661e9
// declared property getter: - (id)changedIndexes;	// 0x661b1
// declared property getter: - (BOOL)hasMoves;	// 0x66181
- (void)enumerateMovesWithBlock:(id)block;	// 0x65f85
// declared property getter: - (id)insertedIndexes;	// 0x65f4d
// declared property getter: - (id)deletedIndexes;	// 0x65f15
// declared property getter: - (BOOL)shouldReload;	// 0x65edd
- (id)name;	// 0x65e61
// converted property getter: - (id)object;	// 0x65e51
- (void)dealloc;	// 0x65d3d
- (id)init;	// 0x65d11
@end

@interface PLContainerChangeNotification (Internal)
@property(readonly, assign, nonatomic) BOOL countDidChange;
@property(readonly, assign, nonatomic) NSString *_diffDescription;	// G=0x66525; 
@property(readonly, assign, nonatomic) PLObjectSnapshot *snapshot;	// G=0x66515; 
@property(readonly, assign, nonatomic) NSArray *_changedObjects;	// G=0x66485; 
@property(readonly, assign, nonatomic) NSString *_contentRelationshipName;	// G=0x66495; 
@property(readonly, assign, nonatomic) PLManagedObject *_managedObject;	// G=0x66475; 
@property(readonly, assign, nonatomic) BOOL _didCalculateDiffs;	// G=0x66465; 
- (void)_calculateDiffs;	// 0x669c1
- (BOOL)_getOldSet:(id *)set newSet:(id *)set2;	// 0x66929
// declared property getter: - (id)_diffDescription;	// 0x66525
// declared property getter: - (id)snapshot;	// 0x66515
// declared property getter: - (id)_contentRelationshipName;	// 0x66495
// declared property getter: - (id)_changedObjects;	// 0x66485
// declared property getter: - (id)_managedObject;	// 0x66475
// declared property getter: - (BOOL)_didCalculateDiffs;	// 0x66465
- (id)_initWithObject:(id)object snapshot:(id)snapshot changedObjects:(id)objects;	// 0x663ed
- (id)_init;	// 0x663e9
@end
