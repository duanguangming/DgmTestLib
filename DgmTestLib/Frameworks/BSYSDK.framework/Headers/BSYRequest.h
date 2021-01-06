//
//  BSYRequest.h
//  BSYSDK
//
//  Created by Duane on 2020/11/3.
//

#import <BSYLib/BSYLib.h>
#import <BSYSDK/BSYResponseModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, BSYRequestStatus) {
    BSYRequestStatusOk = 1, // 成功
};

@class BSYRequest;

typedef void(^BSYRequestBlock)(__kindof BSYRequest *request);

@interface BSYRequest : BSYBaseRequest

@property (nonatomic, strong, readonly) BSYResponseModel *responseModel;

@property (nonatomic, strong, readonly) NSString *errorMessage;
@property (nonatomic, assign, readonly) BOOL success;

@property (nonatomic, assign) BOOL mockEnable;
@property (nonatomic, readonly) NSString *mockPath;
@property (nonatomic, readonly) NSString *mockBaseUrl;

- (void)startWithSuccess:(BSYRequestBlock)success failure:(BSYRequestBlock)failure;
- (void)startWithCompletionBlockWithSuccess:(nullable BSYBaseRequestBlock)success failure:(nullable BSYBaseRequestBlock)failure __attribute__((unavailable("call startWithSuccess:failure: instead")));

- (id)processResult:(id)resultData;

@end


typedef NS_ENUM(NSInteger, BSYDomainType) {
    BSYDomainTypeOnline = 0, // 正式环境
    BSYDomainTypePre = 1, // 预览环境
    BSYDomainTypeQA = 2, // 测试环境
    BSYDomainTypeDev = 3, // 开发环境
};

@interface BSYDomainConfigure : NSObject

@property (class, nonatomic, assign) BSYDomainType domainType;

@end

NS_ASSUME_NONNULL_END
