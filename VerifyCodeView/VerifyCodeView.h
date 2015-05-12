//
//  VerifyCodeView.h
//  demo
//
//  Created by zhaoxiao on 15/2/12.
//  Copyright (c) 2015年 zhaoxiao. All rights reserved.
//

#import "BaseModuleView.h"

@interface VerifyCodeView : BaseModuleView

@property (nonatomic,copy) NSString *verifyCodeKey;
@property (nonatomic,assign) NSInteger maxLength;

@property (nonatomic,copy) void (^clickHandle)();

-(NSString *)inputVerifyCode;
-(void)countDown;

@end
