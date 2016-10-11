//
//  MKMapView+SZZoomLevel.h
//  SZComprehensiveExercise
//
//  Created by drision on 16/6/28.
//  Copyright © 2016年 drision. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface MKMapView (SZZoomLevel)

/*
 * 给官方地图设置缩放等级
 * zoomLevel  地图等级 1-19
 */
- (void)setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate
                  zoomLevel:(NSUInteger)zoomLevel
                   animated:(BOOL)animated;

@end
