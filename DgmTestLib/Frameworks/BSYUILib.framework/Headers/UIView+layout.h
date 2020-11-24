//
//  UIView+layout.h
//  BSYUILib
//
//  Created by Duane on 2020/11/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (layout)

@property (nonatomic, assign) CGSize size;

@property (assign, nonatomic) CGPoint origin;

@property (nonatomic,assign) CGFloat x;

@property (nonatomic,assign) CGFloat y;

@property (nonatomic, assign) CGFloat top;

@property (nonatomic, assign) CGFloat bottom;

@property (nonatomic, assign) CGFloat left;

@property (nonatomic, assign) CGFloat right;

@property (nonatomic, assign) CGFloat centerX;

@property (nonatomic, assign) CGFloat centerY;

@property (nonatomic, assign) CGFloat width;

@property (nonatomic, assign) CGFloat height;

@property (nonatomic, readonly) CGFloat minX;

@property (nonatomic, readonly) CGFloat maxX;

@property (nonatomic, readonly) CGFloat minY;

@property (nonatomic, readonly) CGFloat maxY;

@end

NS_ASSUME_NONNULL_END
