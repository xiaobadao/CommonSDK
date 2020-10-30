//
//  UPTResponseStatus.h
//  TSMKit
//
//  Created by chenlei on 16/6/17.
//  Copyright © 2016年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPTNetConst.h"

@interface UPTResponseStatus : NSObject

@property (nonatomic, strong) NSString* statusCode;

@property (nonatomic, strong) NSString* statusDescription;

- (instancetype)initWithDict:(NSDictionary *)dict;

- (BOOL)isSuccess;
- (BOOL)isContinue;
- (BOOL)isTaskSuccess;

@end
