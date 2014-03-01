//
//  MainViewController.h
//  Join me
//
//  Created by Hong Sheng-Yen on 2014/3/2.
//  Copyright (c) 2014年 hikohong. All rights reserved.
//

#import "FlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
