//
//  ViewController.h
//  World Traveler
//
//  Created by OSX on 9/7/15.
//  Copyright (c) 2015 LebonTech Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ListViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)refreshButtonPressed:(id)sender;

@end

