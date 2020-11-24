//
//  PhoneNumberFormatTextField.h
//  EagleApp
//
//  Created by duane on 2018/1/10.
//  Copyright © 2018年 duane. All rights reserved.
//

#import "InsetsTextField.h"

@interface PhoneNumberFormatTextField : InsetsTextField

- (NSString *)phoneNumber;
- (void)setPhoneNumber:(NSString *)phone;

@end
