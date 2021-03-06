/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSMutableURLRequestProperties, NSNumber;

@interface SUScriptURLRequest : SUScriptObject {
	SSMutableURLRequestProperties *_requestProperties;	// 36 = 0x24
}
@property(copy) id URLs;	// G=0x8dc91; S=0x8d931; 
@property(copy) NSString *URLBagKey;	// G=0x8dc41; S=0x8d851; 
@property(copy) NSNumber *timeoutInterval;	// G=0x8dbd1; S=0x8d7a9; 
+ (void)initialize;	// 0x8de15
+ (id)webScriptNameForKey:(const char *)key;	// 0x8dd01
- (id)scriptAttributeKeys;	// 0x8ddb5
- (id)attributeKeys;	// 0x8dda5
// declared property getter: - (id)URLs;	// 0x8dc91
// declared property getter: - (id)URLBagKey;	// 0x8dc41
// declared property getter: - (id)timeoutInterval;	// 0x8dbd1
// declared property setter: - (void)setURLs:(id)urls;	// 0x8d931
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x8d851
// declared property setter: - (void)setTimeoutInterval:(id)interval;	// 0x8d7a9
- (id)_className;	// 0x8d79d
- (id)copyNativeRequestProperties;	// 0x8d74d
- (void)dealloc;	// 0x8d701
- (id)initWithNativeRequestProperties:(id)nativeRequestProperties;	// 0x8d689
- (id)init;	// 0x8d675
@end
