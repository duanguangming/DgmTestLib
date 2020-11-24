//
//  BSYBaseViewController.h
//  BSYUILib
//
//  Created by Duane on 2020/11/10.
//

#import <UIKit/UIKit.h>
#import <BSYUILib/BSYNaviView.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYBaseViewController : UIViewController

@property (nonatomic, strong, readonly) BSYNaviView *customNaviView;

@property (nonatomic, strong, class, nullable) UIColor *backgroundColor;

- (void)doAfterViewDidAppear:(void(^)(void))delayBlock;
- (void)contentSizeDidChange:(NSString*)size;

- (BOOL)interactivePopGestureRecognizer;

- (void)createSubView;
- (void)bindViewModel;

- (void)leftNaviButtonClicked:(UIButton *)sender;
- (void)rightNaviButtonClicked:(UIButton *)sender;

@end

NS_ASSUME_NONNULL_END
