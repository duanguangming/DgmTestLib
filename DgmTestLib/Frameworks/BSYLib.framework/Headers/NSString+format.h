//
//  NSString+format.h
//  BSYLib
//
//  Created by Duane on 2020/11/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (format)

// 字节转化成KB, MB, GB, TB等格式
+(NSString*)volumeWith:(UInt64)size;

// 字符串被换行符分成多少行
- (NSUInteger)numberOfLines;

// 正则表达式匹配
- (BOOL)matchRegex:(NSString *)regex;

// 手机号中间4位显示成 ****
- (NSString *)encryptPhone;

// urlEncode
- (NSString *)urlEncodeString;

- (NSString*)subStringFrom:(NSString *)startString to:(NSString *)endString;

- (NSString*)subStringForm:(NSString *)string offset:(NSInteger) offset;

- (NSString*)subStringTo:(NSString *)string;

// 去掉首未的空格、换行
- (NSString*)removeSpaceAndNewline;

@end

NS_ASSUME_NONNULL_END
