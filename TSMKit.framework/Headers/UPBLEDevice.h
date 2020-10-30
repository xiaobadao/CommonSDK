//
//  UPBLEDevice.h
//  TSMKit
//
//  Created by jay_ch on 2017/10/24.
//  Copyright © 2017年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 @param deviceId 可穿戴设备的标识
 @param displayName  设备展示名称
 @param extraTag  设备额外表示名称（防止设备展示名称相同）
 */
@interface UPBLEDevice : NSObject
@property (nonatomic,copy) NSString* deviceId;
@property (nonatomic,copy) NSString* displayName;
@property (nonatomic,copy) NSString* extraTag;
@end
