/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinDistributor : NSObject <BBObserverDelegate, BLTCompanionServer, NSXPCListenerDelegate> {
    BLTAttachmentHashCache * _attachmentHashCache;
    BBObserver * _bbObserver;
    BLTBulletinFetcher * _bulletinFetcher;
    NSMutableSet * _bulletinIDsWaitingOnGizmoAdd;
    NSMutableDictionary * _bulletins;
    NSString * _bundleRootPath;
    BLTClientReplyTimeoutManager * _clientReplyTimeoutManager;
    BLTDebugMetricsRatioOnInterval * _exceededExpirationDebugMetric;
    BLTRemoteGizmoClient * _gizmoConnection;
    double  _lastTimeAlertedUserToFileRadar;
    NSMutableSet * _lockScreenFeed;
    NSMutableSet * _noticesFeed;
    NSMutableDictionary * _pendingBulletinUpdates;
    BLTSectionConfiguration * _sectionConfiguration;
    BLTSettingSync * _settingSync;
    BOOL  _standaloneTestModeEnabled;
    NSDate * _startupTime;
    BLTBulletinDistributorSubscriberList * _subscribers;
    NSMutableDictionary * _transcodedAttachmentsForBulletinID;
    BLTUserNotificationList * _userNotificationList;
    BLTWatchKitAppList * _watchKitAppList;
}

@property (nonatomic, retain) BLTAttachmentHashCache *attachmentHashCache;
@property (nonatomic, retain) BBObserver *bbObserver;
@property (nonatomic, retain) BLTBulletinFetcher *bulletinFetcher;
@property (nonatomic, retain) NSMutableSet *bulletinIDsWaitingOnGizmoAdd;
@property (nonatomic, retain) NSMutableDictionary *bulletins;
@property (nonatomic, copy) NSString *bundleRootPath;
@property (nonatomic, retain) BLTClientReplyTimeoutManager *clientReplyTimeoutManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BLTDebugMetricsRatioOnInterval *exceededExpirationDebugMetric;
@property (nonatomic, retain) BLTRemoteGizmoClient *gizmoConnection;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isStandaloneTestModeEnabled;
@property (nonatomic) double lastTimeAlertedUserToFileRadar;
@property (nonatomic, retain) NSMutableSet *lockScreenFeed;
@property (nonatomic, retain) NSMutableSet *noticesFeed;
@property (nonatomic, retain) NSMutableDictionary *pendingBulletinUpdates;
@property (nonatomic, retain) BLTSectionConfiguration *sectionConfiguration;
@property (nonatomic, retain) BLTSettingSync *settingSync;
@property (nonatomic) BOOL standaloneTestModeEnabled;
@property (nonatomic, retain) NSDate *startupTime;
@property (nonatomic, retain) BLTBulletinDistributorSubscriberList *subscribers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *transcodedAttachmentsForBulletinID;
@property (nonatomic, retain) BLTUserNotificationList *userNotificationList;
@property (nonatomic, retain) BLTWatchKitAppList *watchKitAppList;

+ (id)sharedDistributor;

- (void).cxx_destruct;
- (void)_addBulletin:(id)arg1 forFeed:(unsigned int)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(int)arg5 completion:(id /* block */)arg6;
- (void)_attachAttachment:(id)arg1 attachmentType:(int)arg2 toBulletin:(id)arg3;
- (id)_bulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)_checkDebugLogs;
- (BOOL)_enqueuBulletinUpdate:(unsigned int)arg1 bulletin:(id)arg2 feed:(unsigned int)arg3;
- (void)_handleAddBulletin:(id)arg1 feed:(unsigned int)arg2 shouldPlayLightsAndSirens:(BOOL)arg3 performedWithSuccess:(BOOL)arg4 sendAttemptTime:(id)arg5 connectionStatus:(unsigned int)arg6 isGizmoReady:(BOOL)arg7 shouldSendReplyIfNeeded:(BOOL)arg8;
- (void)_handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 finalReply:(BOOL)arg4;
- (void)_handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 fromGizmo:(BOOL)arg6 finalReply:(BOOL)arg7;
- (void)_handleInitialSyncStateCompleteChanged:(id)arg1;
- (void)_handleSyncStateChanged:(id)arg1;
- (void)_loadPingSubscriberBundles;
- (unsigned int)_nanoPresentableFeedFromPhoneFeed:(unsigned int)arg1;
- (void)_notifyGizmoOfBulletin:(id)arg1 forFeed:(unsigned int)arg2 updateType:(unsigned int)arg3 playLightsAndSirens:(BOOL)arg4 shouldSendReplyIfNeeded:(BOOL)arg5 attachment:(id)arg6 attachmentType:(int)arg7;
- (void)_notifyGizmoOfCancelBulletin:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned int)arg3 withBulletinDate:(id)arg4;
- (id)_obsoletionDateRelativeToNow;
- (void)_performModifyBulletin:(id)arg1 forFeed:(unsigned int)arg2;
- (void)_performPendingBulletinUpdatesForBulletinID:(id)arg1;
- (void)_performRemoveBulletin:(id)arg1 forFeed:(unsigned int)arg2;
- (void)_performSync;
- (void)_pingSubscriberWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (void)_postWillSendBulletinToGizmoNotificationForBulletin:(id)arg1;
- (void)_reconnectObserver;
- (void)_reloadBulletinsWithCompletion:(id /* block */)arg1;
- (void)_rememberBulletin:(id)arg1 forFeed:(unsigned int)arg2;
- (void)_removeTranscodedAttachmentIfNeededForBulletin:(id)arg1;
- (void)_sendCurrentBulletinIdentifiers;
- (void)_sendCurrentBulletinList;
- (void)_sendPBBulletin:(id)arg1 forBulletin:(id)arg2 feed:(unsigned int)arg3 updateType:(unsigned int)arg4 playLightsAndSirens:(BOOL)arg5 shouldSendReplyIfNeeded:(BOOL)arg6 completion:(id /* block */)arg7;
- (void)_setupDebugMetrics;
- (void)_startBulletinListening;
- (BOOL)_willNanoPresent:(unsigned int)arg1;
- (BOOL)_willNanoPresent:(unsigned int)arg1 forBulletin:(id)arg2 feed:(unsigned int)arg3;
- (id)attachmentHashCache;
- (id)bbObserver;
- (id)bulletinFetcher;
- (id)bulletinIDsWaitingOnGizmoAdd;
- (id)bulletins;
- (id)bundleRootPath;
- (void)clearSectionInfoSentCache;
- (id)clientReplyTimeoutManager;
- (void)dealloc;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned int)arg1 maximumSendDelay:(unsigned int)arg2 minimumResponseDelay:(unsigned int)arg3 maximumResponseDelay:(unsigned int)arg4;
- (id)exceededExpirationDebugMetric;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(int)arg3 completion:(id /* block */)arg4;
- (id)gizmoConnection;
- (void)handleAction:(id)arg1;
- (void)handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (id)init;
- (BOOL)isStandaloneTestModeEnabled;
- (double)lastTimeAlertedUserToFileRadar;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)lockScreenFeed;
- (id)noticesFeed;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3 playLightsAndSirens:(BOOL)arg4 attachment:(id)arg5 attachmentType:(int)arg6 alwaysSend:(BOOL)arg7 withReply:(id /* block */)arg8;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3 playLightsAndSirens:(BOOL)arg4 attachment:(id)arg5 attachmentType:(int)arg6 withReply:(id /* block */)arg7;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(id /* block */)arg5;
- (void)observer:(id)arg1 composedImageFromThumbnailData:(id)arg2 forAttachment:(id)arg3 bulletin:(id)arg4 completionHandler:(id /* block */)arg5;
- (struct CGSize { float x1; float x2; })observer:(id)arg1 composedImageSizeForAttachment:(id)arg2 bulletin:(id)arg3 thumbnailSize:(struct CGSize { float x1; float x2; })arg4;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
- (void)observer:(id)arg1 prepareAttachment:(id)arg2 beforeDeliveringBulletin:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachment:(id)arg2 bulletin:(id)arg3;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
- (id)originalSettings;
- (id)overriddenSettings;
- (id)pendingBulletinUpdates;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (id)sectionConfiguration;
- (void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)sendBulletinSummary:(id)arg1;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)setAttachmentHashCache:(id)arg1;
- (void)setBbObserver:(id)arg1;
- (void)setBulletinFetcher:(id)arg1;
- (void)setBulletinIDsWaitingOnGizmoAdd:(id)arg1;
- (void)setBulletins:(id)arg1;
- (void)setBundleRootPath:(id)arg1;
- (void)setClientReplyTimeoutManager:(id)arg1;
- (void)setExceededExpirationDebugMetric:(id)arg1;
- (void)setGizmoConnection:(id)arg1;
- (void)setLastTimeAlertedUserToFileRadar:(double)arg1;
- (void)setLockScreenFeed:(id)arg1;
- (void)setNoticesFeed:(id)arg1;
- (void)setPendingBulletinUpdates:(id)arg1;
- (void)setReplyBlock:(id /* block */)arg1 forSection:(id)arg2 bulletin:(id)arg3 publicationDate:(id)arg4;
- (void)setSectionConfiguration:(id)arg1;
- (void)setSettingSync:(id)arg1;
- (void)setStandaloneTestModeEnabled:(BOOL)arg1;
- (void)setStartupTime:(id)arg1;
- (void)setSubscribers:(id)arg1;
- (void)setTranscodedAttachmentsForBulletinID:(id)arg1;
- (void)setUserNotificationList:(id)arg1;
- (void)setWatchKitAppList:(id)arg1;
- (id)settingOverrides;
- (id)settingSync;
- (bool)shouldSuppressLightsAndSirensNow;
- (void)spoolSectionInfoWithCompletion:(id /* block */)arg1;
- (BOOL)standaloneTestModeEnabled;
- (id)startupTime;
- (id)subscribers;
- (id)transcodedAttachmentsForBulletinID;
- (id)userNotificationList;
- (id)watchKitAppList;
- (void)willSendLightsAndSirensWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 inPhoneSection:(id)arg3 completion:(id /* block */)arg4;

@end
