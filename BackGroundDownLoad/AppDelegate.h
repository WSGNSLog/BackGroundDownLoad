//
//  AppDelegate.h
//  BackGroundDownLoad
//
//  Created by wuxue on 2017/4/26.
//  Copyright © 2017年 wsg. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kDownloadProgressNotification @"downloadProgressNotification"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (void)beginDownloadWithUrl:(NSString *)downloadURLString;
- (void)pauseDownload;
- (void)continueDownload;

@end

