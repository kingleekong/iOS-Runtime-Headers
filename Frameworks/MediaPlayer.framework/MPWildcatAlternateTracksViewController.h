/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UITableView;

@interface MPWildcatAlternateTracksViewController : MPAbstractAlternateTracksViewController {
    UITableView *_tableView;
}

- (void)dealloc;
- (id)init;
- (void)loadView;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;

@end