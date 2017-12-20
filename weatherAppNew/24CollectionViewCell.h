//
//  24CollectionViewCell.h
//  weatherAppNew
//
//  Created by sunil28 on 12/19/17.
//  Copyright © 2017 sunil28. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface _4CollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UIImageView *iconImage;
@property (weak, nonatomic) IBOutlet UILabel *temperatureLabel;

@property (nonatomic, strong) NSDictionary *dateAndTimeDIctionary;

@end
