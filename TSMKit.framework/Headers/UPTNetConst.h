//
//  UPTNetConst.h
//  TSMKit
//
//  Created by qcao on 15/7/9.
//  Copyright (c) 2015年 China Unionpay Co.,Ltd. All rights reserved.
//



#define kErrorGetKeyCode                9991  //sys.getKey失败造成的加密消息发送失败
#define kErrorInvalidMsgCode            9990
#define kErrorEmptyData                 9993    //服务器返回空数据

#define kErrorResendMsg                 @"消息发送失败 (GetKey)"
#define kErrorInvalidMsg                @"报文组织内部错误"
#define kErrorNetworkMsg                @"网络不给力"
#define kErrorEmptyDataMsg              @"服务器没有返回数据"



static NSString* const kDeviceModelAdditionalJieDe = @"JIEDE1|BLW|01|05";


static NSString* const kStatus = @"status";
static NSString* const kStatusCode = @"statusCode";
static NSString* const kStatusDescription = @"statusDescription";
static NSString* const kResult = @"result";

/**
 *  0000,指成功且无后继
 */
static NSString* const kStatusSucceedDefault = @"0000";

/**
 *  0099,指成功且有后继(跟apdu没有关系，只是说明后面有交易跟当前这笔交易有关联)
 */
static NSString* const kStatusSucceedWithSth = @"0099";

/**
 *  0090，表示一个apdu任务执行成功
 */

/**
 *  1613,重复验证，用户OTP验证已通过
 */
static NSString* const kRepeatForSMSAuthCode = @"1613";

/**
 *  3613,重复验证，用户OTP验证已通过
 */
static NSString* const kRepeatActive = @"3613";

static NSString* const kStatusSucceedApdu = @"0090";

static NSString* const kHead = @"head";

static NSString* const kBody = @"body";

static NSString* const kDetailError = @"DetailError";

