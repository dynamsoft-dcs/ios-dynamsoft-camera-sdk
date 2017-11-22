//
//  DcsUIImageEditorView.h
//  DCSTest
//
//  Created by dynamsoft on 05/05/2017.
//  Copyright © 2017 dynamsoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DcsView.h"
#import "DcsException.h"

#pragma mark --- delegate

@protocol DcsUIImageEditorViewDelegate

//22
- (void)onCancelTapped:(id)sender;

//23
- (void)onOkTapped:(id)sender exception:(DcsException *)exception;


@end

@interface DcsUIImageEditorView : UIView

- (instancetype)initWithFrame:(CGRect)frame withClass:(id)targetClass;

//delegate
@property (nonatomic, weak) id <DcsUIImageEditorViewDelegate> delegate;

/**
 * @since 6.0
 * Gets or set the view to navigate to when cancel tool item is tapped. The default value
 * is DEV_IMAGEGALLERYVIEW
 */
@property (nonatomic, assign) DcsViewEnum nextViewAfterCancel;

/**
 * @since 6.0
 * Gets or set the view to navigate to when ok tool item is tapped. The default value
 * is DEV_IMAGEGALLERYVIEW
 */
@property (nonatomic, assign) DcsViewEnum nextViewAfterOK;

/**
 * @since 6.0
 * Gets or set whether to show the RotateLeft tool item.The default value is "YES".
 */
@property(nonatomic,assign) BOOL showRotateLeftToolItem;

/**
 * @since 6.0
 * Gets or set whether to show the Rotate right tool item.The default value is "YES".
 */
@property(nonatomic,assign) BOOL showRotateRightToolItem;

/**
 * @since 6.0
 * Gets or set whether to show the flip tool item.The default value is "YES".
 */
@property(nonatomic,assign) BOOL showFlipToolItem;

/**
 * @since 6.0
 * Gets or set whether to show the mirror tool item.The default value is "YES".
 */
@property(nonatomic,assign) BOOL showMirrorToolItem;

/**
 * @since 6.0
 * Gets or set whether to show the brightness tool item.The default value is "YES".
 */
@property(nonatomic,assign) BOOL showBrightnessToolItem;

/**
 * @since 6.0
 * Gets or set whether to show the contrast tool item.The default value is "YES".
 */
@property(nonatomic,assign) BOOL showContrastToolItem;

/**
 * @since 6.0
 * Gets or set whether to show the crop tool item.The default value is "YES".
 */
@property(nonatomic,assign) BOOL showCropToolItem;

/**
 * @since 6.0
 * Gets or set the icon showed on rotate tool item.
 */
@property (nonatomic, strong) UIImage *rotateIcon;

/**
 * @since 6.0
 * Gets or set the icon showed on RotateLeft tool item.
 */
@property (nonatomic, strong) UIImage *rotateLeftIcon;

/**
 * @since 6.0
 * Gets or set the icon showed on RotateRight tool item.
 */
@property (nonatomic, strong) UIImage *rotateRightIcon;

/**
 * @since 6.0
 * Gets or set the icon showed on flip tool item.
 */
@property (nonatomic, strong) UIImage *flipIcon;

/**
 * @since 6.0
 * Gets or set the icon showed on mirror tool item.
 */
@property (nonatomic, strong) UIImage *mirrorIcon;

/**
 * @since 6.0
 * Gets or set the icon showed on crop tool item.
 */
@property (nonatomic, strong) UIImage *cropIcon;

/**
 * @since 6.0
 * Gets or set the icon showed on the Brightness and contrast tool item.
 */
@property (nonatomic, strong) UIImage *brightnessContrastIcon;

/**
 * @since 6.0 
 * Gets or set the text showed on the Brightness tool item.The default value is "Brightness".
 */
@property (nonatomic, strong) NSString *brightnessText;


/**
 * @since 6.0 
 * Gets or set the text showed on the contrast tool item.The default value is "Contrast".
 */
@property (nonatomic, strong) NSString *contrastText;

/**
 * @since 6.0 
 * Gets or set the text showed on the cancel tool item.The default value is "Cancel".
 */
@property (nonatomic, strong) NSString *cancelText;

/**
 * @since 6.0 
 * Gets or set the text showed on the OK tool item.The default value is "OK".
 */
@property (nonatomic, strong) NSString *okText;

/**
 * @since 6.0 
 * Gets or set the icon showed on the cancel tool item.
 */
@property (nonatomic, strong) UIImage *cropCancelIcon;

/**
 * @since 6.0 
 * Gets or set the icon showed on the OK tool item.
 */
@property (nonatomic, strong) UIImage *cropOKIcon;

/**
 * @since 6.0 
 * Adjusts the contrast of the image.
 */
- (void)adjustContrast:(NSInteger)contrast;

/**
 * @since 6.0 
 * Adjusts the brightness of the image.
 */
- (void)adjustBrightness:(NSInteger)brightness;

/**
 * @since 6.0 
 * Rotates the image in the editor by 90 degrees counter-clockwise.
 */
- (void)rotateLeft;

/**
 * @since 6.0 
 * Rotates the image in the editor by 90 degrees clockwise.
 */
- (void)rotateRight;

/**
 * @since 6.0 
 * Flips the image in the editor vertically.
 */
- (void)flip;

/**
 * @since 6.0 
 * Mirrors the image in the editor.
 */
- (void)mirror;

/**
 * @since 6.0 
 * Cuts an area of the image. 
 */
- (void)cut:(NSInteger)x1 top:(NSInteger)y1 right:(NSInteger)x2 bottom:(NSInteger)y2;

/**
 * @since 6.0 
 * Crops an Image of the image. 
 */
- (void)crop:(NSInteger)x1 top:(NSInteger)y1 right:(NSInteger)x2 bottom:(NSInteger)y2;

/**
 * @since 6.0 
 * Save the changes to the image. 
 */
- (void)save;

/**
 * @since 6.0 
 * Discards the changes of the image. 
 */
- (void)discard;





@end
