//
//  cxlMasterViewController.h
//  Mobtest
//
//  Created by rakeshm on 5/23/14.
//  Copyright (c) 2014 rakeshm. All rights reserved.
//

#import <UIKit/UIKit.h>

@class cxlDetailViewController;

@interface cxlMasterViewController : UITableViewController

@property (strong, nonatomic) cxlDetailViewController *detailViewController;

@end
