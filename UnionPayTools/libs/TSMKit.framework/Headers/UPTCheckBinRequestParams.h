//
//  CheckBinRequestParams.h
//  TSMKit
//
//  Created by chenlei on 16/6/6.
//  Copyright © 2016年 TangZhixiong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UPTCheckBinRequestParams : NSObject

@property (nonatomic, readonly, strong) NSString *sPan;

- (instancetype)initWithSPan:(NSString *)span;

@end
