//
//  GKPhoto.h
//  GKPhotoBrowser
//
//  Created by QuintGao on 2017/10/20.
//  Copyright © 2017年 QuintGao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "GKPhotoBrowserConfigure.h"

NS_ASSUME_NONNULL_BEGIN

@interface GKPhoto : NSObject

/** 图片地址 */
@property (nonatomic, strong) NSURL *url;

/** 来源imageView */
@property (nonatomic, strong) UIImageView *sourceImageView;

/** 来源frame */
@property (nonatomic, assign) CGRect sourceFrame;

/** 图片 */
@property (nonatomic, strong) UIImage *image; // 完整的图片

/** 占位图 */
@property (nonatomic, strong) UIImage *placeholderImage;

/** 图片是否加载完成 */
@property (nonatomic, assign) BOOL finished;

@end

NS_ASSUME_NONNULL_END
