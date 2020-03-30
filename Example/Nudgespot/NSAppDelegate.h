//
//  NSAppDelegate.h
//  Nudgespot
//
//  Created by Maheep Kaushal on 04/07/2016.
//  Copyright (c) 2016 Maheep Kaushal. All rights reserved.
//

@import UIKit;
#import <UserNotifications/UserNotifications.h>

@interface NSAppDelegate : UIResponder <UIApplicationDelegate, UNUserNotificationCenterDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
