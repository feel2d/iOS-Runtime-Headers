/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKPlaceActionsViewControllerDelegate>, MKMapItem, NSArray, NSString;

@interface MKPlaceActionsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse> {
    <MKPlaceActionsViewControllerDelegate> *_actionDelegate;
    NSArray *_actions;
    MKMapItem *_mapItem;
    bool_showContactActions;
    bool_showCreateReminder;
    bool_showOpenInSkyline;
    bool_showRemovePin;
    bool_showReportAProblem;
    bool_showSharing;
    bool_showSimulateLocation;
}

@property <MKPlaceActionsViewControllerDelegate> * actionDelegate;
@property(retain) NSArray * actions;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) MKMapItem * mapItem;
@property(readonly) bool requiresPreferredContentSizeInStackingView;
@property bool showContactActions;
@property bool showCreateReminder;
@property bool showOpenInSkyline;
@property bool showRemovePin;
@property bool showReportAProblem;
@property bool showSharing;
@property bool showSimulateLocation;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionDelegate;
- (id)actions;
- (id)init;
- (id)mapItem;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)requiresPreferredContentSizeInStackingView;
- (void)setActionDelegate:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setShowContactActions:(bool)arg1;
- (void)setShowCreateReminder:(bool)arg1;
- (void)setShowOpenInSkyline:(bool)arg1;
- (void)setShowRemovePin:(bool)arg1;
- (void)setShowReportAProblem:(bool)arg1;
- (void)setShowSharing:(bool)arg1;
- (void)setShowSimulateLocation:(bool)arg1;
- (bool)showContactActions;
- (bool)showCreateReminder;
- (bool)showOpenInSkyline;
- (bool)showRemovePin;
- (bool)showReportAProblem;
- (bool)showSharing;
- (bool)showSimulateLocation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateActions;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end