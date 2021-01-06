//
//  BSYReportLiveModel.h
//  BSYReport
//
//  Created by Duane on 2020/12/21.
//

#import <BSYReport/BSYReportModel.h>

NS_ASSUME_NONNULL_BEGIN

#define BSYReportEventLiveEnter (@"live_platform_enter")
#define BSYReportEventLiveExit (@"live_platform_exit")

@interface BSYReportLiveModel : BSYReportModel

/// 直播间ID
@property(nonatomic, strong) NSString *liveId;

@end

NS_ASSUME_NONNULL_END
