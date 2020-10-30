//
//  AppDeleteRequestParams.h
//  TSMKit
//
//  Created by chenlei on 16/6/6.
//  Copyright © 2016年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UPTAppDeleteRequestParams : NSObject

@property (nonatomic,readonly, strong) NSString* mPanID;
@property (nonatomic,readonly, strong) NSString* reason;

- (instancetype)initWithMPanId:(NSString *)mPanId reason:(NSString *)reason;

@end
