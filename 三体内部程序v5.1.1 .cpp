#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <winuser.h>
#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>


// Copyright declaration

// 版权声明函数
void displayCopyright() {
    std::cout << "版权声明：" << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << "程序名称：ETO内部程序" << std::endl;
    std::cout << "版本：V5.1.1" << std::endl;
    std::cout << "版权所有 (c) 2024 RCX. 保留所有权利。" << std::endl;
    std::cout << "版权所有 (c) 2023-2024 RCX. 保留所有权利。" << std::endl;
    std::cout << "copyright (c) 2024 RCX. All rights reserved" << std::endl;
	std::cout << "copyright (c) 2023-2024 RCX. All rights reserved" << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << "请注意：未经版权所有者明确书面许可，" << std::endl;
    std::cout << "禁止复制、分发或以任何形式使用本程序。" << std::endl;
    std::cout << "-----------" << std::endl;
}


void model1(){
	printf("接收到来自于主的任务\n");//内容//
					          Sleep(3000);
							  system("cls");
					         MessageBox(NULL,"接收到来自于主的任务","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONQUESTION);
					         MessageBox(NULL,"来自于三体星系","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONQUESTION); 
							 MessageBox(NULL,"本次任务：诛杀罗辑","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONQUESTION);
							 MessageBox(NULL,"图片接收失败！","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONEXCLAMATION);    
							 MessageBox(NULL,"图片二次发送接收失败！","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONHAND);            
							 MessageBox(NULL,"请务必完成","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONQUESTION);
							 MessageBox(NULL,"统计：接收已全部完成，约完成接收99字节的信息，但图片读取失败（？kb）","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONQUESTION);
					         MessageBox(NULL,"Copyright (c)  2024 RCX.All Rights Reserved.","恒星级功率发送界面信息读取窗口",MB_HELP|MB_ICONQUESTION);
					         printf("Copyright (c) 2024 RCX.All Rights Reserved.\n");
							 ShellAboutA(NULL,"ETO内部程序V5.1.1","Copyright (c)  2024 RCX.All Rights Reserved.\n(c)2023-2024 RCX保留所有权利", NULL);//所有权声明//		
						     exit (0);
}
void model2(){
	printf("主から課題を受ける\n");
					        Sleep(3000);
							system("cls");
					        MessageBox(NULL,"主から課題を受ける","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION);
					         MessageBox(NULL,"トリソララン銀河から","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION); 
							 MessageBox(NULL,"このミッション:ルオ?ジを殺す","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION);
							 MessageBox(NULL,"イメージの受信に失敗しました","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONEXCLAMATION);    
							 MessageBox(NULL,"2回目の画像の送受信に失敗しました!","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONHAND);            
							 MessageBox(NULL,"必ず完成させてください","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION);
							 MessageBox(NULL,"統計:受信が完了し、99バイトの情報の受信が完了しましたが、画像の読み取りに失敗しました(? KB)","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION);
							 MessageBox(NULL,"Copyright (c)  2024 RCX.All Rights Reserved.","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION);
							 printf("Copyright (c)  2024 RCX.All Rights Reserved.\n");
							 ShellAboutA(NULL,"ETO内部程序V5.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
							 exit (0);
}

void model3(){
	printf("Receive a task from the Lord\n");
							Sleep(3000);
							system("cls");
							MessageBox(NULL,"Receive a task from the Lord","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
							MessageBox(NULL,"From the Trisolaran Galaxy","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION); 
						    MessageBox(NULL,"This mission: Kill Luo Ji","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
							MessageBox(NULL,"Picture reception failed!","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONEXCLAMATION);    
							MessageBox(NULL,"The image failed to be sent and received twice！","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONHAND);            
						    MessageBox(NULL,"Please be sure to complete it","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
							MessageBox(NULL,"Statistics: The reception has been completed, and the receipt of 99 bytes of information has been completed, but the picture reading failed (?). kb）","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
							MessageBox(NULL,"Copyright (c)  2024 RCX.All Rights Reserved.","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
							printf("Copyright (c)  2024 RCX.All Rights Reserved./n");
							ShellAboutA(NULL,"ETO内部程序V5.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);
							exit (0);	
}
void model4(){
	printf("Получите задание от Господа\n");
						        Sleep(3000);
								system("cls");
						         MessageBox(NULL,"Получите задание от Господа","Stellar Power отправляет в окно чтения информации интерфейса",MB_YESNO|MB_ICONQUESTION);
						         MessageBox(NULL,"Из галактики Трисоларан","Stellar Power отправляет в окно чтения информации интерфейса",MB_YESNO|MB_ICONQUESTION); 
								 MessageBox(NULL,"Эта миссия: Убить Ло Цзи","Stellar Power отправляет в окно чтения информации интерфейса",MB_YESNO|MB_ICONQUESTION);
								 MessageBox(NULL,"Прием картинки не удался!","Stellar Power отправляет в окно чтения информации интерфейса",MB_YESNO|MB_ICONEXCLAMATION);    
								 MessageBox(NULL,"Изображение не было отправлено и получено дважды！","Stellar Power отправляет в окно чтения информации интерфейса",MB_YESNO|MB_ICONHAND);            
								 MessageBox(NULL,"Пожалуйста, обязательно заполните его","Stellar Power отправляет в окно чтения информации интерфейса",MB_YESNO|MB_ICONQUESTION);
								 MessageBox(NULL,"Статистика: Прием завершен, и прием 99 байт информации завершен, но чтение картинки не удалось (?). кб)","Stellar Power отправляет в окно чтения информации интерфейса",MB_YESNO|MB_ICONQUESTION);
								 MessageBox(NULL,"Copyright (c)  2024 RCX.All Rights Reserved.","Stellar Power отправляет в окно чтения информации интерфейса",MB_YESNO|MB_ICONQUESTION);  
								 printf("Copyright (c)  2024 RCX.All Rights Reserved.\n");
								 ShellAboutA(NULL,"ETO内部程序V5.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
								  exit (0);
}
class Logger {
private:
    std::ofstream logFile;
    std::string logFileName;

public:
    Logger(const std::string& baseFileName) {
        std::time_t now = std::time(nullptr);
        char dateBuffer[64];
        std::strftime(dateBuffer, sizeof(dateBuffer), "_%Y-%m-%d.log", std::localtime(&now));
        std::stringstream ss;
        ss << baseFileName << dateBuffer;
        logFileName = ss.str();
        logFile.open(logFileName, std::ios::out); // 使用覆盖模式，每天创建新文件
        if (!logFile.is_open()) {
            std::cerr << "无法打开日志文件: " << logFileName << std::endl;
        }
    }

    ~Logger() {
        if (logFile.is_open()) {
            logFile.close();
        }
    }

    void log(const std::string& message, const std::string& level = "INFO") {
        if (logFile.is_open()) {
            std::time_t now = std::time(nullptr);
            char timestamp[64];
            std::strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", std::localtime(&now));
            logFile << "[" << level << "] " << timestamp << " - " << message << std::endl;
        }
    }
};
int a, b,c;
// Main function
int main() {
    system("title 地球三体组织（ETO）内部程序  版本：V5.1.1");
    system("color F0");
    Logger logger("ETO_internal_log.txt"); // 创建日志文件
    logger.log("程序启动"); // 记录程序启动
    plane:
    printf("——————————=》》☆》☆》=《=☆=》=《☆《☆《《=——————————\n");
    printf("——————————=制止一切分裂，国家利益高于一切---------------------------\n");
    int userResponse = MessageBox(NULL, "请不要尝试输入任何乱码，否则将导致游戏崩溃。", "提示", MB_YESNO);
    if (userResponse != IDYES) {
        return 0;
    }
    int password, language;
    printf("欢迎进入程序。\n该程序为ETO专用。\n");
    printf("请输入密码：");
    if (scanf("%d", &password) != 1) {
        printf("输入错误，请输入一个数字作为密码。\n");
        return 0;
    }
	displayCopyright();
    printf("请选择语言！（目前仅支持中，日，英,俄四国语言）\n");
	printf("请键入：1.(汉语)，2.(日本語)，3.(English)，4.（Россия）四国语言\n");
	printf("请抓紧选择语言！本段文字显示完后，将于3秒后清屏\n");
	Sleep(3000);
	scanf("%d", &c);
	Sleep(5000);
	system("cls");
    if (password == 114514) 
	{
		logger.log("密码验证成功"); // 记录密码验证成功
        if (c==-1)
				{
					printf("---------------------------------\n|        更新日志：             |\n|        1:修复已知bug          |\n|        2:新增俄罗斯语         |\n|        3:新增些新功能         |\n|        公司：ETO&动物联盟A.L. |\n---------------------------------\n");
					Sleep(5000);
				    system("cls");
					Sleep(3000);
					goto plane;
				}                                              
			    else if (c==1)//内容//
				    {
				    	logger.log("已选择语言（汉语）"); 
				         model1();
					}
						
			    
			    else if (c==2)//内容//
			       {
			       	    logger.log("已选择语言（日语）"); 
				        model2();
				    }
				else if (c==3)//内容//
				    {
				    	logger.log("已选择语言（英语）"); 
						model3();
					} 
					else if (c==4)//内容//
					    {
					    	logger.log("已选择语言（俄语）"); 
					        model4();					    
							}
					   
				else if (c==0)
						{
						   logger.log("已展示版权"); 	
						   printf("----------------------------------------------\n|        出版人：RCX                         |\n|        RCX版权所有                         |\n|        版本：V4.1.1                        |\n|        公司：ETO&动物联盟A.L.              |\n|Copyright (c)  2024 RCX.All Rights Reserved.|\n----------------------------------------------\n");
						   printf("将展示5秒后返回主界面\n");
						   Sleep(5000);
						   system("cls");
						   Sleep(1000);
						   goto plane;
						   ShellAboutA(NULL,"ETO内部程序V5.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
						}
					}
        
     else if(password!=114514)
	 {
	 	logger.log("密码错误"); // 记录密码错误
        printf("密码错误!\n");
        int reenter = MessageBox(NULL, "选项：\n是.（重新输入密码）\n否.结束程序", "密码错误", MB_YESNO);
        if (reenter == IDYES) {
        	logger.log("用户选择重新输入密码（选项是）"); 
            system("cls");
            goto plane;
        } else {
        	logger.log("用户选择结束程序（选项否）"); 
			logger.log("程序结束"); // 记录程序结束
            exit (0);
        }
    

    
    return 0;
}
}
