/* Generated by RuntimeBrowser.
 */

@protocol IMADockViewControllerDelegate <NSObject>

@required

- (void)addSticker:(IMASticker *)arg1;
- (void)addSticker:(IMASticker *)arg1 atDropTarget:(IMADropTarget *)arg2;
- (UIViewController *)dockPresentationViewController;

@optional

- (void)didBeginDraggingSticker;
- (void)didDragStickerToTarget:(IMADropTarget *)arg1;
- (void)didEndDraggingSticker;
- (void)didSelectAppWithBundleIdentifier:(NSString *)arg1;
- (void)dismissExpandedAppViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dockDidMagnify:(bool)arg1;
- (bool)expandedAppShouldDismissOnDragSuccess;
- (struct CGSize { double x1; double x2; })expandedAppViewControllerSize;
- (bool)isDropTargetValid:(IMADropTarget *)arg1;
- (void)presentExpandedAppViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end