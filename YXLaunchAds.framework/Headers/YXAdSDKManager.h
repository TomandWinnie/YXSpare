//
//  YXAdSDKManager.h
//  LunchAd
//
//  Created by shuai on 2018/11/28.
//  Copyright © 2018 YX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXAdSDKManager : NSObject

+(instancetype)defaultManager;

/** 城市代码 */
@property (nonatomic, copy) NSString *cityCode;

/** 任务需要 */
// 渠道id
@property (nonatomic, copy) NSString *channelID;
// 用户id
@property (nonatomic, copy) NSString *vuid;
// 用户昵称
@property (nonatomic, copy) NSString *nick_name;

/**
 添加黑名单     取消显示广告
 
 @param media 媒体位id
 @param day 时间 单位天 默认3天
 */
+ (void)addBlackList:(NSString*)media andTime:(NSInteger)day;


/**
 移除黑名单      显示广告
 
 @param media 媒体位id
 */
+ (void)removeBlackList:(NSString*)media;

@end

NS_ASSUME_NONNULL_END
