//
//  UPTInfoCompareResponse.h
//  TSMKit
//
//  Created by chenlei on 16/6/14.
//  Copyright © 2016年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPTApduTaskListItem.h"
#import "UPTNetConst.h"

@interface UPTInfoCompareResponse : NSObject

@property (nonatomic, readonly) NSArray* apduTasks;

@property (nonatomic, readonly) NSString* seId;

- (instancetype)initWithDict:(NSDictionary*)dict;

@end
