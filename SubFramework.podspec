
Pod::Spec.new do |spec|

    spec.name         = "SubFramework"
    spec.version      = "1.1.8"
    spec.summary      = "SwiftSDK集成方式"
    spec.description  = "Swift版本测试sdk集成方式"
    spec.homepage     = "https://github.com/xiaobadao/SubFramework"
    spec.license      = "MIT"
    spec.author      = { "chenglong" => "v-chenglong@xiaomi.com" }
    spec.platform     = :ios, "10.0"
    spec.ios.deployment_target = '10.0'
    spec.source       = { :git => "https://github.com/xiaobadao/SubFramework.git", :tag => "#{spec.version}" }
    spec.swift_version = "5.0"
    spec.pod_target_xcconfig = { 'SWIFT_VERSION' => '5.0' }
    spec.vendored_frameworks = "UnionPayTools/libs/SubFramework.framework","UnionPayTools/libs/TSMKit.framework"
    spec.requires_arc = true
    spec.frameworks = 'Foundation'
    spec.static_framework  =  true
    spec.library = 'c++'
end

