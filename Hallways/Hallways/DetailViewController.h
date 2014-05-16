//
//  DetailViewController.h
//  Hallways
//
//  Created by Oscar Newman on 5/16/14.
//  Copyright (c) 2014 Oscar Newman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
