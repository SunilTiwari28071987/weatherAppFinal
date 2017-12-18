//
//  WeatherBottomViewCell1.m
//  weatherAppNew
//
//  Created by sunil28 on 12/17/17.
//  Copyright © 2017 sunil28. All rights reserved.
//

#import "ListFooterView.h"

@implementation ListFooterView

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];
    
    // Configure the view for the selected state
}


- (IBAction)plusClicked:(id)sender {
    [self.delegate plusClicked:sender];
}


- (IBAction)currentLocationClicked:(id)sender {
    [self.delegate currentLocationClicked:sender];
    
}

@end
