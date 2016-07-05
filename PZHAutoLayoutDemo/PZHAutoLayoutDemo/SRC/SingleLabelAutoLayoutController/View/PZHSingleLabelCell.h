//
//  PZHSingleLabelCell.h
//  PZHAutoLayoutDemo
//
//  Created by nuomi on 16/7/5.
//  Copyright © 2016年 nuomi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PZHBaseTableViewCell.h"
@interface PZHSingleLabelCell : PZHBaseTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@end
@interface UITableView(PZHSingleLabelCell)
- (PZHSingleLabelCell*)PZHSingleLabelCell;
@end