//
//  ScreenEdgePanDismissInteractiveTransition.h
//  BasicFrameworks
//
//  Created by duane on 2018/9/9.
//  Copyright © 2018年 duane. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScreenEdgePanDismissInteractiveTransition : UIPercentDrivenInteractiveTransition

@property (nonatomic, assign, readonly) BOOL interacting;

- (void)panToDismiss:(UIViewController *)controller edges:(UIRectEdge)edges;

@end
