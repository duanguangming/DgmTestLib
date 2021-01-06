//
//  BSYReportVodHeartBeatModel.h
//  BSYReport
//
//  Created by Duane on 2020/12/22.
//

#import <BSYReport/BSYReportVodOnlineModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYReportVodHeartBeatModel : BSYReportVodOnlineModel

/// 上报周期内的观看时长，单位：秒
@property(nonatomic, assign) NSTimeInterval heartbeat;

@end

NS_ASSUME_NONNULL_END
