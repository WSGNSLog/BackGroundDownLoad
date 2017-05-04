//
//  NSURLSession+CorrectedResumeData.h
//  BackGroundDownLoad
//
//  Created by wuxue on 2017/5/4.
//  Copyright © 2017年 wsg. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURLSession (CorrectedResumeData)
- (NSURLSessionDownloadTask *)downloadTaskWithCorrectResumeData:(NSData *)resumeData;

@end
