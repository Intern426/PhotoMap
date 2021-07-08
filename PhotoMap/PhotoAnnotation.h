//
//  PhotoAnnotation.h
//  PhotoMap
//
//  Created by Kalkidan Tamirat on 7/8/21.
//  Copyright © 2021 Codepath. All rights reserved.
//

#import <Foundation/Foundation.h>
@import MapKit;

NS_ASSUME_NONNULL_BEGIN

@interface PhotoAnnotation : NSObject <MKAnnotation>
@property (strong, nonatomic) UIImage *photo;

@end

NS_ASSUME_NONNULL_END
