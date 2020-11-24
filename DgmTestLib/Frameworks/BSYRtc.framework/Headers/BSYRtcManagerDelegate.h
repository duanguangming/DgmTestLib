//
//  BSYRtcManagerDelegate.h
//  BSYRtc
//
//  Created by Duane on 2020/11/16.
//

#import <BSYRtc/BSYRtcDef.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BSYRtcManagerDelegate <NSObject>
@optional

/**
 * 错误回调
 */
- (void)onError:(nullable NSError *)error;

/**
 * 警告回调
 */
- (void)onWarning:(nullable NSError *)warning;

/**
 * 已加入房间的回调
 */
- (void)onEnterRoom:(nullable NSError *)result;

/**
 * 离开房间的事件回调
 */
- (void)onExitRoom:(nullable NSError *)reason;

/**
 * 切换角色的事件回调
 */
- (void)onSwitchRole:(nullable NSError *)error;

/**
 * 有主播加入当前房间或从听众切换成主播
 */
- (void)onRemoteUserEnterRoom:(NSString *)userId;

/**
 * 有用户离开当前房间或从主播切换成听众
 */
- (void)onRemoteUserLeaveRoom:(NSString *)userId;

/**
 * 开始渲染本地或远程用户的首帧画面
 *
 * 如果 userId == nil，代表开始渲染本地采集的摄像头画面。
 * 如果 userId != nil，代表开始渲染远程用户的首帧画面。
 */
- (void)onFirstVideoFrame:(NSString *)userId width:(int)width height:(int)height;

/**
 * 网络质量
 * @note userId == nil 代表自己当前的视频质量
 *
 * @param txQuality 上行网络质量
 * @param rxQuality 下行网络质量
 */
- (void)onNetworkQuality:(NSString *)userId txQuality:(BSYRtcNetworkQuality)txQuality rxQuality:(BSYRtcNetworkQuality)rxQuality;

/**
 * 连接状态
 */
- (void)onConnectionChangedToState:(BSYRtcConnectionState)state;

/**
 * 音频路由发生变化（仅 iOS），音频路由即声音由哪里输出（扬声器或听筒）
 */
- (void)onAudioRouteChanged:(BSYRtcAudioRoute)route;

/**
 * 用于提示音量大小的回调，包括每个 userId 的音量和远端总音量
 */
- (void)onUserVoiceVolume:(NSArray<BSYRtcVolumeInfo *> *)userVolumes totalVolume:(NSInteger)totalVolume;

@end

NS_ASSUME_NONNULL_END
