//
//  ViewController.h
//  Euler
//
//  Created by Joseph Fabisevich on 1/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMPopTipView.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CMPopTipViewDelegate>
{
	SEL problemList [50];
	IBOutlet UITableView *tableView;
	NSString *answer, *explanation, *question;
}

@property (nonatomic, retain) id currentPopTipViewTarget;
@property (nonatomic, retain) NSMutableArray *visiblePopTipViews;

-(void) dismissAllPopTipViews;
-(void) loadProblems;

@end