//
//  BNRAppDelegate.h
//  iTahDoodle
//
//  Created by Anthony Dagati on 10/3/14.
//  Copyright (c) 2014 Black Rail Capital. All rights reserved.
//

#import <UIKit/UIKit.h>

//Declare a helper function that you will use to get a path to the location on disk where
//you can save the to-do-list
NSString *BNRDocPath(void);

@interface BNRAppDelegate : UIResponder <UIApplicationDelegate, UITableViewDataSource>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) UITableView *taskTable;
@property (nonatomic, strong) UITextField *taskField;
@property (nonatomic, strong) UIButton *insertButton;

@property (nonatomic, strong) NSMutableArray *tasks;

-(void)addTask:(id)sender;


@end
