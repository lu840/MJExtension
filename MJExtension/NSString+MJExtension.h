//
//  NSString+MJExtension.h
//  MJExtensionExample
//
//  Created by MJ Lee on 15/6/7.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"

@interface NSString (MJExtension)
/**
 *  驼峰转下划线（loveYou -> love_you）
 */
- (NSString *)mj_underlineFromCamel;

- (NSString *)mj_camelFromUnderline;

- (NSString *)mj_firstCharUpper;

- (NSString *)mj_firstCharLower;

- (BOOL)mj_isPureInt;

- (NSURL *)mj_url;
@end

@interface NSString (MJExtensionDeprecated_v_2_5_16)
- (NSString *)underlineFromCamel MJExtensionDeprecated("请在方法名前面加上mj_前缀，使用mj_***");
- (NSString *)camelFromUnderline MJExtensionDeprecated("请在方法名前面加上mj_前缀，使用mj_***");
- (NSString *)firstCharUpper MJExtensionDeprecated("请在方法名前面加上mj_前缀，使用mj_***");
- (NSString *)firstCharLower MJExtensionDeprecated("请在方法名前面加上mj_前缀，使用mj_***");
- (BOOL)isPureInt MJExtensionDeprecated("请在方法名前面加上mj_前缀，使用mj_***");
- (NSURL *)url MJExtensionDeprecated("请在方法名前面加上mj_前缀，使用mj_***");
@end
