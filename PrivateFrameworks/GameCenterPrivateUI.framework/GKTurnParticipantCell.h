/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKTurnParticipantCell : GKBasePlayerCell {
    GKLabel * _bottomLabel;
    UIButton * _detailButton;
    NSLayoutConstraint * _detailButtonConstraint;
    SEL  _detailPressedAction;
    NSLayoutConstraint * _iconLeadingConstraint;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _insets;
    BOOL  _isDetail;
    GKTurnBasedMatch * _match;
    GKTurnBasedParticipant * _participant;
    NSLayoutConstraint * _statusImageTrailingConstraint;
    UIImageView * _statusImageView;
    NSLayoutConstraint * _textContainerTrailingConstraint;
    GKContiguousContainerView * _textContainerView;
    GKLabel * _topLabel;
}

@property (nonatomic, retain) GKLabel *bottomLabel;
@property (nonatomic, retain) UIButton *detailButton;
@property (nonatomic, retain) NSLayoutConstraint *detailButtonConstraint;
@property (nonatomic) SEL detailPressedAction;
@property (nonatomic, retain) NSLayoutConstraint *iconLeadingConstraint;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } insets;
@property (nonatomic) BOOL isDetail;
@property (nonatomic, retain) GKTurnBasedMatch *match;
@property (nonatomic, retain) GKTurnBasedParticipant *participant;
@property (nonatomic, retain) NSLayoutConstraint *statusImageTrailingConstraint;
@property (nonatomic, retain) UIImageView *statusImageView;
@property (nonatomic, retain) NSLayoutConstraint *textContainerTrailingConstraint;
@property (nonatomic, retain) GKContiguousContainerView *textContainerView;
@property (nonatomic, retain) GKLabel *topLabel;

+ (float)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesForCollectionView:(id)arg1;

- (id)bottomLabel;
- (void)configureForDetail;
- (void)configureForMatch;
- (void)dealloc;
- (id)detailButton;
- (id)detailButtonConstraint;
- (void)detailPressed:(id)arg1;
- (SEL)detailPressedAction;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)iconLeadingConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insets;
- (BOOL)isDetail;
- (id)match;
- (BOOL)matchWantsLocalPlayerAttention;
- (id)participant;
- (void)setBottomLabel:(id)arg1;
- (void)setDetailButton:(id)arg1;
- (void)setDetailButtonConstraint:(id)arg1;
- (void)setDetailPressedAction:(SEL)arg1;
- (void)setIconLeadingConstraint:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setIsDetail:(BOOL)arg1;
- (void)setMatch:(id)arg1;
- (void)setParticipant:(id)arg1;
- (void)setStatusImageTrailingConstraint:(id)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setTextContainerTrailingConstraint:(id)arg1;
- (void)setTextContainerView:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (id)statusImageTrailingConstraint;
- (id)statusImageView;
- (id)textContainerTrailingConstraint;
- (id)textContainerView;
- (id)topLabel;
- (void)updateMarginConstraints;
- (id)viewForPopover;

@end
