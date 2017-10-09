Luat_Iot_SDK_C语言开发环境，用于air202模块进行C语言二次开发，丰富的api接口。更多内容查阅doc目录



V1.1修改记录
-----------------------
1. 增加timer，fs，flash，gpio，alarm，uart，audio 接口对应demo
2. 增加udp收发demo
3. 修改RAM空间为1MB
4. 增加iot_debug_set_fault_mode接口，用来设置软件异常情况下，是否进入调试模式
5. 增加iot_audio_rec_start/stop录音接口
6. 解决tcp/udp连续发送导致的死机问题
7. 更新《Luat_IOT_SDK_C语言下载调试手册》《Luat_IoT_SDK_C语言编程手册》


V1.2修改记录
-----------------------
1. 修改udp连续发送死机问题
2. 修改select对端关闭后，没有返回的问题
3. 解决服务器关闭时，依然能链接成功的问题
4. 合入RDA8955_W17.27.5_IDH
5. 增加FTP应用
6. 增加OTA（远程升级APP）demo
7. 更新《Luat_IOT_SDK_C语言下载调试手册》《Luat_IoT_SDK_C语言编程手册》


V1.3修改记录
-----------------------
1. 基础版本升级
2. 解决录音不连续的问题
3. 增加demo_minisystem项目
4. 增加默认./demo_minisystem_B4245.lod文件，用来测试验证
5. 更新《Luat_IoT_SDK_C语言环境安装步骤》《Luat_IoT_SDK_C语言编程手册》

V1.3.1修改记录
-----------------------
1. 增加虚拟AT接口iot_vat_init、iot_vat_sendATcmd以及相关例子

V1.3.2修改记录
-----------------------
1. 修改recv接口返回53的问题
2. 修改串口接收丢数据的问题

