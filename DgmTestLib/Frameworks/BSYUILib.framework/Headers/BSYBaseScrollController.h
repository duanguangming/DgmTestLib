//
//  BSYBaseScrollController.h
//  BSYUILib
//
//  Created by Duane on 2020/11/10.
//

#import <BSYUILib/BSYBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYBaseScrollController : BSYBaseViewController <UIScrollViewDelegate>

@property (nonatomic, strong, nullable) UIScrollView *scrollView;

@property (nonatomic, assign) BOOL isFreshing;

@end

NS_ASSUME_NONNULL_END
