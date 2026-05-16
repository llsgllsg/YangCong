作者:M0Xsystem 梦想
特别鸣谢:M0Xsystem 零

要求
1.	你有电脑
2.	有脑子
3.	手机充电线（能插上洋葱就行）
4.	能连上网
（洋葱Q20可能无法使用）

（自动部署这段不用看，知道下一个标记符出现再看，标记符1）
首先，你要弄把整个压缩包解压
找到根目录一个叫做platform-tools的文件夹
双击打开
在上方地址栏输入cmd

<img width="445" height="292" alt="image" src="https://github.com/user-attachments/assets/73aad90d-c0a3-4240-b506-cb55762352fd" />


按下回车
会看到下面窗口（先别动）

<img width="450" height="253" alt="image" src="https://github.com/user-attachments/assets/d3d89161-2889-4652-b2a6-e373d213ea91" />

 
（标记符2）
回到洋葱平板这边
让家长给你装个叫做 讯飞语记 的软件
打开
按照下面步骤点击

<img width="277" height="363" alt="image" src="https://github.com/user-attachments/assets/302efe09-3079-4887-ab88-34abef9eae2d" />
<img width="264" height="359" alt="image" src="https://github.com/user-attachments/assets/64f270c0-5843-44c3-81ce-4c3d554cc08b" />
<img width="269" height="360" alt="image" src="https://github.com/user-attachments/assets/3e5a173a-344d-48ba-9e67-092b58cb6888" />
   
点进去后点击助手应用
右上角有个搜索
进去后搜索自

<img width="315" height="428" alt="image" src="https://github.com/user-attachments/assets/1e855fa1-a75d-4dad-997a-13ea4f8ea03c" />


      找到类似的，下面写了开发者模式
点进去后找到USB调试（或者ADB调试或者调试等字眼点开）
然后把数据线插到电脑和平板上
回到刚刚打开的那个黑色CMD窗口
输入 adb devices
如果显示类似的 就表示成功
List of devices attached
XXXXXXXXXX        device

（自动部署直接在这里运行.exe文件就能自动操作了）
（如果无法使用，请尝试手动部署）

常用指令
adb shell am start -n com.yangcong345.cloud.toolbox/com.yangcong345.cloud.lib_debugtool.debug.DebugToolActivity
快速进入洋葱工具箱后门

adb shell pm uninstall --user 0 com.yangcong345.cloud.launcher

卸载葱管家

adb exec-out screencap -p > D:\screen.png

截图发送到电脑D盘

接下来是装软件
首先推荐装个第三方桌面
不然每次都要用adb启动装的软件
有时候洋葱桌面是看不到你装的软件的
如果不想要手动安装
可以使用软件自动安装
可以在微软商店搜索APK安装器
 
找到这个安装
然后把本项目根目录下的adb路径配置进去
就可以直接在电脑上双击APK文件给平板装应用了
本项目根目录附赠常用软件

接下来是装第三方桌面的教程
先双击根目录下附赠的桌面安装包
之前装的APK安装器会自己启动
点击安装弄到平板上
然后使用
adb shell cmd package set-home-activity "amirz.shade/.ShadeLauncher"
如果你用的是其它第三方的桌面
可以让AI帮你找一下包名，替换进去就行了（不会就别搞了，用目录里的）
然后
adb reboot
重启后就替换好了
