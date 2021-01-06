//
//  BSYUCManager.h
//  BSYUC
//
//  Created by Duane on 2020/11/6.
//

#import <Foundation/Foundation.h>
#import <BSYLib/BSYSingletonKit.h>
#import <BSYLib/BSYObserverKit.h>
#import <BSYLib/BSYDataType.h>
#import <BSYSDK/BSYSDK.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BSYUCManagerDelegate <NSObject>

@optional

/*
 登录成功通知
 */
- (void)didLogin;

/*
 退出登录通知
 */
- (void)didLogout;

/*
 用户信息更新通知
 */
- (void)didUpdateUserInfo;

@end

@class BSYUCUserInfoModel;
@class BSYUCAuthSessionModel;
@class BSYUC3rdAuthModel;

typedef void(^BSYLoginBlock)(NSError * _Nullable error, BSYUCAuthSessionModel * _Nullable loginModel);
typedef void(^BSYUCTokenBlock)(NSError * _Nullable error, NSString * _Nullable token);

@interface BSYUCManager : NSObject

DEFINE_SINGLETON_FOR_H(BSYUCManager)
DEFINE_OBSERVER_FOR_H(BSYUCManagerDelegate)

/*
 当前是否登录
 */
@property (nonatomic, assign, readonly) BOOL isLogin;

/*
 登录过期回调
 */
@property (nonatomic, copy) BSYBlockVoid tokenExpiredBlock;

/*
 当前登录token
 */
@property (nonatomic, strong, readonly) NSString *accessToken;

/*
 当前登录用户信息
 */
@property (nonatomic, strong, readonly) BSYUCUserInfoModel *userInfo;

/*
 当前登录用户存储数据的文件路径
 */
- (NSString *)documentDirectory;

/*
 获取上传头像token
 */
- (void)getUploadImageTokenRequest:(BSYBlockNSString)completion;

/*
 获取登录验证码
 */
- (void)getLoginVerifyCode:(NSString *)mobile completion:(BSYBlockNSError)completion;

/*
 获取登录语音验证码
 */
- (void)getLoginSoundVerifyCode:(NSString *)mobile completion:(BSYBlockNSError)completion;

/*
 获取手机换绑验证码
 */
- (void)getRebindVerifyCode:(NSString *)mobile completion:(BSYBlockNSError)completion;

/*
 获取手机换绑语音验证码
 */
- (void)getRebindSoundVerifyCode:(NSString *)mobile completion:(BSYBlockNSError)completion;

/*
 已登录用户获取手机验证码
 */
- (void)getVerifyCode:(BSYBlockNSError)completion;

/*
 已登录用户获取语音验证码
 */
- (void)getSoundVerifyCode:(BSYBlockNSError)completion;

/*
 获取修换绑手机号的auth_token
 */
- (void)getChangeMobileTokenWithVerifyCode:(NSString *)verifyCode completion:(BSYUCTokenBlock)completion;

/*
 换绑手机
 */
- (void)changeMobile:(NSString *)mobile verifyCode:(NSString *)verifyCode authCode:(NSString *)authCode  completion:(BSYBlockNSError)completion;

/*
 登录
 */
- (void)loginWithMobile:(NSString *)mobile verifyCode:(NSString*)code completion:(BSYLoginBlock)completion;

/*
 退出登录
 */
- (void)logoutWithcompletion:(BSYBlockVoid)completion;

/*
 当登录会话过期时调用
 */
- (void)tokenIsInvalid;

/*
 绑定微信
 */
- (void)weixinBind:(BSYUC3rdAuthModel *)authModel completion:(BSYBlockNSError)completion;

/*
 重绑微信
 */
- (void)weixinReBind:(BSYUC3rdAuthModel *)authModel completion:(BSYBlockNSError)completion;

/*
 检查手机号格式
 */
+ (NSError *)checkPhoneNumber:(NSString *)phoneNumber;

/*
 检查验证码格式
 */
+ (NSError *)checkVerifyCode:(NSString *)code;

/*
 立即刷新用户信息
 */
- (void)refreshUserInfo:(BSYBlockNSError)completion;

/*
 检查是否需要刷新用户信息，如果需要才刷新（默认每天刷新一次）
 */
- (void)checkRefreshUserInfo;

/*
 修改用户信息
 */
- (void)updateUserInfo:(BSYUCUserInfoModel *)infoModel completion:(BSYBlockNSError)completion;

/*
 修改用户头像
 */
- (void)updateAvatar:(NSString *)url completion:(BSYBlockNSError)completion;

@end

NS_ASSUME_NONNULL_END
