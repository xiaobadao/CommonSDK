
Pod::Spec.new do |spec|

    spec.name         = "SubFramework"
    spec.version      = "1.1.1"
    spec.summary      = "SwiftSDK集成方式"
    spec.description  = "Swift版本测试sdk集成方式"
    spec.homepage     = "https://github.com/xiaobadao/SubFramework"
    spec.license      = "MIT"
    #spec.author             = { "chenglong" => "v-chenglong@xiaomi.com" }
    spec.author    = "chenglong"
    spec.platform     = :ios, "10.0"
    spec.source       = { :git => "https://github.com/xiaobadao/SubFramework.git", :tag => "#{spec.version}" }
    spec.swift_version = "5.0"
    spec.vendored_frameworks = "SubFramework.framework"
    spec.requires_arc = true
    spec.frameworks = 'Foundation'
    spec.module_name = 'SubFramework'
end

