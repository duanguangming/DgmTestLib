//
//  BSYLibMacro.h
//  BSYLib
//
//  Created by Duane on 2020/11/4.
//

#ifndef BSYLibMacro_h
#define BSYLibMacro_h

#define INT_RANDOM(from,to) ( from + ( arc4random() % ( to - from + 1 ) ) )

#define StandardUserDefaults [NSUserDefaults standardUserDefaults]

#define NSLogFunction() NSLog(@"Method called: %s", __FUNCTION__)
#define NSLogCGRect(r) NSLog(@"CGRect x:%f y:%f w:%f h:%f", r.origin.x, r.origin.y, r.size.width, r.size.height)

#define MINUTE (60)
#define HOUR (60*MINUTE)
#define DAY (24*HOUR)

// 资源文件
#define Framework_Bundle [NSBundle bundleForClass:self.class]

#define AssetsImage(name) [UIImage imageNamed:name inBundle:Framework_Bundle compatibleWithTraitCollection:nil]
#define AssetsOriginalImage(name) [AssetsImage(name) imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal]

#define Framework_Bundle_Path [Framework_Bundle bundlePath]
#define Framework_Bundle_ResourcePath [Framework_Bundle resourcePath]
#define Framework_Bundle_Path_WithName(bundle) [Framework_Bundle_ResourcePath stringByAppendingPathComponent:bundle]
#define Framework_Bundle_WithName(bundle) [NSBundle bundleWithPath:Framework_Bundle_Path_WithName(bundle)]

#define ImageFromBundle(bundle, name) [UIImage imageNamed:name inBundle:bundle compatibleWithTraitCollection:nil]


#define IgnoredPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)


#define weakify(object) autoreleasepool   {} __weak  typeof(object) weak##object = object;
#define strongify(object) autoreleasepool {} __strong  typeof(weak##object) object = weak##object;

#endif /* BSYLibMacro_h */
