//
//  NSString+Size.h
//  KKBLibrary
//
//  Created by zddMac on 2019/7/11.
//  Copyright © 2019 KaiKeBa. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString(Size)
/**
   * 计算单行文本的高度
*/
- (CGFloat)heightWithLabelFont:(UIFont *)font;


/**
   * 计算多行文本的高度
*/
- (CGFloat)heightWithLabelFont:(UIFont *)font withLabelWidth:(CGFloat)width;

/**
 *  根据文字内容动态计算UILabel宽高
 *  @param maxWidth label宽度
 *  @param font  字体
 *  @param lineSpacing  行间距
 */
- (CGRect)boundingRectWithWidth:(CGFloat)maxWidth withTextFont:(UIFont *)font withLineSpacing:(CGFloat)lineSpacing;

/**
 *  NSString转换成NSMutableAttributedString
 *  @param font  字体
 *  @param lineSpacing  行间距
 */
- (NSMutableAttributedString *)attributedStringFromStingWithFont:(UIFont *)font withLineSpacing:(CGFloat)lineSpacing;

@end

NS_ASSUME_NONNULL_END
