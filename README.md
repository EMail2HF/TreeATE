# TreeATE
TreeATE是Tree Automatic Test Equipment的缩写，专注服务于工厂成品或半成品测试自动化的一种开源软件工具平台。

功能特性
-------------------------------------------------------------------------------
* 为工厂提供统一且简单易用的用户操作界面，减免每个产品测试都有不同的程序操作界面的学习成本；
* 采用多进程技术，支持成品或半成品并行测试，测试运行时更加稳定；
* 支持测试工程整体循环测试；
* 支持测试失败则停止测试；
* 支持扫码加载测试工程；
* 支持扫码开始测试；
* 支持无服务器和网络自动切换为本地工作模式，测试结果本地留存；
* 支持测试结果本地查看和管理；
* 提供界面插件扩展接口；
* 支持二次自定义开发：
  * 支持QtScript（JavaScript，基于ECMA标准脚本语言）快速开发自动化测试用例；
  * 提供设备控制组件化支持；
  * 提供辅助二次开发时所需的人机交互公共组件；
  * 提供TreeATE系统与MES系统的扩展接口和组件样例；


编译
-------------------------------------------------------------------------------
在编译TreeATE之前，你需要安装QT（>=5.7版本）和以下开发工具：
* qt-opensource-windows-x86-msvc2013-5.7.0
* QScintilla_gpl-2.10.3