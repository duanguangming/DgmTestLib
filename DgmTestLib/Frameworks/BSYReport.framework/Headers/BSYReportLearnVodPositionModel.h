//
//  BSYReportLearnVodPositionModel.h
//  BSYReport
//
//  Created by Duane on 2020/12/24.
//

#import <BSYReport/BSYReportLearnModel.h>

NS_ASSUME_NONNULL_BEGIN

#define BSYReportEventLearnVodPosition (@"vod_play_position")

@interface BSYReportLearnVodPositionModel : BSYReportLearnModel

// 视频点播Id
@property(nonatomic, assign) uintID videoLessonId;

// 播放的位置,单位：秒
@property(nonatomic, assign) NSTimeInterval playTime;

@end

NS_ASSUME_NONNULL_END
