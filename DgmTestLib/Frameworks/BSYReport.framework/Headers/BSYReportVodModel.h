//
//  BSYReportVodModel.h
//  BSYReport
//
//  Created by Duane on 2020/12/21.
//

#import <BSYReport/BSYReportModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYReportVodModel : BSYReportModel

/// 媒资ID
@property(nonatomic, strong) NSString *mediaId;

/// 视频ID
@property(nonatomic, strong) NSString *videoId;

/// 分辨率
@property(nonatomic, strong) NSString *resolution;

/// 播放地址
@property(nonatomic, strong) NSString *playURL;

@end

NS_ASSUME_NONNULL_END
