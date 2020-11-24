//
//  BSYSDKConfig.h
//  BSYSDK
//
//  Created by Duane on 2020/11/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYSDKConfig : NSObject

@property (class, nonatomic, copy, readonly) NSString *ak;
@property (class, nonatomic, copy, readonly) NSString *sk;

@property (class, nonatomic, copy, readonly) NSString *appId;
@property (class, nonatomic, copy, readonly) NSString *appKey;

/*
 配置ak和sk
 */
+ (void)configAk:(NSString *)ak sk:(NSString *)sk;

/*
 配置appId和appKey
 */
+ (void)configAppId:(NSString *)appId appKey:(NSString *)appKey;

+ (NSString *)createAccessToken;
+ (NSString *)testAccessToken;

@end

NS_ASSUME_NONNULL_END
