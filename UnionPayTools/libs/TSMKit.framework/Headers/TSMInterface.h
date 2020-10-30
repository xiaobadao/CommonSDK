//
//  TSMInterface.h
//  TSMKit
//
//  Created by TangZhixiong on 16/6/6.
//  Copyright © 2016年 TangZhixiong. All rights reserved.
//  V 2.3.3

#import <Foundation/Foundation.h>
#import "UPTCheckBinRequestParams.h"
#import "UPTAppDownloadRequestParams.h"
#import "UPTAppDeleteRequestParams.h"
#import "UPTAppListRequestParams.h"
#import "UPTResponse.h"
#import "TSMProtocol.h"
NS_ASSUME_NONNULL_BEGIN


/**
 *  接口调用成功回调（回调的block会在主线程执行，不用做线程处理）
 *
 *  @param response
 */
typedef void(^__nullable TSMSuccessBlock)(UPTResponse* __nonnull response);


/**
 *  接口执行失败回调（回调的block会在主线程执行，不用做线程处理）
 *
 *  @param errorCode 错误diamante
 *  @param errorDesc 错误描述
 */
typedef void(^__nullable TSMFailureBlock)(NSString*__nonnull errorCode, NSString* __nonnull errorDesc);

/**
 *  调用接口时进度回调（回调的block会在主线程执行，不用做线程处理）
 *
 *  @param NSInteger 取值（1-100）代表接口进行到（1％－100%)
 */
typedef void(^__nullable TSMProgressBlock)(NSInteger);


@protocol TSMInterface <NSObject>

/**
 *  设置蓝牙代理 设置此代理让控件可以调用蓝牙模块
 *
 *  @param delegate
 */
- (void)setDelegate:(id<UPTBluetoothDelegate> __nullable)delegate;


/**
 扫描蓝牙设备

 @param scanBlock 结果处理回调函数
 */
- (void)scanBleDeviceswithTime:(NSInteger)scanTime progressBlock:(TSMScanDevicesProgressBlock)progressBlock completionBlock:(TSMScanDevicesCompletionBlock)completionBlock;


/**
 连接蓝牙设备

 @param upBLEDevice 需要被连接的蓝牙设备
 @param completionBlock 结果回调函数
 */
- (void)connectBleDevice:(UPBLEDevice *)upBLEDevice completionBlock:(TSMHandlerBlock)completionBlock;

/**
 断开蓝牙设备

 @param upBLEDevice 断开蓝牙设备
 @param completionBlock 结果回调函数
 */
- (void)disconnectBleDevice:(UPBLEDevice *)upBLEDevice completionBlock:(TSMHandlerBlock)completionBlock;

/**
 获取seid信息

 @param completionBlock 结果回调函数，result中返回seid信息
 */
- (void)getSeid:(TSMHandlerBlock)completionBlock;

/**
 当前设备状态是否支持下载绑卡

 @param completionBlock 结果回调函数
 */
- (void)isSupportBindCard:(TSMHandlerBlock)completionBlock;

/**
 *  初始化接口
 *  TSM Service Connect之后，首先需要调用初始化接口，只有初始化成功后才可以继续调用其他接口，初始化接口只需要做一次。如果Service disconnect之后需要重新调初始化接口。初始化回调的succBlock里面会通知初始化结果，如果有升级信息，会包含在回调的NSDictionary*里面。
 *
 *  @param succBlock
 *  @param failBlock
 */
- (void)establishWithSuccBlock:(TSMSuccessBlock)succBlock failBlock:(TSMFailureBlock)failBlock;

/**
 执行apdu指令
 */
- (void)executeCMDWithSsid:(NSString*)ssid
                      sign:(NSString*)sign
                 succBlock:(TSMSuccessBlock)succBlock
                 failBlock:(TSMFailureBlock)failBlock
             progressBlock:(TSMProgressBlock)progressBlock;


/**
 *  获取已申请应用列表接口
 *  此接口也可根据状态获取应用列表，需要在请求参数中指明，若请求参数未设置，默认返回的应用列表是全量的
 *
 *  @param succBlock
 *  @param failBlock
 */
- (void)appListWithSuccBlock:(TSMSuccessBlock)succBlock failBlock:(TSMFailureBlock)failBlock;

/**
 *  设置默认卡接口
 *
 *  @param appAId
 *  @param completionBlock
 */
- (void)setDefaultCardWithAppAId:(NSString *)appAId completionBlock:(TSMHandlerBlock)completionBlock;


/**
 *  获取默认卡
 *
 *  @param completionBlock
 */
- (void)defaultCardWithCompletionBlock:(TSMHandlerBlock)completionBlock;



@end

NS_ASSUME_NONNULL_END
