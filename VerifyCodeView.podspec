Pod::Spec.new do |s|

  s.name         = "VerifyCodeView"
  s.version      = "0.1.0"
  s.summary      = "A simple View that deal with mobile verify code."

  s.description  = <<-DESC
	手机验证码表单的封装
                   DESC

  s.homepage     = "https://github.com/Qian100/VerifyCodeView"
  s.author            = { "huxiaoqiao" => "huxiaoqiao100@163.com" }
  
  s.platform     = :ios, "5.0"
  s.ios.deployment_target = "5.0"

  s.source       = { :git => "https://github.com/Qian100/VerifyCodeView.git", :tag => s.version.to_s }
  s.source_files  = "VerifyCodeView/*.{h,m,xib}"
 
  s.requires_arc = true


end
