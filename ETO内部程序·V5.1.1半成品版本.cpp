#include <iostream>
#include <windows.h>
#include <string.h>
#include <winuser.h>

// Copyright declaration
void displayCopyright() {
    std::cout << "版权声明：" << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << "程序名称：ETO内部程序" << std::endl;
    std::cout << "版本：V4.1.1" << std::endl;
    std::cout << "版权所有 (c) 2024 RCX. 保留所有权利。" << std::endl;
    std::cout << "版权所有 (c) 2023-2024 RCX. 保留所有权利。" << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << "请注意：未经版权所有者明确书面许可，" << std::endl;
    std::cout << "禁止复制、分发或以任何形式使用本程序。" << std::endl;
    std::cout << "-----------" << std::endl;
}

void showMessageBox(const std::string& message, const std::string& title, UINT type) {
    MessageBox(NULL, message.c_str(), title.c_str(), type);
}

int main() {
    system("title 地球三体组织（ETO）内部程序  版本：V3.1.1");
    system("color F0");
    
    printf("——————————=》》☆》☆》=《?=☆=?》=《☆《☆《《=—————————\n");
    printf("——————————=制止一切分裂，国家利益高于一切---------------------------\n");

    int userResponse = MessageBox(NULL, "请不要尝试输入任何乱码，否则将导致游戏崩溃。", "提示", MB_YESNO);
    if (userResponse != IDYES) {
        return 0;
    }

    int password;
    printf("欢迎进入程序。\n该程序为ETO专用。\n");
    printf("请输入密码：");
    while (true) {
        if (scanf("%d", &password) != 1) {
            printf("输入错误，请输入一个数字作为密码。\n");
            system("cls");
            continue;
        }
        break;
    }

    displayCopyright();
    printf("请选择语言！（目前仅支持中，日，英,俄四国语言）\n");
    printf("请键入：1.(汉语)，2.(日本語)，3.(English)，4.（Россия）四国语言\n");
    printf("请抓紧选择语言！本段文字显示完后，将于3秒后清屏\n");
    Sleep(3000);
    int language;
    scanf("%d", &language);
    Sleep(5000);
    system("cls");

    if (password == 114514) {
        switch (language) {
            case 1:
                showMessageBox("接收到来自于主的任务", "恒星级功率发送界面信息读取窗口", MB_YESNO | MB_ICONQUESTION);
                // 其他消息框...
                break;
            // 其他语言分支...
            default:
                showMessageBox("未知语言选项", "错误", MB_OK | MB_ICONERROR);
                break;
        }
    } else {
        showMessageBox("密码错误!", "错误", MB_OK | MB_ICONERROR);
        int reenter = MessageBox(NULL, "1.重新输入密码\n2.结束程序", "密码错误", MB_YESNO);
        if (reenter == IDYES) {
            system("cls");
            return 0;
        } else {
            exit(0);
        }
    }

    return 0;
}
