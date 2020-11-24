//
//  BSYMediaRequest.h
//  BSYSDK
//
//  Created by Duane on 2020/11/4.
//

#import <BSYSDK/BSYRequest.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, BSYMediaRequestStatus) {
    BSYMediaRequestStatus_Success = 1, // 请求成功
    
    BSYMediaRequestStatus_InvalidArgument = 400, //无效参数、解析请求体失败
    BSYMediaRequestStatus_AccessDenied = 403, // 访问被拒绝
    BSYMediaRequestStatus_NoSuchResource = 404, // 指定资源不存在
    BSYMediaRequestStatus_NoSupportOperation = 405, // 不支持此操作
    BSYMediaRequestStatus_AlreadyExist = 460, // 资源已存在
    BSYMediaRequestStatus_InternalError = 500, //内部信息错误
};

@interface BSYMediaRequest : BSYRequest

@end

NS_ASSUME_NONNULL_END
