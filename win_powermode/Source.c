#include <stdlib.h>
#include <stdio.h>

#include <Windows.h>
#include <powersetting.h>
#include <powrprof.h>
#include <initguid.h>

//cmd
// powercfg /q

/*
C:\WINDOWS\system32 > powercfg / q
电源方案 GUID : 381b4222 - f694 - 41f0 - 9685 - ff5bb260df2e(平衡)
GUID 别名 : SCHEME_BALANCED
子组 GUID : 0012ee47 - 9041 - 4b5d - 9b77 - 535fba8b1442(硬盘)
GUID 别名 : SUB_DISK
电源设置 GUID : 6738e2c4 - e8a5 - 4a42 - b16a - e040e769756e(在此时间后关闭硬盘)
GUID 别名 : DISKIDLE
最小可能的设置 : 0x00000000
最大可能的设置 : 0xffffffff
可能的设置增量 : 0x00000001
可能的设置单位 : 秒
当前交流电源设置索引 : 0x000004b0
当前直流电源设置索引 : 0x00000258

子组 GUID : 02f815b5 - a5cf - 4c84 - bf20 - 649d1f75d3d8(Internet Explorer)
电源设置 GUID : 4c793e7d - a264 - 42e1 - 87d3 - 7a0d2f523ccd(JavaScript 计时器频率)
可能的设置索引 : 000
可能的设置友好名称 : 最大电源节省量
可能的设置索引 : 001
可能的设置友好名称 : 最高性能
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000000

子组 GUID : 0d7dbae2 - 4294 - 402a - ba8e - 26777e8488cd(桌面背景设置)
电源设置 GUID : 309dce9b - bef4 - 4119 - 9921 - a851fb12f0f4(放映幻灯片)
可能的设置索引 : 000
可能的设置友好名称 : 可用
可能的设置索引 : 001
可能的设置友好名称 : 暂停
当前交流电源设置索引 : 0x00000000
当前直流电源设置索引 : 0x00000001

子组 GUID : 19cbb8fa - 5279 - 450e-9fac - 8a3d5fedd0c1(无线适配器设置)
电源设置 GUID : 12bbebe6 - 58d6 - 4636 - 95bb - 3217ef867c1a(节能模式)
可能的设置索引 : 000
可能的设置友好名称 : 最高性能
可能的设置索引 : 001
可能的设置友好名称 : 低节能
可能的设置索引 : 002
可能的设置友好名称 : 中等节能
可能的设置索引 : 003
可能的设置友好名称 : 最高节能
当前交流电源设置索引 : 0x00000000
当前直流电源设置索引 : 0x00000002

子组 GUID : 238c9fa8 - 0aad - 41ed - 83f4 - 97be242c8f20(睡眠)
GUID 别名 : SUB_SLEEP
电源设置 GUID : 29f6c1db - 86da - 48c5 - 9fdb - f2b67b1f44da(在此时间后睡眠)
GUID 别名 : STANDBYIDLE
最小可能的设置 : 0x00000000
最大可能的设置 : 0xffffffff
可能的设置增量 : 0x00000001
可能的设置单位 : 秒
当前交流电源设置索引 : 0x00000000
当前直流电源设置索引 : 0x00000384

电源设置 GUID : 94ac6d29 - 73ce - 41a6 - 809f - 6363ba21b47e(允许混合睡眠)
GUID 别名 : HYBRIDSLEEP
可能的设置索引 : 000
可能的设置友好名称 : 关闭
可能的设置索引 : 001
可能的设置友好名称 : 启用
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000001

电源设置 GUID : 9d7815a6 - 7ee4 - 497e-8888 - 515a05f02364(在此时间后休眠)
GUID 别名 : HIBERNATEIDLE
最小可能的设置 : 0x00000000
最大可能的设置 : 0xffffffff
可能的设置增量 : 0x00000001
可能的设置单位 : 秒
当前交流电源设置索引 : 0x00000000
当前直流电源设置索引 : 0x00000000

电源设置 GUID : bd3b718a - 0680 - 4d9d - 8ab2 - e1d2b4ac806d(允许使用唤醒定时器)
GUID 别名 : RTCWAKE
可能的设置索引 : 000
可能的设置友好名称 : 禁用
可能的设置索引 : 001
可能的设置友好名称 : 启用
可能的设置索引 : 002
可能的设置友好名称 : 仅限重要的唤醒计算器
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000001

子组 GUID : 2a737441 - 1930 - 4402 - 8d77 - b2bebba308a3(USB 设置)
电源设置 GUID : 48e6b7a6 - 50f5 - 4782 - a5d4 - 53bb8f07e226(USB 选择性暂停设置)
可能的设置索引 : 000
可能的设置友好名称 : 已禁用
可能的设置索引 : 001
可能的设置友好名称 : 已启用
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000001

子组 GUID : 44f3beca - a7c0 - 460e-9df2 - bb8b99e0cba6(Intel(R) Graphics Settings)
电源设置 GUID : 3619c3f2 - afb2 - 4afc - b0e9 - e7fef372de36(Intel(R) Graphics Power Plan)
可能的设置索引 : 000
可能的设置友好名称 : Maximum Battery Life
可能的设置索引 : 001
可能的设置友好名称 : Balanced
可能的设置索引 : 002
可能的设置友好名称 : Maximum Performance
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000001

子组 GUID : 4f971e89 - eebd - 4455 - a8de - 9e59040e7347(电源按钮和盖子)
GUID 别名 : SUB_BUTTONS
电源设置 GUID : a7066653 - 8d6c - 40a8 - 910e - a1f54b84c7e5(「开始」菜单电源按钮)
GUID 别名 : UIBUTTON_ACTION
可能的设置索引 : 000
可能的设置友好名称 : 睡眠
可能的设置索引 : 001
可能的设置友好名称 : 休眠
可能的设置索引 : 002
可能的设置友好名称 : 关机
当前交流电源设置索引 : 0x00000000
当前直流电源设置索引 : 0x00000000

子组 GUID : 501a4d13 - 42af - 4429 - 9fd1 - a8218c268e20(PCI Express)
GUID 别名 : SUB_PCIEXPRESS
电源设置 GUID : ee12f906 - d277 - 404b - b6da - e5fa1a576df5(链接状态电源管理)
GUID 别名 : ASPM
可能的设置索引 : 000
可能的设置友好名称 : 关闭
可能的设置索引 : 001
可能的设置友好名称 : 中等电源节省量
可能的设置索引 : 002
可能的设置友好名称 : 最大电源节省量
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000002

子组 GUID : 54533251 - 82be - 4824 - 96c1 - 47b60b740d00(处理器电源管理)
GUID 别名 : SUB_PROCESSOR
电源设置 GUID : 893dee8e - 2bef - 41e0 - 89c6 - b55d0929964c(最小处理器状态)
GUID 别名 : PROCTHROTTLEMIN
最小可能的设置 : 0x00000000
最大可能的设置 : 0x00000064
可能的设置增量 : 0x00000001
可能的设置单位 : %
当前交流电源设置索引 : 0x00000005
当前直流电源设置索引 : 0x00000005

电源设置 GUID : 94d3a615 - a899 - 4ac5 - ae2b - e4d8f634367f(系统散热方式)
GUID 别名 : SYSCOOLPOL
可能的设置索引 : 000
可能的设置友好名称 : 被动
可能的设置索引 : 001
可能的设置友好名称 : 主动
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000000

电源设置 GUID : a1841308 - 3541 - 4fab - bc81 - f71556f20b4a
GUID 别名 : SCHEME_MAX
当前交流电源设置索引 : 未知
当前直流电源设置索引 : 未知

电源设置 GUID : bc5038f7 - 23e0 - 4960 - 96da - 33abaf5935ec(最大处理器状态)
GUID 别名 : PROCTHROTTLEMAX
最小可能的设置 : 0x00000000
最大可能的设置 : 0x00000064
可能的设置增量 : 0x00000001
可能的设置单位 : %
当前交流电源设置索引 : 0x00000064
当前直流电源设置索引 : 0x00000064

子组 GUID : 7516b95f - f776 - 4464 - 8c53 - 06167f40cc99(显示)
GUID 别名 : SUB_VIDEO
电源设置 GUID : 3c0bc021 - c8a8 - 4e07 - a973 - 6b14cbcb2b7e(在此时间后关闭显示)
GUID 别名 : VIDEOIDLE
最小可能的设置 : 0x00000000
最大可能的设置 : 0xffffffff
可能的设置增量 : 0x00000001
可能的设置单位 : 秒
当前交流电源设置索引 : 0x00000000
当前直流电源设置索引 : 0x00000000

电源设置 GUID : aded5e82 - b909 - 4619 - 9949 - f5d71dac0bcb(显示器亮度)
最小可能的设置 : 0x00000000
最大可能的设置 : 0x00000064
可能的设置增量 : 0x00000001
可能的设置单位 : %
当前交流电源设置索引 : 0x00000064
当前直流电源设置索引 : 0x00000028

电源设置 GUID : f1fbfde2 - a960 - 4165 - 9f88 - 50667911ce96(显示器亮度变暗)
最小可能的设置 : 0x00000000
最大可能的设置 : 0x00000064
可能的设置增量 : 0x00000001
可能的设置单位 : %
当前交流电源设置索引 : 0x00000032
当前直流电源设置索引 : 0x00000032

电源设置 GUID : fbd9aa66 - 9553 - 4097 - ba44 - ed6e9d65eab8(启用自适应亮度)
GUID 别名 : ADAPTBRIGHT
可能的设置索引 : 000
可能的设置友好名称 : 关闭
可能的设置索引 : 001
可能的设置友好名称 : 启用
当前交流电源设置索引 : 0x00000000
当前直流电源设置索引 : 0x00000000

子组 GUID : 9596fb26 - 9850 - 41fd - ac3e - f7c3c00afd4b(“多媒体”设置)
电源设置 GUID : 03680956 - 93bc - 4294 - bba6 - 4e0f09bb717f(共享媒体时)
可能的设置索引: 000
可能的设置友好名称 : 允许计算机睡眠
可能的设置索引 : 001
可能的设置友好名称 : 阻止计算机在一段时间不活动后进入睡眠状态
可能的设置索引 : 002
可能的设置友好名称 : 允许计算机进入离开模式
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000000

电源设置 GUID : 10778347 - 1370 - 4ee0 - 8bbd - 33bdacaade49(视频播放质量补偿)
可能的设置索引 : 000
可能的设置友好名称 : 视频播放节能偏向
可能的设置索引 : 001
可能的设置友好名称 : 视频播放性能补偿
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000000

电源设置 GUID : 34c7b99f - 9a6d - 4b3c - 8dc7 - b6693b78cef4(播放视频时)
可能的设置索引 : 000
可能的设置友好名称 : 优化视频质量
可能的设置索引 : 001
可能的设置友好名称 : 平衡
可能的设置索引 : 002
可能的设置友好名称 : 优化节能
当前交流电源设置索引 : 0x00000000
当前直流电源设置索引 : 0x00000001

子组 GUID : e73a048d - bf27 - 4f12 - 9731 - 8b2076e8891f(电池)
GUID 别名 : SUB_BATTERY
电源设置 GUID : 5dbb7c9f - 38e9 - 40d2 - 9749 - 4f8a0e9f640f(低电池电量通知)
GUID 别名 : BATFLAGSCRIT
可能的设置索引 : 000
可能的设置友好名称 : 关闭
可能的设置索引 : 001
可能的设置友好名称 : 启用
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000001

电源设置 GUID : 637ea02f - bbcb - 4015 - 8e2c - a1c7b9c0b546(关键级别电池操作)
GUID 别名 : BATACTIONCRIT
可能的设置索引 : 000
可能的设置友好名称 : 不采取任何操作
可能的设置索引 : 001
可能的设置友好名称 : 睡眠
可能的设置索引 : 002
可能的设置友好名称 : 休眠
可能的设置索引 : 003
可能的设置友好名称 : 关机
当前交流电源设置索引 : 0x00000002
当前直流电源设置索引 : 0x00000002

电源设置 GUID : 8183ba9a - e910 - 48da - 8769 - 14ae6dc1170a(电池电量水平低)
GUID 别名 : BATLEVELLOW
最小可能的设置 : 0x00000000
最大可能的设置 : 0x00000064
可能的设置增量 : 0x00000001
可能的设置单位 : %
当前交流电源设置索引 : 0x0000000a
当前直流电源设置索引 : 0x0000000a

电源设置 GUID : 9a66d8d7 - 4ff7 - 4ef9 - b5a2 - 5a326ca2a469(关键电池电量水平)
GUID 别名 : BATLEVELCRIT
最小可能的设置 : 0x00000000
最大可能的设置 : 0x00000064
可能的设置增量 : 0x00000001
可能的设置单位 : %
当前交流电源设置索引 : 0x00000005
当前直流电源设置索引 : 0x00000005

电源设置 GUID : bcded951 - 187b - 4d05 - bccc - f7e51960c258(低电量通知)
GUID 别名 : BATFLAGSLOW
可能的设置索引 : 000
可能的设置友好名称 : 关闭
可能的设置索引 : 001
可能的设置友好名称 : 启用
当前交流电源设置索引 : 0x00000001
当前直流电源设置索引 : 0x00000001

电源设置 GUID : d8742dcb - 3e6a - 4b3c - b3fe - 374623cdcf06(低电量操作)
GUID 别名 : BATACTIONLOW
可能的设置索引 : 000
可能的设置友好名称 : 不采取任何操作
可能的设置索引 : 001
可能的设置友好名称 : 睡眠
可能的设置索引 : 002
可能的设置友好名称 : 休眠
可能的设置索引 : 003
可能的设置友好名称 : 关机
当前交流电源设置索引 : 0x00000000
当前直流电源设置索引 : 0x00000000

电源设置 GUID : f3c5027d - cd16 - 4930 - aa6b - 90db844a8f00(保留电池电量)
最小可能的设置 : 0x00000000
最大可能的设置 : 0x00000064
可能的设置增量 : 0x00000001
可能的设置单位 : %
当前交流电源设置索引 : 0x00000007
当前直流电源设置索引 : 0x00000007

*/

DEFINE_GUID(BALANCEMODE, 0x381B4222, 0xF694, 0x41F0, 0x96, 0x85, 0xFF, 0x5B, 0xB2, 0x60, 0xDF, 0x2E);
DEFINE_GUID(HIGHPERFORMANCEMODE, 0x8C5E7FDA, 0xE8BF, 0x4A96, 0x9A, 0x85, 0xA6, 0xE2, 0x3A, 0x8C, 0x63, 0x5C);
DEFINE_GUID(POWERSAVEMODE, 0xA1841308, 0x3541, 0x4FAB, 0xBC, 0x81, 0xF7, 0x15, 0x56, 0xF2, 0x0B, 0x4A);

DEFINE_GUID(SUBPROCESSOR, 0x54533251, 0x82be, 0x4824, 0x96, 0xc1, 0x47, 0xb6, 0x0b, 0x74, 0x0d, 0x00);
DEFINE_GUID(PROCTHROTTLEMIN, 0x893dee8e, 0x2bef, 0x41e0, 0x89, 0xc6, 0xb5, 0x5d, 0x09, 0x29, 0x96, 0x4c);
DEFINE_GUID(PROCTHROTTLEMAX, 0xbc5038f7, 0x23e0, 0x4960, 0x96, 0xda, 0x33, 0xab, 0xaf, 0x59, 0x35, 0xec);

DEFINE_GUID(SUBSLEEP, 0x238c9fa8, 0x0aad, 0x41ed, 0x83, 0xf4, 0x97, 0xbe, 0x24, 0x2c, 0x8f, 0x20);
DEFINE_GUID(STANDBYIDLE, 0x29f6c1db, 0x86da, 0x48c5, 0x9f, 0xdb, 0xf2, 0xb6, 0x7b, 0x1f, 0x44, 0xda);

DEFINE_GUID(SUBVIDEO, 0x7516b95f, 0xf776, 0x4464, 0x8c, 0x53, 0x06, 0x16, 0x7f, 0x40, 0xcc, 0x99);
DEFINE_GUID(VIDEOIDLE, 0x3c0bc021, 0xc8a8, 0x4e07, 0xa9, 0x73, 0x6b, 0x14, 0xcb, 0xcb, 0x2b, 0x7e);


#pragma comment(lib, "PowrProf.lib")
int main(int argc, char** argv)
{
    // set powersave mode
    PowerWriteACValueIndex(NULL, (GUID*)&POWERSAVEMODE, &SUBPROCESSOR, &PROCTHROTTLEMIN, 40);
    PowerWriteDCValueIndex(NULL, (GUID*)&POWERSAVEMODE, &SUBPROCESSOR, &PROCTHROTTLEMIN, 40);

    PowerWriteACValueIndex(NULL, (GUID*)&POWERSAVEMODE, &SUBPROCESSOR, &PROCTHROTTLEMAX, 40);
    PowerWriteDCValueIndex(NULL, (GUID*)&POWERSAVEMODE, &SUBPROCESSOR, &PROCTHROTTLEMAX, 40);

    PowerWriteACValueIndex(NULL, (GUID*)&POWERSAVEMODE, &SUBSLEEP, &STANDBYIDLE, 0);
    PowerWriteDCValueIndex(NULL, (GUID*)&POWERSAVEMODE, &SUBSLEEP, &STANDBYIDLE, 0);

    PowerWriteACValueIndex(NULL, (GUID*)&POWERSAVEMODE, &SUBVIDEO, &VIDEOIDLE, 0);
    PowerWriteDCValueIndex(NULL, (GUID*)&POWERSAVEMODE, &SUBVIDEO, &VIDEOIDLE, 0);
    PowerSetActiveScheme(NULL, (GUID*)&POWERSAVEMODE);

	return 0;
}