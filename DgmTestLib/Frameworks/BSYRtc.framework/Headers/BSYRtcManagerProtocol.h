//
//  BSYRtcManagerProtocol.h
//  BSYRtc
//
//  Created by Duane on 2020/11/16.
//

#import <BSYRtc/BSYRtcManagerDelegate.h>
#import <BSYRtc/BSYRtcDef.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BSYRtcManagerProtocol <NSObject>
@required

@property (nonatomic, weak, nullable) id<BSYRtcManagerDelegate> delegate;

- (void)initializeWithConfig:(BSYRtcConfig *)config;

/**
 * 进入房间
 */
- (void)enterRoom:(BSYRtcParams *)enterConfig;

/**
 * 离开房间
 */
- (void)exitRoom;

/**
 * 切换角色
 */
-(void)switchRole:(BSYRtcRole)role;

/**
 * 设置音视频数据接收模式，需要在进房前设置才能生效
 **/
- (void)setDefaultStreamRecvMode:(BOOL)autoRecvAudio video:(BOOL)autoRecvVideo;

/**
 * 设置美颜
 * @param level 美颜级别，取值范围0 - 1.0； 0表示关闭，值越大，效果越明显。
 */
- (void)setBeautyLevel:(float)level;

#pragma mark - video -

/**
 * 开启本地视频的预览画面（默认前置摄像头）
 */
- (void)startLocalPreview:(BSYRtcVideoCanvas *)canvas;

/**
 * 停止本地视频采集及预览
 */
- (void)stopLocalPreview;

/**
 * 暂停/恢复推送本地的视频数据
 */
- (void)muteLocalVideo:(BOOL)mute;

/**
 * 开始显示远端视频画面
 */
- (void)startRemoteView:(BSYRtcVideoCanvas *)canvas;

/**
 * 暂停/恢复接收指定的远端视频流
 */
- (void)muteRemoteVideoStream:(NSString *)userId mute:(BOOL)mute;

/**
 * 暂停/恢复接收所有远端视频流
 */
- (void)muteAllRemoteVideoStreams:(BOOL)mute;

/**
 * 设置视频编码器相关参数
 */
- (void)setVideoEncoderParam:(BSYRtcVideoEncParam *)param;

/**
 * 设置本地摄像头预览画面的镜像模式
 */
- (void)setLocalViewMirror:(BSYRtcLocalVideoMirrorType)mirror;

/**
 * 选定观看指定 uid 的大画面或小画面
 */
- (void)setRemoteVideoStreamType:(NSString*)userId type:(BSYRtcVideoStreamType)type;

/**
 * 设定观看方优先选择的视频质量，默认为大画面
 */
- (void)setPriorRemoteVideoStreamType:(BSYRtcVideoStreamType)type;

#pragma mark - audio -

/**
 * 设置音频质量，需要在 startLocalAudio 之前进行设置，否则不会生效。
 */
- (void)setAudioQuality:(BSYRtcAudioQuality)quality;

/**
 * 开启本地音频的采集和上行
 */
- (void)startLocalAudio;

/**
 * 关闭本地音频的采集和上行
 */
- (void)stopLocalAudio;

/**
 * 静音/取消静音本地的音频
 */
- (void)muteLocalAudio:(BOOL)mute;

/**
 * 设置音频路由，声音由哪里输出（扬声器、听筒），默认值：BSYRtcAudioRouteSpeakerphone
 */
- (void)setAudioRoute:(BSYRtcAudioRoute)route;

/**
 * 静音/取消静音指定的远端用户的声音
 */
- (void)muteRemoteAudio:(NSString *)userId mute:(BOOL)mute;

/**
 * 静音/取消静音所有用户的声音
 */
- (void)muteAllRemoteAudio:(BOOL)mute;

#pragma mark - camera -

/**
 * 切换摄像头
 */
- (void)switchCamera;

/**
 * 查询当前摄像头是否支持缩放
 */
- (BOOL)isCameraZoomSupported;

/**
 * 设置摄像头缩放因子（焦距）
 * @param distance 取值范围为1 - 5，数值越大，焦距越远
 */
- (void)setZoom:(CGFloat)distance;

/**
 * 查询是否支持开关闪光灯（手电筒模式）
 */
- (BOOL)isCameraTorchSupported;

/**
 * 开关闪光灯
 */
- (BOOL)enbaleTorch:(BOOL)enable;

/**
 * 查询是否支持设置焦点
 */
- (BOOL)isCameraFocusPositionInPreviewSupported;

/**
 * 设置摄像头焦点
 * @param touchPoint 对焦位置
 */
- (void)setFocusPosition:(CGPoint)touchPoint;

/**
 * 查询是否支持自动识别人脸位置
 */
- (BOOL)isCameraAutoFocusFaceModeSupported;

/**
 * 自动识别人脸位置
 */
- (void)enableAutoFaceFoucs:(BOOL)enable;

@end

NS_ASSUME_NONNULL_END
