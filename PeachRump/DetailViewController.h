//
//  DetailViewController.h
//  PeachRump
//
//  Created by harris.huang on 2017/6/22.
//  Copyright © 2017年 com. PeachRump. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

