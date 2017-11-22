//
//  DcsUIDocumentEditorView.h
//  DCSTest
//
//  Created by dynamsoft on 05/05/2017.
//  Copyright © 2017 dynamsoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DcsBuffer.h"
#import "DcsView.h"
#import "DcsException.h"

@protocol DcsUIDocumentEditorViewDelegate

- (void)onCancelTapped:(id)sender;

- (void)onOkTapped:(id)sender exception:(DcsException *)exception;

@end

@interface DcsUIDocumentEditorView : UIView

- (instancetype)initWithFrame:(CGRect)frame withClass:(id)targetClass;

//delegate
@property (nonatomic, weak) id <DcsUIDocumentEditorViewDelegate> delegate;
//add by anson

/**
  @since 6.0
  Gets or sets the view to navigate to when cancel tool item is tapped. The default value
  is DEV_IMAGEGALLERYVIEW
 */
@property (nonatomic, assign) DcsViewEnum nextViewAfterCancel;

/**
  @since 6.0
  Gets or sets the view to navigate to when ok tool item is tapped. The default value
  is DEV_IMAGEGALLERYVIEW
 */
@property (nonatomic, assign) DcsViewEnum nextViewAfterOK;


/**
  @since 6.0
  Gets or sets teh document border color.The default is #5eb7e4
 */
@property(nonatomic, strong) UIColor *documentBoundaryColor;

/**
  @since 6.0
  Gets or sets the document border thickness. The default is 6px.
 */
@property(nonatomic, assign) NSInteger documentBoundaryThickness;

/**
  @since 6.0
  Gets or sets the text showed on Brightness tool item on the document editor viewer. The default value is “Brightness”.
 */
@property(nonatomic,strong) NSString * brightnessText;

/**
 @since 6.0
 Gets or sets the text showed on Contrast tool item on the document editor viewer. The default value is “Contrast”.
 */
@property(nonatomic,strong) NSString * contrastText;

/**
 @since 6.0
 Gets or sets the text showed on ColorMode tool item on the document editor viewer. The default value is “Color”.
 */
@property(nonatomic,strong) NSString * colorText;

/**
 @since 6.0
 Gets or sets the text showed on GreyMode tool item on the document editor viewer. The default value is “Grey”.
 */
@property(nonatomic,strong) NSString * greyText;

/**
  @since 6.0
  Gets or set the text showed on B/W Mode tool item on the document editor viewer. The default value is “B/W”.
 */
@property(nonatomic,strong) NSString * blackWhiteText;

/**
  @since 6.0
  Gets or set the text showed on Cancel tool item on the document editor viewer. The default value is “Cancel”.
 */
@property(nonatomic,strong) NSString * cancelText;

/**
  @since 6.0
  Gets or set the text showed on OK tool item on the document editor viewer. The default value is “OK”.
 */
@property(nonatomic,strong) NSString * okText;

/**
  @since 6.0
  Returns or set whether to show the RotateLeft tool item.
 */
@property(nonatomic,assign) BOOL showRotateLeftToolItem;

/**
  @since 6.0
  Returns or set whether to show the RotateRight tool item.
 */
@property(nonatomic,assign) BOOL showRotateRightToolItem;

/**
  @since 6.0
  Returns or set whether to show the Brightness tool item.
 */
@property(nonatomic,assign) BOOL showBrightnessToolItem;

/**
  @since 6.0
  Returns or set whether to show the Contrast tool item.
 */
@property(nonatomic,assign) BOOL showContrastToolItem;

/**
  @since 6.0
  Returns or set whether to show the ImageMode tool item.
 */
@property(nonatomic,assign) BOOL showImageModeToolItem;

/**
  @since 6.0
  Returns or set the icon showed on RotateLeft tool item on the document editor viewer.
 */
@property(nonatomic, strong)  UIImage *rotateLeftIcon;

/**
  @since 6.0
  Returns or set the icon showed on RotateRight tool item on the document editor viewer.
 */
@property(nonatomic, strong)  UIImage *rotateRightIcon;

/**
  @since 6.0
  Returns or set the icon showed on BrightnessContrast tool item on the document editor viewer.
 */
@property(nonatomic, strong)  UIImage *brightnessContrastIcon;

/**
  @since 6.0
  Returns or set the icon showed on ImageMode tool item on the document editor viewer.
 */
@property(nonatomic, strong)  UIImage *imageModeIcon;

/**
  @since 6.0
  Returns or set the icon showed on ColorMode tool item on the document editor viewer.
 */
@property(nonatomic, strong)  UIImage *colorModeIcon;

/**
  @since 6.0
  Returns or set the icon showed on GreyMode tool item on the document editor viewer.
 */
@property(nonatomic, strong)  UIImage *greyModeIcon;

/**
  @since 6.0
  Returns or set the icon showed on B/W Mode tool item on the document editor viewer.
 */
@property(nonatomic, strong)  UIImage *blackWhiteIcon;

/**
  @since 6.0
  adjust contrast
 */
- (void)adjustContrast:(NSInteger)contrast;

/**
  @since 6.0
  adjust brightness
 */

- (void)adjustBrightness:(NSInteger)brightness;

/**
  @since 6.0
  rotate left 90 degree
 */

- (void)rotateLeft;

/**
  @since 6.0
  rotate right 90 degree
 */
- (void)rotateRight;

/**
  @since 6.0
  to color
 */
- (void)toColor;

/**
  @since 6.0
  to grey
 */
- (void)toGrey;

/**
  @since 6.0
  to black white
 */
- (void)toBlackWhite;

/**
  @since 6.0
  save
 */
- (void)save;

/**
  @since 6.0
  discard
 */
- (void)discard;

@end
