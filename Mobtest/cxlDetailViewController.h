//
//  cxlDetailViewController.h
//  Mobtest
//
//  Created by rakeshm on 5/23/14.
//  Copyright (c) 2014 rakeshm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface cxlDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
