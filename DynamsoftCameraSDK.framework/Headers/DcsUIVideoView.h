//
//  DcsUIVideoView.h
//  DCSTest
//
//  Created by dynamsoft on 04/05/2017.
//  Copyright © 2017 dynamsoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "DcsException.h"
#import "DcsView.h"
#import "DcsImage.h"
#import "DcsDocument.h"

#pragma mark -- Delegate

@protocol DcsUIVideoViewDelegate


/**
 * @since 6.0
 * This event is fired when a document is detected
 *
 * @param sender   The current DcsUIVideoView object that triggers the event
 * @param document The detected document.
 */
- (void)onDocumentDetected:(id)sender document:(DcsDocument *)document;

/**
 * @since 6.0
 * The event is fired when the cancel tool item is clicked
 *
 * @param sender The current DcsUIVideoView object that triggers the event
 */
- (void)onCancelTapped:(id)sender;

/**
 * @since 6.0
 * The event is fired when the capture tool item is clicked
 *
 * @param sender The current DcsUIVideoView object that triggers the event
 */
- (void)onCaptureTapped:(id)sender;

/**
 * @since 6.0
 * This event is fired before an image or a document is captured.
 *
 * @param sender The current DcsUIVideoView object that triggers the event
 */

- (BOOL)onPreCapture:(id)sender;
/**
 * @since 6.0
 * This event is fired after an image or a document is captured. At thie time, the image/document is already in the DcsBuffer
 *
 * @param sender The current DcsUIVideoView object that triggers the event
 */
- (void)onPostCapture:(id)sender;

/**
 * @since 6.0
 * This event is fired when it fails to capture an image or a document.
 *
 * @param sender The current DcsUIVideoView object that triggers the event
 */
- (void)onCaptureFailure:(id)sender exception:(DcsException*)exception;
@end

@interface DcsUIVideoView : UIView

- (instancetype)initWithFrame:(CGRect)frame withClass:(id)targetClass;

#pragma mark -- API

typedef enum{
    DME_IMAGE = 0x0001,
    DME_DOCUMENT ,
}DcsModeEnum;


typedef enum{
    DCPE_BACK = 0x0010,
    DCPE_FRONT ,
}DcsCameraPositionEnum;


typedef enum {
    DFME_ON = 0x0100,
    DFME_OFF ,
    DFME_AUTO ,
    DFME_TORCH 
}DcsFlashModeEnum;

//delegate
@property (nonatomic, weak) id <DcsUIVideoViewDelegate> delegate;


/**
 * @since 6.0
 * Gets or sets the view to navigate to when cancel tool item is tapped.The default value
 * is DEV_IMAGEGALLERYVIEW 
 */
@property (nonatomic, assign) DcsViewEnum nextViewAfterCancel;

/**
 * @since 6.0
 * Gets or sets the view to navigate to when capture tool item is tapped.The default value
 * is DEV_VIDEOVIEW 
 */
@property (nonatomic, assign) DcsViewEnum nextViewAfterCapture;

/**
 * @since 6.0
 * video mode
 */
@property (nonatomic, assign) DcsModeEnum mode;

/**
 * @since 6.0
 * position
 */
@property (nonatomic, assign) DcsCameraPositionEnum cameraPosition;

/**
 * @since 6.0
 * Flash Mode
 */
@property(nonatomic,assign) DcsFlashModeEnum flashMode;


/**
 * @since 6.0
 * 获取或设置文档边框颜色。默认#5eb7e4
 */
@property (nonatomic,strong) UIColor *documentBoundaryColor;

/**
 * @since 6.0
 * 获取或设置文档边框粗细。默认6px
 */
@property (nonatomic,assign) NSInteger documentBoundaryThickness;
/**
 * @since 6.0
 * Gets or sets the playing sound file whe capture image or document
 */
@property (nonatomic, assign) NSString *capturingSoundFile;



/**
 * @since 6.0
 * 获取或设置capture image or document是否有声音
 * YES,表示capture image or document有声音；NO表示capture image or document没有声音
 */
@property (nonatomic,assign) BOOL capturingSoundEnable;

/**
 * @since 6.0
 * 获取或设置是否显示flash tool item
 */
@property (nonatomic, assign) BOOL showFlashToolItem;

/**
 * @since 6.0
 * 获取或设置是否显示capture tool item
 */
@property (nonatomic,assign) BOOL showCaptureToolItem;

/**
 * @since 6.0
 * 获取或设置是否显示cancel tool item
 */
@property (nonatomic,assign) BOOL showCancelToolItem;

/**
 * @since 6.0
 * cancel button text
 */
@property (nonatomic,strong) NSString *cancelText;
/**
 * @since 6.0
 * flash string when flash is in on state.
 */
@property (nonatomic,strong) NSString *flashOnText;

/**
 * @since 6.0
 * flash string when flash is in off state.
 */
@property (nonatomic,strong) NSString *flashOffText;

/**
 * @since 6.0
 * flash string when flash is in auto state.
 */
@property (nonatomic,strong) NSString *flashAutoText;

/**
 * @since 6.0
 * flash string when flash is in torch state.
 */
@property (nonatomic,strong) NSString *flashTorchText;

/**
 * @since 6.0
 * Returns or set the icon showed on flash tool item on the DcsUIVideoView when flash is in on state.
 */
@property (nonatomic, strong)  UIImage *flashOnIcon;

/**
 * @since 6.0
 * Returns or set the icon showed on flash tool item on the DcsUIVideoView when flash is in off state.
 */
@property (nonatomic, strong)  UIImage *flashOffIcon;

/**
 * @since 6.0
 * Returns or set the icon showed on flash tool item on the DcsUIVideoView when flash is in auto state.
 */
@property (nonatomic, strong)  UIImage *flashAutoIcon;

/**
 * @since 6.0
 * Returns or set the icon showed on flash tool item on the DcsUIVideoView when flash is in torch state.
 */
@property (nonatomic, strong)  UIImage *flashTorchIcon;


/**
 * @since 6.0
 * Returns or set the icon showed on capture tool item on the DcsUIVideoView.
 */
@property (nonatomic, strong)  UIImage *captureIcon;

/**
 * @since 6.0
 * Opens the video
 *
 */
- (void)preview;

/**
 * @since 6.0
 * Stops the video
 *
 */
- (void)stopPreview;

/**
 * @since 6.0
 * captures an image
 *
 */
- (void)captureImage;

/**
 * @since 6.0
 * Captures a document
 *
 */
- (void)captureDocument;


/**
 * @since 6.0
 * Gets or sets whether to disable document capture function when no document is detected.The default value is NO.
 */
@property (nonatomic, assign) BOOL ifAllowDocumentCaptureWhenNotDetected;




@end
