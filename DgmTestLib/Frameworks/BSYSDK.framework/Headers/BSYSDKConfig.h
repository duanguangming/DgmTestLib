//
//  BSYSDKConfig.h
//  BSYSDK
//
//  Created by Duane on 2020/11/4.
//

#import <Foundation/Foundation.h>
#import <BSYSDK/BSYSDKDataType.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYSDKConfig : NSObject

@property (class, nonatomic, copy, readonly) NSString *appId;

/*
 配置appId
 */
+ (void)configAppId:(NSString *)appId;

@end

NS_ASSUME_NONNULL_END
