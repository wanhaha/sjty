//
//  WsqMD5Util.h
//  Created by apple on 13-10-4.
//  Copyright (c) 2013年 All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#define FileHashDefaultChunkSizeForReadingData 1024*8 // 8K

@interface FuMD5Util :NSObject

//计算NSData 的MD5值
+(NSString*)getMD5WithData:(NSData*)data;

//计算字符串的MD5值，
+(NSString*)getmd5WithString:(NSString*)string;

//比较两个md5值
+ (BOOL)compareResourcesMD5:(NSString *)str withSourcesMD5:(NSString *)str2;

//计算大文件的MD5值
+(NSString*)getFileMD5WithPath:(NSString*)path;
@end