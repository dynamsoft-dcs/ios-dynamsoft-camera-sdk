//
//  DcsUIImageView.h
//  DCSTest
//
//  Created by dynamsoft on 10/05/2017.
//  Copyright © 2017 dynamsoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "DcsBuffer.h"
#import "DcsView.h"

#pragma mark - delegate
@protocol DcsUIImageGalleryViewDelegate
/**
 * @since 6.0
 * trigger event: single tap 
 *
 * @param sender   ：trigger Object,this means the DcsUIImageGalleryView object
 * @param index    
 */
- (void)onSingleTap: (id)sender index:(NSInteger)index;

- (void)onSelectChanged:(NSArray *)selectedIndices;

- (void)onLongPress: (id)sender index: (NSInteger)index;

@end

@interface DcsUIImageGalleryView : UIView

- (instancetype)initWithFrame:(CGRect)frame withClass:(id)targetClass;

/**
 * @since 6.0
 * 
 * ImageGalleryView visible mode:multiple mode or Single mode 
 */
typedef enum {
    DIVME_MULTIPLE = 0x0001,
    DIVME_SINGLE
}DcsImageGalleryViewModeEnum;

//delegate
@property (nonatomic, weak) id <DcsUIImageGalleryViewDelegate> delegate;

/**
 * @since 6.0
 * set or get the imageGalleryView visible mode
 *
 */
@property(nonatomic,assign) DcsImageGalleryViewModeEnum imageGalleryViewmode;

/**
 * @since 6.0
 * 
 * Enter the manual sort mode in DIVE_MULTIPLE
 */
- (void)enterManualSortMode;

/**
 * @since 6.0
 * 
 * Enter the normal mode in DIVE_MULTIPLE
 * 
 */
- (void)enterNormalMode;

/**
 * @since 6.0
 * 
 * Enter the picture or document selecte mode in DIVE_MULTIPLE
 */
- (void)enterSelectMode;


/**
 * @since 6.0
 * 
 * get or set the selected image or document indices
 * 
 */
@property(nonatomic, strong) NSArray *selectedIndices;

@end
