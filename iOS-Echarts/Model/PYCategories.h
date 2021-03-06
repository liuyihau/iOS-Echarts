//
//  PYCategries.h
//  iOS-Echarts
//
//  Created by Pluto Y on 7/22/16.
//  Copyright © 2016 pluto-y. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PYUtilities.h"

@class PYItemStyle;

/**
 *
 *  You can goto this website for references:
 *  http://echarts.baidu.com/echarts2/doc/doc.html#categories
 *
 */
@interface PYCategories : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) PYSymbol symbol;
@property (nonatomic, strong) id symbolSize;
@property (nonatomic, strong) PYItemStyle *itemStyle;

@end
