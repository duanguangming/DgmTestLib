//
//  BSYUILibMacro.h
//  BSYUILib
//
//  Created by Duane on 2020/11/4.
//

#ifndef BSYUILibMacro_h
#define BSYUILibMacro_h

#import <BSYLib/BSYLibMacro.h>

#import <BSYUILib/UIColor+HexColor.h>
#import <BSYUILib/BSYUIUtility.h>

#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

#define IS_iPhoneX ([BSYUIUtility iphoneSafeArea].bottom > 0.0)
#define IS_iPhone5 (SCREEN_WIDTH == 320 && SCREEN_HEIGHT == 568)
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

#define IPHONEX_MARGIN_TOP      (IS_iPhoneX?[BSYUIUtility iphoneSafeArea].top:[[UIApplication sharedApplication] statusBarFrame].size.height)
#define IPHONEX_MARGIN_BOTTOM   ([BSYUIUtility iphoneSafeArea].bottom)

#define APP_KEYWINDOW [UIApplication sharedApplication].keyWindow

#define HexColor(s) [UIColor colorFromHex:s]
#define HexAlphaColor(s,a) [UIColor colorFromHex:s alpha:a]
#define HexStringColor(s) [UIColor colorFromHexString:s]
#define HexStringAlphaColor(s,a) [UIColor colorFromHexString:s alpha:a]

#define MKRGB(r,g,b)                ([UIColor colorWithRed:(float)r/255.0f green:(float)g/255.0f blue:(float)b/255.0f alpha:1])
#define MKRGBA(r,g,b,a)                ([UIColor colorWithRed:(float)r/255.0f green:(float)g/255.0f blue:(float)b/255.0f alpha:a])
#define MKRefRGBA(r,g,b,a)          ([MKRGBA(r,g,b,a) CGColor])

#define fFont(s) [UIFont systemFontOfSize:s]
#define fBFont(s) [UIFont boldSystemFontOfSize:s]

#endif /* BSYUILibMacro_h */
