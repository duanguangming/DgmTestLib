//
//  BSYReportLearnModel.h
//  BSYReport
//
//  Created by Duane on 2020/12/21.
//

#import <BSYReport/BSYReportModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYReportLearnModel : BSYReportModel

// 学员id
@property(nonatomic, assign) uintID studentUid;

// 内容id
@property(nonatomic, assign) uintID contentId;

@end

NS_ASSUME_NONNULL_END
