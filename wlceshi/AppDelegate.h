//
//  AppDelegate.h
//  wlceshi
//
//  Created by 赵一 on 2017/3/30.
//  Copyright © 2017年 赵一. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

