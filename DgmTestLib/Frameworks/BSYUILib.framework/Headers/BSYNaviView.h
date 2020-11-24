//
//  BSYNaviView.h
//  BSYUILib
//
//  Created by Duane on 2020/11/10.
//

#import <BSYUILib/BSYBaseView.h>

#define kBSYNaviBarHeight 44.0f


NS_ASSUME_NONNULL_BEGIN

@interface BSYNaviView : BSYBaseView

@property (nonatomic, strong, readonly) UIImageView *background;
@property (nonatomic, strong, readonly) UIButton *leftButton;
@property (nonatomic, strong, readonly) UIButton *rightButton;
@property (nonatomic, strong, readonly) UIButton *rightButton2; // 默认不显示，调用showRightButton2显示
@property (nonatomic, strong, readonly) UILabel *titleLabel;

@property (nonatomic, assign) CGSize rightButtonSize;

- (void)showRightButton2;

+ (void)setNaviBarBackgroundImage:(UIImage *)image;
+ (void)setNaviBarLeftButtonImage:(UIImage *)image;
+ (void)setNaviBarBackgroundColor:(UIColor *)color;
+ (void)setNaviBarTitleColor:(UIColor *)color;
+ (void)setNaviBarTitleFont:(UIFont *)font;
+ (void)setNaviBarButtonColor:(UIColor *)color;
+ (void)setNaviBarButtonDisableColor:(UIColor *)color;
+ (void)setNaviBarButtonFont:(UIFont *)font;

@end

NS_ASSUME_NONNULL_END
