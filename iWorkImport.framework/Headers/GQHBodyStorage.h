/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/GQHBodyStorage.h>
#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/GQBodyStorageGenerator.h>


__attribute__((visibility("hidden")))
@interface GQHBodyStorage : XXUnknownSuperclass <GQBodyStorageGenerator> {
}
+ (int)handleBodyStorage:(id)storage state:(id)state;	// 0x258e9
+ (int)handleTocContent:(id)content state:(id)state;	// 0x25a71
+ (int)handleTocEntry:(id)entry state:(id)state;	// 0x25d79
@end

@interface GQHBodyStorage (Private)
+ (int)handleSection:(id)section state:(id)state;	// 0x25b51
+ (int)handlePageStart:(id)start state:(id)state;	// 0x25735
+ (int)handleLayout:(id)layout state:(id)state;	// 0x26149
+ (int)handleFootnotes:(id)footnotes state:(id)state;	// 0x25739
+ (int)handleContainerHint:(id)hint state:(id)state;	// 0x2587d
@end
