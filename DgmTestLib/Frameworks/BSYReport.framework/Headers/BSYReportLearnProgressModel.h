//
//  BSYReportLearnProgressModel.h
//  BSYReport
//
//  Created by Duane on 2020/12/21.
//

#import <BSYReport/BSYReportLearnModel.h>

NS_ASSUME_NONNULL_BEGIN

#define BSYReportEventLearnProgress (@"study_progress_report")

@interface BSYReportLearnProgressModel : BSYReportLearnModel

// 学习进度 [0-100]
@property(nonatomic, assign) float progress;

// 学习时长,单位：秒
@property(nonatomic, assign) NSTimeInterval studyTime;

@end

NS_ASSUME_NONNULL_END
