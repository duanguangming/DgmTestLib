//
//  BSYApiRequest.h
//  BSYSDK
//
//  Created by Duane on 2020/11/4.
//

#import <BSYSDK/BSYSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, BSYApiRequestStatus) {
    BSYApiRequestStatus_Ok = 1, // 成功
    BSYApiRequestStatus_Empty = 0, // 成功，数据为空
};

@interface BSYApiRequest : BSYRequest

@end

NS_ASSUME_NONNULL_END
