//
//  BSYRtcManager.h
//  BSYRtc
//
//  Created by Duane on 2020/11/16.
//

#import <Foundation/Foundation.h>
#import <BSYRtc/BSYRtcManagerDelegate.h>
#import <BSYRtc/BSYRtcManagerProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYRtcManager : NSProxy <BSYRtcManagerProtocol>

@property (nonatomic, weak, nullable) id<BSYRtcManagerDelegate> delegate;

+ (BSYRtcManager *)defaultManager;

/**
 * 切换rtc底层服务商，默认使用BSYRtcServiceTypeAgora（声网）
 */
- (void)switchService:(BSYRtcServiceType)type;

@end

NS_ASSUME_NONNULL_END
