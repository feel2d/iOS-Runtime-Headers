/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKTableViewButtonCell : GKTableViewCell  {
    BOOL _useHeaderViewAppearance;
}

@property BOOL useHeaderViewAppearance;

+ (float)preferredHeight;

- (void)setUseHeaderViewAppearance:(BOOL)arg1;
- (void)updateTitleColors;
- (void)updateFont;
- (BOOL)useHeaderViewAppearance;
- (void)configureBackgroundView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 tableViewStyle:(int)arg3 backgroundStyle:(int)arg4;
- (void)setTheme:(id)arg1;
- (void)setBackgroundStyle:(int)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;

@end