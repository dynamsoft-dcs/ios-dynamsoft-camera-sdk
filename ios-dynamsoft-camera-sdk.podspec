#
#  Be sure to run `pod spec lint ios-dynamsoft-camera-sdk.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = "ios-dynamsoft-camera-sdk"
  s.version      = "0.0.2"
  s.summary      = "Developers can have complete control over a scanner, e.g., exposure, iris, auto focus, etc."

  s.description  = <<-DESC
                    Dynamsoft Camera SDK provides Objec-C/Swift APIs that enable you to easily capture images and documents from iPhone Video Class (UVC) compatible webcams. It supports document edge detection from a video stream and processing features including perspective correction, noise removal, contrast, brightness, and color filter (convert to a colored/grey document).
                   DESC

  s.homepage     = "https://github.com/dynamsoft-dcs/ios-dynamsoft-camera-sdk"

  s.license= { :type => "MIT", :file => "LICENSE" }

  s.author       = { "Dynamsoft Camera SDK" => "cooper@dynamsoft.com" }

  s.platform     = :ios

  s.source       = { :git => "https://github.com/dynamsoft-dcs/ios-dynamsoft-camera-sdk.git", :tag => "#{s.version}" }

  #s.source_files  = "DynamsoftCameraSDK-Bridging-Header.h",""

  s.vendored_frameworks = 'DynamsoftCameraSDK.framework'

  s.resources = "DynamsoftCameraSDKResource.bundle", ""

  # s.public_header_files = "Classes/**/*.h"

  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"

  s.libraries = "stdc++", "sqlite3.0"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.requires_arc = true

  s.compiler_flags = '-Objc'

  #s.xcconfig = {'OBJECTIVE-C_BRIDGING_HEADER' => 'test.h'}
  #s.xcconfig = { 'OTHER_SWIFT_FLAGS' => 'test.h' }
  #$(SDKROOT)/usr/include/libxml2

end
