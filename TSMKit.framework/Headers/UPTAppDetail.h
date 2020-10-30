//
//  AppDetail.h
//  TSMKit
//
//  Created by chenlei on 16/6/12.
//  Copyright © 2016年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPTAppListRequestParams.h"

@interface UPTAppDetail : NSObject

/**
 *  必须填写的域
 */
@property (nonatomic, copy) NSString* mpanId;
@property (nonatomic, copy) NSString* appAid;
@property (nonatomic, copy) NSString* cardType;
@property (nonatomic, copy) NSString* issuerName;
@property (nonatomic, copy) NSString* appName;
@property (nonatomic, copy) NSString* appIcon;
@property (nonatomic, copy) NSString* mpan;
@property (nonatomic, copy) NSString* lastDigits;
@property (nonatomic, copy) NSString* mpanStatus;
@property (nonatomic, copy) NSString* opStatus;
//@property (nonatomic, copy) NSString* quota;
@property (nonatomic, copy) NSString* appProviderName;

/**
 *  @author TangZhixiong, 16-07-20 14:07:50
 *
 *  应用状态
 *
 *  @return
 *  01 已安装已激活
 *  02 已安装未激活
 *  03 未安装未激活
 *  04 未安装已激活
 *  05 已锁定
 *  06 已注销
 *  99 非法状态
 */
- (NSString*)status;


/**
 *  受理方和发卡方自选填写的域
 */
@property (nonatomic, copy) NSString* callCenterNumber;
@property (nonatomic, copy) NSString* email;
@property (nonatomic, copy) NSString* website;
@property (nonatomic, copy) NSString* apkIcon;
@property (nonatomic, copy) NSString* apkName;
@property (nonatomic, copy) NSString* apkPackageName;
@property (nonatomic, copy) NSString* apkDownloadUrl;


- (instancetype)initWithDict:(NSDictionary*)dict;

@end
