//
//  UIView+cornerShadow.m
//  test
//
//  Created by Nedoloroso on 2019/7/5.
//  Copyright © 2019 Nedoloroso. All rights reserved.
//

#import "UIView+cornerShadow.h"

@implementation UIView (cornerShadow)

- (void)addShadow:(UIColor *)shadowColor
    shadowOpacity:(float)shadowOpacity
      shadowValue:(CGFloat)shadowValue
{
    self.layer.shadowColor = shadowColor.CGColor;
    self.layer.shadowOpacity = shadowOpacity;
    self.layer.shadowRadius = shadowValue;
    self.layer.shouldRasterize = YES;
    self.layer.shadowOffset = CGSizeMake(0, 0);
    self.layer.rasterizationScale = [UIScreen mainScreen].scale;
}

- (void)addShadow:(UIColor *)shadowColor
    shadowOpacity:(float)shadowOpacity
      shadowValue:(CGFloat)shadowValue
     cornerRadius:(CGFloat)cornerRadius
{
    self.layer.cornerRadius = cornerRadius;
    [self addShadow:shadowColor shadowOpacity:shadowOpacity shadowValue:shadowValue];
}

@end
