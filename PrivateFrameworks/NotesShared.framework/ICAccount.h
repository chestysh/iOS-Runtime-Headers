/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAccount : ICNoteContainer <ICCloudObject> {
    ICAccountProxy *_accountProxy;
    ICFolder *_defaultFolder;
    BOOL _didAddObservers;
    BOOL _didAddTrashObservers;
    ICFolder *_trashFolder;
}

@property (nonatomic, retain) ICAccountProxy *accountProxy;
@property (nonatomic) int accountType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) ICFolder *defaultFolder;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *deviceMigrationStates;
@property (nonatomic) BOOL didAddObservers;
@property (nonatomic) BOOL didAddTrashObservers;
@property (nonatomic) BOOL didChooseToMigrate;
@property (nonatomic) BOOL didFinishMigration;
@property (nonatomic) BOOL didMigrateOnMac;
@property (nonatomic, retain) NSSet *folders;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSSet *legacyTombstones;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSet *notes;
@property (nonatomic, retain) NSSet *ownerInverse;
@property (nonatomic, retain) NSSet *serverChangeTokens;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICFolder *trashFolder;
@property (nonatomic, retain) NSString *userRecordName;

+ (id)allCloudObjects;
+ (id)existingCloudObjectForRecordID:(id)arg1;
+ (id)keyPathsForValuesAffectingLocalizedName;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)newCloudObjectForRecord:(id)arg1;
+ (id)recordType;
+ (id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3;

- (void).cxx_destruct;
- (id)accountName;
- (id)accountProxy;
- (void)addTrashObserversIfNecessary;
- (id)allChildObjects;
- (id)allItemsFolderLocalizedTitle;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (int)compare:(id)arg1;
- (void)createStandardFolders;
- (void)dealloc;
- (id)defaultFolder;
- (id)defaultFolderIdentifier;
- (BOOL)didAddObservers;
- (BOOL)didAddTrashObservers;
- (id)folderWithIdentifier:(id)arg1;
- (BOOL)hasAnyCustomFolders;
- (BOOL)isDeletable;
- (BOOL)isInICloudAccount;
- (BOOL)isLeaf;
- (id)localizedName;
- (id)loggingDescriptionValues;
- (id)loggingIdentifier;
- (void)mergeDataFromRecord:(id)arg1;
- (BOOL)needsToBeDeletedFromCloud;
- (BOOL)needsToBeFetchedFromCloud;
- (BOOL)needsToBePushedToCloud;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)noteWillBeDeletedOrUndeleted:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleNotes;
- (id)predicateForVisibleNotesIncludingTrash;
- (void)prepareForDeletion;
- (id)recordName;
- (id)recordZoneID;
- (void)removeAllObserversIfNecessary;
- (void)removeTrashObserversIfNecessary;
- (id)reservedAccountFolderTitles;
- (void)setAccountProxy:(id)arg1;
- (void)setAccountType:(int)arg1;
- (void)setDefaultFolder:(id)arg1;
- (void)setDidAddObservers:(BOOL)arg1;
- (void)setDidAddTrashObservers:(BOOL)arg1;
- (void)setMarkedForDeletion:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setTrashFolder:(id)arg1;
- (BOOL)shouldBeDeletedFromLocalDatabase;
- (id)standardFolderIdentifierWithPrefix:(id)arg1;
- (BOOL)supportsEditingNotes;
- (BOOL)supportsLegacyTombstones;
- (id)threadUnsafeNewlyCreatedRecord;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (id)trashFolder;
- (id)trashFolderIdentifier;
- (void)updateAccountNameForAccountListSorting;
- (id)visibleFolders;
- (id)visibleFoldersWithParent:(id)arg1;
- (id)visibleNoteContainerChildren;
- (id)visibleNoteContainers;
- (id)visibleNotes;
- (unsigned int)visibleNotesCount;
- (unsigned int)visibleNotesIncludingTrashCount;
- (BOOL)visibleRootFoldersContainFolderWithTitle:(id)arg1;
- (void)willTurnIntoFault;

@end