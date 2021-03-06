/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */



@class NSMutableArray, NSDate, NSString, NSArray;

@interface AlarmManager : NSObject {
	BOOL _dirty;	// 4 = 0x4
	NSMutableArray *_alarms;	// 8 = 0x8
	NSMutableArray *logMessageList;	// 12 = 0xc
	BOOL invalidAlarmsDetected;	// 16 = 0x10
	NSDate *lastModified;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableArray *logMessageList;	// G=0x159d; S=0x2381; @synthesize
@property(assign, nonatomic) BOOL invalidAlarmsDetected;	// G=0x157d; S=0x158d; @synthesize
@property(readonly, retain, nonatomic) NSArray *alarms;	// G=0x156d; @synthesize=_alarms
@property(retain, nonatomic) NSDate *lastModified;	// G=0x155d; S=0x23a9; @synthesize
@property(retain, nonatomic) NSString *defaultSound;	// G=0x34d1; S=0x347d; 
+ (id)sharedManager;	// 0x20ad
+ (BOOL)isAlarmNotification:(id)notification;	// 0x2055
+ (BOOL)upgrade;	// 0x1a59
+ (BOOL)discardOldVersion;	// 0x19c1
+ (void)writeAlarmsToPreferences:(id)preferences;	// 0x17fd
+ (id)readAlarmsFromPreferencesCopy;	// 0x162d
- (id)init;	// 0x15ad
- (void)dealloc;	// 0x3559
// declared property getter: - (id)defaultSound;	// 0x34d1
// declared property setter: - (void)setDefaultSound:(id)sound;	// 0x347d
- (void)loadAlarms;	// 0x33e5
- (void)unloadAlarms;	// 0x33a5
- (void)saveAlarms;	// 0x331d
- (BOOL)checkIfAlarmsModified;	// 0x32a5
- (id)alarmWithIdUrl:(id)idUrl;	// 0x31c5
- (void)addAlarm:(id)alarm active:(BOOL)active;	// 0x3141
- (void)updateAlarm:(id)alarm active:(BOOL)active;	// 0x3059
- (void)removeAlarm:(id)alarm;	// 0x2f91
- (void)setAlarm:(id)alarm active:(BOOL)active;	// 0x2ee5
- (void)loadScheduledNotifications;	// 0x2ed1
- (void)loadScheduledNotificationsWithCancelUnused:(BOOL)cancelUnused;	// 0x279d
- (void)reloadScheduledNotifications;	// 0x2789
- (void)reloadScheduledNotificationsWithRefreshActive:(BOOL)refreshActive cancelUnused:(BOOL)unused;	// 0x2639
- (void)handleAnyNotificationChanges;	// 0x2625
- (void)handleExpiredOrSnoozedNotificationsOnly;	// 0x2611
- (void)handleNotificationSnoozed:(id)snoozed;	// 0x24f1
- (void)handleNotificationFired:(id)fired;	// 0x23d1
// declared property getter: - (id)lastModified;	// 0x155d
// declared property setter: - (void)setLastModified:(id)modified;	// 0x23a9
// declared property getter: - (id)alarms;	// 0x156d
// declared property getter: - (BOOL)invalidAlarmsDetected;	// 0x157d
// declared property setter: - (void)setInvalidAlarmsDetected:(BOOL)detected;	// 0x158d
// declared property getter: - (id)logMessageList;	// 0x159d
// declared property setter: - (void)setLogMessageList:(id)list;	// 0x2381
@end
