//
//  ResultsViewController.h
//  Euler
//
//  Created by Joseph Fabisevich on 1/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ResultsViewController : UIViewController

@property (strong) IBOutlet UILabel *answer;
@property (strong) IBOutlet UITextView *explanation, *question;

@end
