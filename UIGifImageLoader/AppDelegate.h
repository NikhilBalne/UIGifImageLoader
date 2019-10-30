//
//  AppDelegate.h
//  UIGifImageLoader
//
//  Created by iHub on 30/10/19.
//  Copyright © 2019 iHubTechnologiesPvtLtd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

