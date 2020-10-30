//
//  UPTResponse.h
//  TSMKit
//
//  Created by TangZhixiong on 16/7/19.
//  Copyright © 2016年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPTAppStateChangeResult.h"
#import "UPTGetAppListResult.h"

@interface UPTResponse : NSObject

@end

/**
 *  @author TangZhixiong, 16-07-19 18:07:13
 *
 *  初始化
 */
@interface UPTEstablishResponse : UPTResponse

@end


/**
 *  @author TangZhixiong, 16-07-19 18:07:05
 *
 *  下载
 */
@interface UPTAppDownloadResponse : UPTResponse

@property (nonatomic, strong) UPTAppStateChangeResult* appDownloadResult;

@end



/**
 *  @author TangZhixiong, 16-07-19 18:07:35
 *
 *  卡片删除
 */
@interface UPTAppDeleteResponse : UPTResponse

@property (nonatomic, strong) UPTAppStateChangeResult* appDeleteResult;

@end

/**
 *  @author TangZhixiong, 16-07-19 18:07:39
 *
 *  获取卡列表
 */
@interface UPTAppListResponse : UPTResponse

@property (nonatomic, strong) UPTGetAppListResult* appListResult;

@end


