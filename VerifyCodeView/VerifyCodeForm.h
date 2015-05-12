//
//  VerifyCodeForm.h
//  demo
//
//  Created by zhaoxiao on 15/2/12.
//  Copyright (c) 2015年 zhaoxiao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VerifyCodeForm : UIView

@property (nonatomic,copy) NSString *verifyCodeKey;
@property (nonatomic,copy,getter=getCode) NSString *code;
@property (nonatomic,assign) NSInteger maxLength;

@property (nonatomic,copy) void (^clickHandle)();

-(void)countDown;

@end
