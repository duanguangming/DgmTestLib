//
//  BSYReportVodOnlineModel.h
//  BSYReport
//
//  Created by Duane on 2020/12/24.
//

#import <BSYReport/BSYReportVodModel.h>

NS_ASSUME_NONNULL_BEGIN

#define BSYReportEventVodStart (@"vod_player_start")
#define BSYReportEventVodPause (@"vod_player_pause")
#define BSYReportEventVodSpeed (@"vod_player_speed")

@interface BSYReportVodOnlineModel : BSYReportVodModel

/// 播放倍速
@property(nonatomic, assign) float speed;

@end

NS_ASSUME_NONNULL_END
