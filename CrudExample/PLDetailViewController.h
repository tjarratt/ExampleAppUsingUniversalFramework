//
//  PLDetailViewController.h
//  CrudExample
//
//  Created by Tim Jarratt on 8/18/14.
//  Copyright (c) 2014 General Linear Group. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PLDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
