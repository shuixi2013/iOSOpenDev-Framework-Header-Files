/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */




@protocol SUClientDelegate <NSObject>
- (BOOL)client:(id)client presentModalViewController:(id)controller animated:(BOOL)animated;
@optional
- (id)topViewControllerForClient:(id)client;
- (BOOL)client:(id)client openInternalURL:(id)url;
- (id)downloadQueueForClient:(id)client downloadKinds:(id)kinds;
- (id)downloadManagerForClient:(id)client downloadKinds:(id)kinds;
- (BOOL)client:(id)client presentComposeReviewViewController:(id)controller animated:(BOOL)animated;
- (BOOL)client:(id)client presentAccountViewController:(id)controller animated:(BOOL)animated;
@end
