//
//  BSYRtcRoomManager.h
//  BSYRtc
//
//  Created by Duane on 2020/11/16.
//

#import <Foundation/Foundation.h>
#import <BSYRtc/BSYRtcDef.h>

NS_ASSUME_NONNULL_BEGIN

@interface BSYRtcRoomParams : NSObject

@property (nonatomic, copy, nullable) NSString *channel;

@property (nonatomic, copy, nullable) NSString *uid;

@property (nonatomic, copy, nullable) NSString *anchorUid;

@property (nonatomic, assign) BSYRtcRole role;

@end

@interface BSYRtcRoomUser : NSObject

@property (nonatomic, strong) NSString *uid;

@property (nonatomic, assign) BOOL videoMuted;

@property (nonatomic, assign) BOOL audioMuted;

@property (strong, nonatomic, nullable) BSYRtcVideoCanvas *canvas;

@end

@protocol BSYRtcRoomManagerDelegate <NSObject>
@optional

- (void)didEnterRoom;
- (void)onError:(NSError *)error;
- (void)didExitRoom;
- (void)localUserStateChange;
- (void)anchorUserStateChange;
- (void)remoteUserStateChange;

@end

@interface BSYRtcRoomManager : NSObject

@property (nonatomic, weak) id<BSYRtcRoomManagerDelegate> delegate;

@property (nonatomic, strong, readonly) NSArray<BSYRtcRoomUser *> *remoteUsers;
@property (nonatomic, strong, readonly) BSYRtcRoomUser *localUser;
@property (nonatomic, strong, readonly) BSYRtcRoomUser *anchorUser;

+ (BSYRtcRoomManager *)defaultManager;

- (void)enterRoom:(BSYRtcRoomParams *)params;
- (void)exitRoom;

@end

NS_ASSUME_NONNULL_END
