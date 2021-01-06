//
//  BSYReportModel.h
//  BSYReport
//
//  Created by Duane on 2020/12/21.
//

#import <BSYSDK/BSYSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BSYReportScope) {
    BSYReportScopeMonitor = 0, // 监控数据
    BSYReportScopeCharge = 1, // 计费数据
    BSYReportScopeBusiness = 2, // 业务数据
};

@interface BSYReportModel : BSYMediaModel

/// 业务标签，例如“live”、“vod”
@property(nonatomic, strong) NSString *business;

/// 0:监控数据，1:计费数据，2:业务数据
@property(nonatomic, assign) BSYReportScope scope;

/// 事件类型，规则：{系统简称}_{模块名}_{事件名}，全部小写
@property(nonatomic, strong) NSString *eventType;

/// 事件数据
@property(nonatomic, strong) NSDictionary *eventData;

@end

NS_ASSUME_NONNULL_END
