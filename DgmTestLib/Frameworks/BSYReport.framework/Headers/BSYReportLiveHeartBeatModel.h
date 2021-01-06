//
//  BSYReportLiveHeartBeatModel.h
//  BSYReport
//
//  Created by Duane on 2020/12/21.
//

#import <BSYReport/BSYReportLiveModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYReportLiveHeartBeatModel : BSYReportLiveModel

/// 直播流ID
@property(nonatomic, strong) NSString *streamName;

/// 分辨率
@property(nonatomic, strong) NSString *resolution;

/// 播放地址
@property(nonatomic, strong) NSString *playURL;

/// 上报周期内的观看时长，单位：秒
@property(nonatomic, assign) NSTimeInterval heartbeat;

@end

NS_ASSUME_NONNULL_END
