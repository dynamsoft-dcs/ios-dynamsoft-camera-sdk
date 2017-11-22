//
//  DcsDocument.h
//  DCSTest
//
//  Created by dynamsoft on 05/07/2017.
//  Copyright © 2017 dynamsoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DcsImage.h"

@interface DcsDocument : DcsImage

/**
 * @since 6.0
 * Creates a DcsDocument object from UIImage
 */
- (id)init:(UIImage *)image;

/**
 * @since 6.0
 * Returns the bondary information of the document.
 *
 */
@property (nonatomic, strong, readonly) NSArray *documentBoundary;

/**
 * @since 6.0
 * Returns the original image of the document.
 *
 */
@property (nonatomic,strong,readonly) UIImage   *originalImage;



@end
