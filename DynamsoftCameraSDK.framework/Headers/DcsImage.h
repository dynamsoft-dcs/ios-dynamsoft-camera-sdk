//
//  DcsImage.h
//  DCSTest
//
//  Created by dynamsoft on 05/07/2017.
//  Copyright © 2017 dynamsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DcsImage : NSObject

/**
 since6.0
 Creates a DcsImage object from UIimage.
 @param image:The image data to create the object from.
 */
- (id)init:(UIImage *)image;

/**
 since6.0
 Returns corresponding UIImage.
 */
- (UIImage *)uiImage;

/**
 since6.0
 Returns the width of the object in pixel.
 */
- (NSInteger)width;

/**
 since6.0
 Returns the height of the object in pixel.
 */
- (NSInteger)height;

/**
 since6.0
 Creates a DcsImage object from a file.
 @param filename:Specifies the file name to create the DcsImage from.
 */
- (id)initWithFile:(NSString *)filename;

/**
 since6.0
 Saves the image data of DcsImage to file.
 @param filename:Specifies the file name to save the image data as.
 */
- (void)save:(NSString *)filename;


@end
