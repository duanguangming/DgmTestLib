//
//  BSYReportManager.h
//  BSYReport
//
//  Created by Duane on 2020/12/21.
//

#import <Foundation/Foundation.h>
#import <BSYLib/BSYSingletonKit.h>
#import <BSYLib/BSYDataType.h>
#import <BSYSDK/BSYSDKDataType.h>

NS_ASSUME_NONNULL_BEGIN

@class BSYReportModel;

@interface BSYReportManager : NSObject

DEFINE_SINGLETON_FOR_H(BSYReportManager)

@property (nonatomic, strong, readonly) NSString *accessToken;
@property (nonatomic, strong, readonly) NSString *sessionId;

- (void)refreshToken:(BSYBlockNSError)completion;
- (void)report:(BSYReportModel *)report completion:(BSYBlockNSError)completion;

@end

NS_ASSUME_NONNULL_END
