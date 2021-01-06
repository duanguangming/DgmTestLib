//
//  BSYReportVodMoveModel.h
//  BSYReport
//
//  Created by Duane on 2020/12/22.
//

#import <BSYReport/BSYReportVodOnlineModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYReportVodMoveModel : BSYReportVodOnlineModel

/// 起始位置 单位:秒
@property(nonatomic, assign) NSTimeInterval startPosition;

/// 停止位置 单位:秒
@property(nonatomic, assign) NSTimeInterval endPosition;

@end

NS_ASSUME_NONNULL_END
