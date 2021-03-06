/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/XXUnknownSuperclass.h>

@class NSString;

@interface CoreDAVItemParserMapping : XXUnknownSuperclass {
	NSString *_nameSpace;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	Class _parseClass;	// 12 = 0xc
}
@property(assign) Class parseClass;	// G=0x38641; S=0x38651; @synthesize=_parseClass
@property(retain) NSString *name;	// G=0x38609; S=0x3861d; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x385d1; S=0x385e5; @synthesize=_nameSpace
// declared property setter: - (void)setParseClass:(Class)aClass;	// 0x38651
// declared property getter: - (Class)parseClass;	// 0x38641
// declared property setter: - (void)setName:(id)name;	// 0x3861d
// declared property getter: - (id)name;	// 0x38609
// declared property setter: - (void)setNameSpace:(id)space;	// 0x385e5
// declared property getter: - (id)nameSpace;	// 0x385d1
- (id)description;	// 0x38529
- (void)dealloc;	// 0x384c9
- (id)initWithNameSpace:(id)nameSpace name:(id)name parseClass:(Class)aClass;	// 0x38441
@end
