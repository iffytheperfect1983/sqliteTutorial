//
//  ViewController.h
//  sqliteTutorial
//
//  Created by iffytheperfect on 10/2/12.
//  Copyright (c) 2012 iffytheperfect. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "sqlite3.h"
#import "Person.h"

@interface ViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITextField *nameField;
@property (weak, nonatomic) IBOutlet UITextField *ageField;
@property (weak, nonatomic) IBOutlet UITableView *myTableView;

- (IBAction)addPersonButton:(id)sender;
- (IBAction)displayPersonButton:(id)sender;
- (IBAction)deletePersonButton:(id)sender;

@end
