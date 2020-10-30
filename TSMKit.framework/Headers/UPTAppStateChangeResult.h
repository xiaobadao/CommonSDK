//
//  UPTAppDownloadResult.h
//  TSMKit
//
//  Created by chenlei on 16/6/20.
//  Copyright © 2016年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPTNetConst.h"
#import "UPTResponseStatus.h"
#import "UPTApduTaskListItem.h"

@interface UPTAppStateChangeResult : NSObject

@property (nonatomic, readonly) NSArray* apduTasks;

@property (nonatomic, readonly) UPTResponseStatus* status;

- (instancetype)initWithDict:(NSDictionary *)dict status:(UPTResponseStatus *)status;



@end
