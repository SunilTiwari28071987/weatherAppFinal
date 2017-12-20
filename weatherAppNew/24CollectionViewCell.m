//
//  24CollectionViewCell.m
//  weatherAppNew
//
//  Created by sunil28 on 12/19/17.
//  Copyright © 2017 sunil28. All rights reserved.
//

#import "24CollectionViewCell.h"

@implementation _4CollectionViewCell

-(void)setDateAndTimeDIctionary:(NSDictionary *)dateAndTimeDIctionary
{
    _dateAndTimeDIctionary = dateAndTimeDIctionary;
    
    self.timeLabel.text = @"4:00";
    self.iconImage.image = [UIImage imageNamed:@"test"];
    self.temperatureLabel.text = @"18";
}

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

@end
