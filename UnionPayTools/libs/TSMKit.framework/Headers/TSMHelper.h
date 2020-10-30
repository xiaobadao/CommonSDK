//
//  TSMHelper.h
//  TSMKit
//
//  Created by TangZhixiong on 16/6/6.
//  Copyright © 2016年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSMInterface.h"

typedef NS_ENUM(NSUInteger, TSMEnviromnet) {
    TSMEnviromnetPM,
    TSMEnviromnetDevelop,
    TSMEnviromnetTest,
    TSMEnviromnetRelease,
};

extern NSString *testpHostUrl;

@interface TSMHelper : NSObject

/**
 *  @author TangZhixiong, 16-07-18 15:07:40
 *
 *  在发布版本中此接口无用
 *
 *  @param env 
 */
+ (void)setEnvironment:(TSMEnviromnet)env;

+ (id<TSMInterface>)TSMKit;

@end
