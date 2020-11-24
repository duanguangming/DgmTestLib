//
//  BSYBaseTableController.h
//  BSYUILib
//
//  Created by Duane on 2020/11/10.
//

#import <BSYUILib/BSYUILib.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYBaseTableController : BSYBaseScrollController <UITableViewDataSource, UITableViewDelegate, UITableViewDataSourcePrefetching>

@property (nonatomic, strong, readonly) UITableView *tableView;
@property (nonatomic, assign) BOOL autoSetViewState;

- (UITableViewStyle)tableViewStyle;

@end

NS_ASSUME_NONNULL_END
