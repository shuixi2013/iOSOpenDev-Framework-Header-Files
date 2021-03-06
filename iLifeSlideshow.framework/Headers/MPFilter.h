/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/NSCoding.h>
#import <iLifeSlideshow/NSCopying.h>
#import <iLifeSlideshow/MPFilter.h>
#import <iLifeSlideshow/XXUnknownSuperclass.h>
#import <iLifeSlideshow/MPAnimationSupport.h>

@class NSMutableDictionary, MPFilterInternal, MCFilter, NSObject;
@protocol MPFilterSupport;

@interface MPFilter : XXUnknownSuperclass <NSCoding, NSCopying, MPAnimationSupport> {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	NSMutableDictionary *_animationPaths;	// 8 = 0x8
	MCFilter *_filter;	// 12 = 0xc
	NSObject<MPFilterSupport> *_parent;	// 16 = 0x10
	MPFilterInternal *_internal;	// 20 = 0x14
}
@property(retain) id filterID;	// G=0x54d01; S=0x54d21; converted property
@property(retain) id presetID;	// G=0x54dc5; S=0x54de5; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x54a21; converted property
+ (id)filterWithFilterID:(id)filterID;	// 0x55241
- (id)initWithFilterID:(id)filterID;	// 0x54a51
- (id)init;	// 0x5560d
- (id)copyWithZone:(NSZone *)zone;	// 0x54ac1
- (id)description;	// 0x54b41
- (void)encodeWithCoder:(id)coder;	// 0x54c15
- (id)initWithCoder:(id)coder;	// 0x55829
- (void)finalize;	// 0x557fd
- (void)dealloc;	// 0x55759
// converted property getter: - (id)filterID;	// 0x54d01
// converted property setter: - (void)setFilterID:(id)anId;	// 0x54d21
// converted property getter: - (id)presetID;	// 0x54dc5
// converted property setter: - (void)setPresetID:(id)anId;	// 0x54de5
- (id)filterAttributes;	// 0x54ead
- (id)filterAttributeForKey:(id)key;	// 0x54ed5
- (void)setFilterAttribute:(id)attribute forKey:(id)key;	// 0x54f11
// converted property getter: - (id)animationPaths;	// 0x54a21
- (id)animationPathForKey:(id)key;	// 0x5505d
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x55081
- (void)removeAnimationPathForKey:(id)key;	// 0x55171
- (int)index;	// 0x551fd
- (id)parent;	// 0x54a31
@end

@interface MPFilter (AppleScript)
@end

@interface MPFilter (Internal)
- (void)copyStruct:(id)aStruct;	// 0x55361
- (void)copyAnimationPaths:(id)paths;	// 0x55ae9
- (void)setFilter:(id)filter;	// 0x55bbd
- (void)setParent:(id)parent;	// 0x56299
- (id)parentDocument;	// 0x55405
- (void)recreateWithFilter:(id)filter;	// 0x55f39
@end

@interface MPFilter (Private)
- (id)filter;	// 0x54a41
- (void)dump;	// 0x56271
- (id)fullDebugLog;	// 0x5527d
- (void)setDefaults;	// 0x55a19
- (id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;	// 0x552c1
- (id)convertMCAttributeToMPAttribute:(id)mpattribute withKey:(id)key;	// 0x55311
@end
