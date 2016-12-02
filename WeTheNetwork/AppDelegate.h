//
//  AppDelegate.h
//  WeTheNetwork
//
//  Created by Maxwell Effron on 12/1/16.
//  Copyright © 2016 Maxwell Effron. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

