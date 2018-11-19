//
//  JHShowConfig.h
//  JHShow
//
//  Created by 狄烨 . on 2018/11/19.
//  Copyright © 2018 狄烨 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <JHButton/JHButton.h>
// .h
#define SingletonH  + (instancetype)shared ;
// .m
#define SingletonM(class) \
static class *_showInstance; \
+ (id)allocWithZone:(struct _NSZone *)zone { \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_showInstance = [super allocWithZone:zone]; \
}); \
return _showInstance; \
} \
+ (instancetype)shared { \
if (nil == _showInstance) { \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_showInstance = [[class alloc] init]; \
}); \
} \
return _showInstance; \
} \
- (id)copyWithZone:(NSZone *)zone{ \
return _showInstance; \
} \
- (id)mutableCopyWithZone:(NSZone *)zone{ \
return _showInstance; \
} \

NS_ASSUME_NONNULL_BEGIN

@interface JHShowConfig : NSObject

SingletonH

///////////loading/////////////
/** 圆角大小 **/
@property (nonatomic,assign) CGFloat loadingCornerRadius;
/** 加载框主体颜色 **/
@property (nonatomic,strong) UIColor *loadingTintColor;
/** 文字字体大小 **/
@property (nonatomic,strong) UIFont  *loadingTextFont;
/** 文字字体颜色 **/
@property (nonatomic,strong) UIColor *loadingTextColor;
/** 背景颜色 **/
@property (nonatomic,strong) UIColor *loadingBgColor;
/** 阴影颜色 **/
@property (nonatomic,strong) UIColor *loadingShadowColor;
/** 图片动画类型 所需要的图片数组 **/
@property (nonatomic,strong) NSArray <UIImage *> *loadingImagesArray;
/** 动画时间 **/
@property (nonatomic,assign) CGFloat loadingAnimationTime;
/** loading图文混排样式 **/
@property (nonatomic,assign) JHImageButtonType loadingType;
////////////toast////////////////
/** Toast默认停留时间 **/
@property (nonatomic,assign) CGFloat toastShowTime;
/** Toast圆角 **/
@property (nonatomic,assign) CGFloat toastCornerRadius;
/** Toast图文间距 **/
@property (nonatomic,assign) CGFloat toastSpace;
/** Toast字体 **/
@property (nonatomic,strong) UIFont *toastTextFont;
/** Toast背景颜色 **/
@property (nonatomic,strong) UIColor *toastBgColor;
/**  Toast文字字体颜色 **/
@property (nonatomic,strong) UIColor *toastTextColor;
/** Toast图文混排样式 **/
@property (nonatomic,assign) JHImageButtonType toastType;
@end

NS_ASSUME_NONNULL_END