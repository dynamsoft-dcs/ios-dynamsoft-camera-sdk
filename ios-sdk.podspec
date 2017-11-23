#
#  Be sure to run `pod spec lint ios-sdk.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = "ios-sdk"
  s.version      = "0.0.2"
  s.summary      = "dhlaksjhdlaksjhdlajkshdlkajshdjlka"

  s.description  = <<-DESC
You don’t have any verified emails. We recommend verifying at least one email.
Email verification helps our support team verify ownership if you lose account access and allows you to receive all the notifications you ask for.
                   DESC

  s.homepage     = "https://github.com/dynamsoft-dcs/ios-sdk"

  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }

  s.author             = { "Dynamsoft Camera SDK" => "support@dynamsoft.com" }
  # s.authors            = { "Dynamsoft Camera SDK" => "support@dynamsoft.com" }

  s.platform     = :ios

  s.source       = { :git => "https://github.com/dynamsoft-dcs/ios-sdk.git", :tag => "#{s.version}" }

  s.source_files  = "ios-sdk/*.framework"
  #s.exclude_files = "Classes/Exclude"

  # s.public_header_files = "Classes/**/*.h"

  # s.resource  = "icon.png"
  # s.resources = "Resources/*.png"

  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"

  s.frameworks = "UIKit", "Foundation"

  # s.library   = "iconv"
  # s.libraries = "libc++", "sqlite3.0"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.requires_arc = true

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"

end
