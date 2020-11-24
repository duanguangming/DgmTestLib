//
//  UITextView+placeholder.h
//  KKBLibrary
//
//  Created by Duane on 2019/6/4.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextView (placeholder)

/** placeholder */
@property(nonatomic, copy, nullable) NSString *placeholder;

/** placeholder颜色 */
@property(nonatomic,copy) UIColor *placeholderColor;

/** 富文本 */
@property(nonatomic,strong, nullable) NSAttributedString *attributePlaceholder;

/** 位置 */
@property(nonatomic,assign) CGPoint placeholderLocation;

@end

NS_ASSUME_NONNULL_END
