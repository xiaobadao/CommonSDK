//
//  GetAppListResult.h
//  TSMKit
//
//  Created by chenlei on 16/6/12.
//  Copyright © 2016年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPTAppDetail.h"

@class UPTResponseStatus;

@interface UPTGetAppListResult : NSObject

@property (nonatomic, copy) NSArray<UPTAppDetail *> *appList;

@property (nonatomic, readonly ,strong) UPTResponseStatus *status;

- (instancetype)initWithDic:(NSDictionary *)dict status:(UPTResponseStatus *)status;

@end
