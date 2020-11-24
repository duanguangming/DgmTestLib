//
//  BSYNavigationController.h
//  BSYUILib
//
//  Created by Duane on 2020/11/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYNavigationController : UINavigationController

@end

@interface UINavigationController (BSY)

- (void)pushViewControllerWithName:(NSString *)viewController animated:(BOOL)animated;
- (void)pushViewControllerWithName:(NSString *)viewController params:(nullable NSDictionary *)params animated:(BOOL)animated;

- (void)presentViewControllerWithName:(NSString *)viewController animated:(BOOL)flag completion:(void (^)(void))completion;
- (void)presentViewControllerWithName:(NSString *)viewController params:(nullable NSDictionary *)params animated:(BOOL)flag completion:(void (^)(void))completion;

@end

NS_ASSUME_NONNULL_END
