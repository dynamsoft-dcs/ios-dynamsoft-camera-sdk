<h1>Document scanning API for iOS</h1>
<h3>Enables automatic border detection, trimming and perspective correction in your iOS APP.</h3>

## About

Dynamsoft Camera SDK iOS Edition is a programming API for document imaging. It delivers a set of features to address app developer needs for mobile image processing. The SDK provides a built-in ability to capture a document from an iPhone. It then also provides:
-  Document boundary detection
- Intelligent crop
- Trapezoid distortion correction
- Image enhancement for the quality of captured documents.
Your app users will be able to capture scanner-quality images using their iPhones. For instance, users can capture contracts, ID cards, presentations, receipts, passports, driving licenses, or any other documents.

## Sample Code

The code of a simple app is provided in two languages.
- Swift sample ><br/>
https://download.dynamsoft.com/Samples/dcs/(Swift)CaptureImage.zip
https://download.dynamsoft.com/Samples/dcs/(Swift)ScanDocument.zip
- Objective-C sample ><br/>
https://download.dynamsoft.com/Samples/dcs/(OC)CaptureImage.zip
https://download.dynamsoft.com/Samples/dcs/(OC)ScanDocument.zip
## Installation

Use Cocoapods and add to your Podfile:
> platform:ios<br/>
xcodeproj 'xxx.xcodeproj'<br/>
target 'xxx' do<br/>
    pod 'ios-dynamsoft-camera-sdk', :git=>'https://github.com/dynamsoft-dcs/ios-dynamsoft-camera-sdk.git'<br/>
end<br/>

Then, run the following command:

> pod install<br/>

## Release Note
### version 2.0

#### IMPROVED

Improved Document Detection<br/>
Greatly improved document edge detection accuracy.<br/>
Optimized Performance<br/>
Introduced a new data accessing and computing strategy to optimize the performance. You can now switch and view bulk images more smoothly.<br/>
Added Umbrella Header File<br/>
Added an umbrella header file - 'DynamsoftCameraSDK.h'. You can now import a single header file to use our iOS SDK instead of importing multiple header files.<br/>

#### CHANGED
Added a parameter for the delegate onPostCapture to get the DcsDocument or DcsImage object.<br/>

#### FIXED
Fixed a bug where the image becomes completely white or black when you adjust the brightness or contrast of it.<br/>
Fixed a bug with zooming in/out under the single page mode.<br/>
Fixed a bug where using loadDataAsync() rotates the image by 90 degrees.<br/>
Other small fixes and tweaks.<br/>

## Dependency:
Dynamsoft.com

## Useful Links

### Product overview:
https://www.dynamsoft.com/Products/mobile-imaging-sdk.aspx
### API reference:
http://developer.dynamsoft.com/dws/ios-api
### Developer’s Guide:
https://developer.dynamsoft.com/dws/ios/Description

## License

The SDK offers 30-day free trial.
