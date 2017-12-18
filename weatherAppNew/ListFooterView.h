//
//  WeatherBottomViewCell1.h
//  weatherAppNew
//
//  Created by sunil28 on 12/17/17.
//  Copyright © 2017 sunil28. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WeatherBottomViewCell1Delegate <NSObject>

@required

-(void)plusClicked:(id)sender;
-(void)currentLocationClicked:(id)sender;

@end

@interface ListFooterView : UITableViewCell

- (IBAction)plusClicked:(id)sender;
@property id<WeatherBottomViewCell1Delegate> delegate;
- (IBAction)currentLocationClicked:(id)sender;

@end

