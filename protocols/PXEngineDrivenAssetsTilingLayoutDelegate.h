/* Generated by RuntimeBrowser.
 */

@protocol PXEngineDrivenAssetsTilingLayoutDelegate <NSObject>

@optional

- (float)engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2 forAspectRatio:(float)arg3;
- (struct CGSize { float x1; float x2; })engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2 contentTileSize:(struct CGSize { float x1; float x2; })arg3;
- (float)engineDrivenLayout:(PXEngineDrivenAssetsTilingLayout *)arg1 zPositionForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2;
- (void)engineDrivenLayoutReferenceSizeDidChange:(PXEngineDrivenAssetsTilingLayout *)arg1;

@end
