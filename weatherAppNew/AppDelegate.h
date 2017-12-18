//
//  AppDelegate.h
//  weatherAppNew
//
//  Created by sunil28 on 12/17/17.
//  Copyright © 2017 sunil28. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end
