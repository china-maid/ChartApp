//
//  DetailViewController.h
//  ChartApp
//
//  Created by Solomon Li on 9/22/14.
//  Copyright (c) 2014 Maid in China. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

