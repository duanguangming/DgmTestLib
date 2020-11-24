//
//  BSYBaseCollectionViewController.h
//  BSYUILib
//
//  Created by Duane on 2020/11/11.
//

#import <BSYUILib/BSYUILib.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYBaseCollectionViewController : BSYBaseScrollController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching>


@property (nonatomic, strong, readonly) UICollectionView *collectionView;
@property (nonatomic, assign) BOOL autoSetViewState;

- (instancetype)initWithCollectionViewLayout:(UICollectionViewLayout *)layout;

@end

NS_ASSUME_NONNULL_END
