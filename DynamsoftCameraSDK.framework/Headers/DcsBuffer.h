//
//  DcsBuffer.h
//  DCSTest
//
//  Created by dynamsoft on 02/05/2017.
//  Copyright © 2017 dynamsoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DcsImage.h"
#import "DcsDocument.h"

@interface DcsBuffer : NSObject

#pragma mark - APIs

/**since6.0
 *
 * return or set the index of current operated data in DcsBuffer
 */
@property(nonatomic,assign)NSInteger currentIndex;

/**
  @since6.0
  Appends images to DcsBuffer
  @param image:The image to be added into the buffer
  @return void
 */
- (void)appendImage:(DcsImage *)image;

/**
  @since6.0
  Appends documents to DcsBuffer
  @param document: The document to be added into the buffer
  @return void
 */
- (void)appendDocument:(DcsDocument *)document;

/**
  @since 6.0
  Gets the image or document with the specified index in  the buffer
  @param index:Specifices the index of an image or a document.The index is 0-based.
 */
- (id)get:( NSInteger )index;

/**
  @since 6.0
  Replaces the data at specified index of buffer with the specified DcsImage.
  @param image:The image to be added to the buffer
  @param index:The specified index of the image to be replaced
  @return void
 */
- (void)replaceWithImage:(DcsImage *)image index:(NSInteger)index;

/**
  @since 6.0
  Replaces the data at specified index of buffer with the specified DcsDocument.
  @param document:The document to be added to the buffer
  @param index:The specified index of the document to be replaced
  @return void
 */
- (void)replaceWithDocument:(DcsDocument *)document index:(NSInteger)index;


/**
  @since 6.0
  Switched the places for two images or documents
  @param firstIndex:The index of the first object to be switched
  @param secondIndex:The index of the seconed object to be switched
  @return void
 */
- (void)swap:(NSInteger)firstIndex second:(NSInteger)secondIndex;

/**
  @since 6.0
  Delete the image or document with the specified index.
  @param index:The index of the image to be deleted.
  @return void
 */
- (void)delete:( NSInteger)index;

/**
  @since 6.0
  Saves all the images and documents in DcsBuffer to a folder named dirName.
  @param dirName:The name of the folder to save files
  @return void
 */
- (void)save:(NSString *)dirName;

/**
  @since 6.0
  Loads all the images and documents in the dirName folder to DcsBuffer
  @param dirName:The name of the folder to load files from.
  @return void
 */
- (void)load:(NSString *)dirName;

/*
 @since 6.0
  Returns the total number of images and documents in DcsBuffer.
  @param
  @return NSInteger.The total number.
 */
- (NSInteger)count;

/**
  @since 6.0
  Inserts an image into DcsBuffer at the index
  @param image:The image data to be inserted
  @param index:The index to insert the image
  @return void
 */
- (void)insertImage:(DcsImage *)image index:(NSInteger)index;

/**
  @since 6.0
  Inserts a document into DcsBuffer at the index
  @param document:The image data to be inserted
  @param index:The index to insert the image
  @return void
 */
- (void)insertDocument:(DcsDocument *)document index:(NSInteger)index;

/*
 * init
 */
- (instancetype)initWithClass:(id)targetClass;



@end
