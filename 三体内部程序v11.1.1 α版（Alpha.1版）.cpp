#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <windows.h>
#include <vector>
#include <unordered_map>
#include <limits>
#include <cstdlib>

using namespace std;

// 常量定义
const string LOG_FILE_BASE = "ETO_internal_log";
const int PASSWORD_CORRECT = 114514;
const int ADMIN_PASSWORD = 54188;
const int MAX_ATTEMPTS = 3;

// 枚举语言选项
enum class Language {
    Chinese = 1,
    Japanese,
    English,
    Russian,
    German
};

// 用户数据库
unordered_map<string, string> userDatabase;

// 日志类
class Logger {
private:
    ofstream logFile;
    string logFileName;

public:
    Logger(const string& baseFileName) {
        time_t now = time(nullptr);
        char dateBuffer[64];
        strftime(dateBuffer, sizeof(dateBuffer), "_%Y-%m-%d.log", localtime(&now));
        stringstream ss;
        ss << baseFileName << dateBuffer;
        logFileName = ss.str();
        logFile.open(logFileName, ios::out | ios::app); // 使用追加模式
        if (!logFile.is_open()) {
            cerr << "无法打开日志文件: " << logFileName << endl;
        }
    }

    ~Logger() {
        if (logFile.is_open()) {
            logFile.close();
        }
    }

    void log(const string& message, const string& level = "INFO") {
        if (logFile.is_open()) {
            time_t now = time(nullptr);
            char timestamp[64];
            strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", localtime(&now));
            logFile << "[" << level << "] " << timestamp << " - " << message << endl;
        }
    }
};

// 版权声明函数
void displayCopyright(Logger& logger) {
    cout << "版权声明：" << endl;
    cout << "-----------" << endl;
    cout << "程序名称：ETO内部程序" << endl;
    cout << "版本：V8.1.1" << endl;
    cout << "版权所有 (c) 2024 RCX. 保留所有权利。" << endl;
    cout << "-----------" << endl;
    cout << "请注意：未经版权所有者明确书面许可，" << endl;
    cout << "禁止复制、分发或以任何形式使用本程序。" << endl;
    cout << "-----------" << endl;
    logger.log("版权声明已显示");
}

// 三体背景故事
void displayTrisolarianBackground(Logger& logger) {
    cout << "\n《三体》背景故事：" << endl;
    cout << "在文化大革命期间，天文学家叶文洁在红岸基地向宇宙发出信号，" << endl;
    cout << "被三体文明接收。三体文明位于四光年外的三体星系，" << endl;
    cout << "因三颗恒星的无规则运动导致文明多次毁灭与重生。" << endl;
    cout << "地球三体组织（ETO）希望三体文明入侵地球，" << endl;
    cout << "以重建人类社会。人类的命运悬于一线……" << endl;
    logger.log("三体背景故事已显示");
    Sleep(5000); // 显示5秒后继续
}

// 智子控制系统
void sophonControlSystem(Logger& logger) {
    cout << "\n智子控制系统：" << endl;
    cout << "1. 启用智子监控地球" << endl;
    cout << "2. 禁用智子监控" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "智子监控已启用，地球的行动已被监控。" << endl;
        logger.log("用户启用了智子监控");
    } else {
        cout << "智子监控已禁用，地球暂时安全。" << endl;
        logger.log("用户禁用了智子监控");
    }
}

// 二向箔发射控制系统
void dimentionReductionSystem(Logger& logger) {
    cout << "\n二向箔发射控制系统：" << endl;
    cout << "1. 对目标进行降维打击" << endl;
    cout << "2. 保留目标" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "目标已被降维打击，化为二维能量态。" << endl;
        logger.log("用户对目标进行了降维打击");
    } else {
        cout << "目标保留，未进行降维打击。" << endl;
        logger.log("用户保留了目标");
    }
}

// 可控核聚变控制系统
void nuclearFusionControlSystem(Logger& logger) {
    cout << "\n可控核聚变控制系统：" << endl;
    cout << "1. 启动核聚变反应" << endl;
    cout << "2. 关闭核聚变反应" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "核聚变反应已启动，能源供应稳定。" << endl;
        logger.log("用户启动了核聚变反应");
    } else {
        cout << "核聚变反应已关闭，能源供应中断。" << endl;
        logger.log("用户关闭了核聚变反应");
    }
}

// 水滴攻击模拟
void dropletControlSystem(Logger& logger) {
    cout << "\n水滴攻击模拟：" << endl;
    cout << "1. 发动水滴攻击" << endl;
    cout << "2. 保留水滴" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "水滴以每秒30公里的速度撞击目标，目标被摧毁！" << endl;
        logger.log("用户发动了水滴攻击");
    } else {
        cout << "水滴保留，未发动攻击。" << endl;
        logger.log("用户保留了水滴");
    }
}

// 量子计算机模拟
void quantumComputerSimulation(Logger& logger) {
    cout << "\n量子计算机模拟：" << endl;
    cout << "1. 运行复杂计算任务" << endl;
    cout << "2. 保持空闲" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "量子计算机正在运行复杂计算任务……" << endl;
        Sleep(3000);
        cout << "计算完成，结果已输出。" << endl;
        logger.log("用户运行了量子计算机任务");
    } else {
        cout << "量子计算机保持空闲。" << endl;
        logger.log("用户保持量子计算机空闲");
    }
}

// 思想钢印控制端
void thoughtStampControl(Logger& logger) {
    cout << "\n思想钢印控制端：" << endl;
    cout << "1. 对目标进行思想改造" << endl;
    cout << "2. 保留目标原思想" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "目标的思想已被成功改造。" << endl;
        logger.log("用户对目标进行了思想改造");
    } else {
        cout << "目标的思想保持不变。" << endl;
        logger.log("用户保留了目标原思想");
    }
}

// 用户注册
void registerUser(Logger& logger) {
    string username, password;
    cout << "请输入用户名：";
    cin >> username;
    cout << "请输入密码：";
    cin >> password;

    if (userDatabase.find(username) != userDatabase.end()) {
        logger.log("注册失败：用户名已存在");
        cout << "该用户名已存在！" << endl;
    } else {
        userDatabase[username] = password;
        logger.log("新用户注册成功：" + username);
        cout << "注册成功！" << endl;
    }
}

// 用户登录
bool loginUser(Logger& logger) {
    string username, password;
    cout << "请输入用户名：";
    cin >> username;
    cout << "请输入密码：";
    cin >> password;

    if (userDatabase.find(username) != userDatabase.end() && userDatabase[username] == password) {
        logger.log("用户登录成功：" + username);
        cout << "登录成功！欢迎，" << username << "！" << endl;
        return true;
    } else {
        logger.log("登录失败：用户名或密码错误");
        cout << "用户名或密码错误！" << endl;
        return false;
    }
}

// 显示欢迎界面
void displayWelcomeScreen(Logger& logger) {
    system("cls");
    cout << "****************************************************\n";
    cout << "*                                                   *\n";
    cout << "*              地球三体组织（ETO）内部程序               *\n";
    cout << "*                                                   *\n";
    cout << "*              版本：V8.1.1                         *\n";
    cout << "*                                                   *\n";
    cout << "****************************************************\n";
    logger.log("欢迎界面已显示");
    Sleep(2000);
}

// 高级功能菜单（仅限登录用户）
void advancedMenu(Logger& logger) {
    int choice;
    while (true) {
        cout << "\n高级功能菜单：\n";
        cout << "1. 智子控制系统\n";
        cout << "2. 二向箔发射控制系统\n";
        cout << "3. 可控核聚变控制系统\n";
        cout << "4. 水滴攻击模拟\n";
        cout << "5. 量子计算机模拟\n";
        cout << "6. 思想钢印控制端\n";
        cout << "7. 返回主菜单\n";
        cout << "请选择：";
        cin >> choice;

        switch (choice) {
            case 1:
                sophonControlSystem(logger);
                break;
            case 2:
                dimentionReductionSystem(logger);
                break;
            case 3:
                nuclearFusionControlSystem(logger);
                break;
            case 4:
                dropletControlSystem(logger);
                break;
            case 5:
                quantumComputerSimulation(logger);
                break;
            case 6:
                thoughtStampControl(logger);
                break;
            case 7:
                return;
            default:
                logger.log("无效选项");
                cout << "无效选项！" << endl;
        }
    }
}

// 主菜单
void mainMenu(Logger& logger) {
    int choice;
    while (true) {
        cout << "\n1. 注册\n2. 登录\n3. 查看版权信息\n4. 查看帮助文档\n5. 提交反馈\n6. 接收三体信号\n7. 道德抉择任务\n8. 查看科学概念\n9. 高级功能（需登录）\n10. 退出\n请选择：";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser(logger);
                break;
            case 2:
                if (loginUser(logger)) {
                    advancedMenu(logger);
                }
                break;
            case 3:
                displayCopyright(logger);
                break;
            case 4:
                displayHelp(logger);
                break;
            case 5:
                submitFeedback(logger);
                break;
            case 6:
                receiveTrisolarianSignal(logger);
                break;
            case 7:
                moralDilemma(logger);
                break;
            case 8:
                displayScienceConcept(logger);
                break;
            case 9:
                if (loginUser(logger)) {
                    advancedMenu(logger);
                }
                break;
            case 10:
                logger.log("用户退出程序");
                return;
            default:
                logger.log("无效选项");
                cout << "无效选项！" << endl;
        }
    }
}

// 主函数
int main() {
    srand(static_cast<unsigned int>(time(0))); // 初始化随机数种子
    Logger logger(LOG_FILE_BASE);
    logger.log("-----------------------Start-----------------------");
    logger.log("程序启动");

    displayWelcomeScreen(logger);
    mainMenu(logger);

    logger.log("程序结束");
    logger.log("-----------------------END-----------------------");
    return 0;
}
