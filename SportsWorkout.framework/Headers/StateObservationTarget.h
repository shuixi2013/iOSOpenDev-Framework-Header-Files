/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <SportsWorkout/ObservationTarget.h>

@class NSString;

@interface StateObservationTarget : ObservationTarget {
	NSString *_oldState;	// 12 = 0xc
	NSString *_currentState;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *currentState;	// G=0x83ad; S=0x83bd; @synthesize=_currentState
@property(retain, nonatomic) NSString *oldState;	// G=0x8379; S=0x8389; @synthesize=_oldState
+ (id)targetWithOldState:(id)oldState newState:(id)state selector:(SEL)selector;	// 0x8205
// declared property setter: - (void)setCurrentState:(id)state;	// 0x83bd
// declared property getter: - (id)currentState;	// 0x83ad
// declared property setter: - (void)setOldState:(id)state;	// 0x8389
// declared property getter: - (id)oldState;	// 0x8379
- (id)description;	// 0x8301
- (void)dealloc;	// 0x82a1
@end
