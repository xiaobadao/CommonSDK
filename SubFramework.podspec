
Pod::Spec.new do |spec|

    spec.name         = "UMFramework"
    spec.version      = "1.0.0"
    spec.summary      = "Swift版本测试sdk集成方式"
    spec.description  = "Swift版本测试sdk集成方式"
    spec.homepage     = "https://github.com/xiaobadao/CommonSDK"
    spec.license      = "MIT"
    #spec.author             = { "程龙" => "v-chenglong@xiaomi.com" }
    spec.author    = "程龙"
    spec.platform     = :ios, "10.0"
    spec.source       = { :git => "https://github.com/xiaobadao/CommonSDK.git", :tag => "#{spec.version}" }
    spec.swift_version = "5.0"
    spec.vendored_frameworks = "SubFramework.framework"
    spec.requires_arc = true
end
