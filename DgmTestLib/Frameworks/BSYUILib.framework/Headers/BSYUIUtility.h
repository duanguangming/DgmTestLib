//
//  BSYUIUtility.h
//  BSYUILib
//
//  Created by Duane on 2020/11/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYUIUtility : NSObject

+ (UIEdgeInsets)iphoneSafeArea;

+ (UIButton *)buttonWithTitleColor:(UIColor *)color font:(UIFont *)font;

+ (UILabel *)labelWithColor:(UIColor *)color font:(UIFont *)font;
+ (UILabel *)labelWithColor:(UIColor *)color font:(UIFont *)font alignment:(NSTextAlignment)alignment;

@end

NS_ASSUME_NONNULL_END
