/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFReaderAppearanceThemeSelectorTableViewCell : UITableViewCell {
    <SFReaderAppearanceThemeSelectorTableViewCellDelegate> * _delegate;
    UIButton * _grayButton;
    UIButton * _nightButton;
    int  _selectedTheme;
    UIButton * _sepiaButton;
    UIStackView * _stackView;
    UIButton * _whiteButton;
}

@property (nonatomic) <SFReaderAppearanceThemeSelectorTableViewCellDelegate> *delegate;
@property (nonatomic) int selectedTheme;

+ (float)requiredHeight;

- (void).cxx_destruct;
- (id)_buttonForTheme:(int)arg1;
- (void)_changeSelectionForTheme:(int)arg1 selected:(BOOL)arg2;
- (void)_createThemeButtons;
- (id)_imageForTheme:(int)arg1 selected:(BOOL)arg2;
- (void)_themeButtonAction:(id)arg1;
- (id)_themeButtonImageWithFillColor:(id)arg1 strokeColor:(id)arg2 selected:(BOOL)arg3;
- (int)_themeForButton:(id)arg1;
- (void)_updateSelectedTheme;
- (id)delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (int)selectedTheme;
- (void)setDelegate:(id)arg1;
- (void)setSelectedTheme:(int)arg1;

@end
