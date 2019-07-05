//
//  UIView+cornerShadow.h
//  test
//
//  Created by Nedoloroso on 2019/7/5.
//  Copyright © 2019 Nedoloroso. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (cornerShadow)

/**
 为控件增加阴影
 
 注：控件clipsToBounds必须为NO
 
 @param shadowColor 阴影颜色
 @param shadowOpacity 阴影透明度
 @param shadowValue 阴影扩散距离
 */
- (void)addShadow:(UIColor *)shadowColor
    shadowOpacity:(float)shadowOpacity
      shadowValue:(CGFloat)shadowValue;

/**
 为控件增加阴影（带圆角）
 
 注：控件clipsToBounds必须为NO
 
 @param shadowColor 阴影颜色
 @param shadowOpacity 阴影透明度
 @param shadowValue 阴影扩散距离
 */
- (void)addShadow:(UIColor *)shadowColor
    shadowOpacity:(float)shadowOpacity
      shadowValue:(CGFloat)shadowValue
     cornerRadius:(CGFloat)cornerRadius;

@end

NS_ASSUME_NONNULL_END
