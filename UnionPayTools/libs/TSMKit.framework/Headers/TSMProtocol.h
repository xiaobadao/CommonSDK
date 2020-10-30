//
//  TSMProtocol.h
//  TSMKit
//
//  Created by jay_ch on 2017/10/18.
//  Copyright © 2017年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPBLEDevice.h"
NS_ASSUME_NONNULL_BEGIN
typedef void (^TSMScanDevicesProgressBlock)(UPBLEDevice* __nullable upBLEDevice);
typedef void (^TSMScanDevicesCompletionBlock)(NSArray<UPBLEDevice *>* __nullable upBLEDevices, NSError* __nullable error);
typedef void (^TSMHandlerBlock)(NSString* result, NSError* __nullable error);

@protocol UPTChannelDelegate <NSObject>
- (NSInteger)channelID;
- (NSString*)slectResp;
- (NSData*)transmitWithCommand:(NSData *)command error:(NSError**)error;
@end

@protocol UPTBluetoothDelegate <NSObject>
- (NSInteger)establishWithError:(NSError **)error;
- (id <UPTChannelDelegate>)openLogicChannelWithCommand:(NSData*)command error:(NSError **)error;
- (NSInteger)closeLogicChannelWithChannelId:(NSInteger)channelId error:(NSError **)error;
- (NSString *)bleSEStatusWithError:(NSError **)error;
- (NSData *)btcInfoWithError:(NSError **)error;
- (NSData *)cplcInfoWithError:(NSError **)error;
- (NSInteger)scanDeviceswithTime:(NSInteger)scanTime progressBlock:(TSMScanDevicesProgressBlock)progressBlock completionBlock:(TSMScanDevicesCompletionBlock)completionBlock;
- (NSInteger)connectDevice:(UPBLEDevice *)upBLEDevice completionBlock:(TSMHandlerBlock)completionBlock;
- (NSInteger)disconnectDevice:(UPBLEDevice *)upBLEDevice completionBlock:(TSMHandlerBlock)completionBlock;
- (BOOL)isSupportBindCard;
- (NSInteger)setDefaultCardWithAppAId:(NSString *)appAId completionBlock:(TSMHandlerBlock)completionBlock;
- (NSInteger)defaultCardWithCompletionBlock:(TSMHandlerBlock)completionBlock;
@end

NS_ASSUME_NONNULL_END
