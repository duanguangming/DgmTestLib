//
//  LimitInput.h
//  singleview
//
//  Created by aqua on 14-8-30.
//  Copyright (c) 2014年 aqua. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <BSYUILib/PhoneNumberFormatTextField.h>
#import <BSYUILib/WLUnitField.h>

#define PROPERTY_NAME @"limit"

#define DECLARE_PROPERTY(className) \
@interface className (Limit) \
@property(nonatomic, assign) NSInteger limit; \
@end

DECLARE_PROPERTY(UITextField)
DECLARE_PROPERTY(UITextView)
DECLARE_PROPERTY(PhoneNumberFormatTextField)
DECLARE_PROPERTY(WLUnitField)

@interface LimitInput : NSObject

@property(nonatomic, assign) BOOL enableLimitCount;

+(LimitInput *) sharedInstance;

@end
