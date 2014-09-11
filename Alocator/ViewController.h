//
//  ViewController.h
//  Alocator
//
//  Created by Zach Shallbetter on 8/23/14.
//  Copyright (c) 2014 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
    @property (weak, nonatomic) UITextField *beerPercentTextField;
    @property (weak, nonatomic) UILabel *resultLabel;
    @property (weak, nonatomic) UISlider *beerCountSlider;

- (void)buttonPressed:(UIButton *)sender;
@end

