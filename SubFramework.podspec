
Pod::Spec.new do |spec|

    spec.name         = "SubFramework"
    spec.version      = "1.1.3"
    spec.summary      = "SwiftSDK集成方式"
    spec.description  = "Swift版本测试sdk集成方式"
    spec.homepage     = "https://github.com/xiaobadao/SubFramework"
    spec.license      = "MIT"
    spec.author      = { "chenglong" => "v-chenglong@xiaomi.com" }
    spec.platform     = :ios, "10.0"
    spec.ios.deployment_target = '10.0'
    spec.source       = { :git => "https://github.com/xiaobadao/SubFramework.git", :tag => "#{spec.version}" }
    spec.swift_version = "5.0"
    spec.vendored_frameworks = "UnionPayTools/libs/TSMKit.framework"
    spec.requires_arc = true
    spec.frameworks = 'Foundation','libc++'
    spec.static_framework  =  true
end

