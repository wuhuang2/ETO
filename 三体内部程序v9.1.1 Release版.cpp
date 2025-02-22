#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <winuser.h>
#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include <chrono>


using namespace std;
// Copyright declaration
string OneByOne(string l);//声明一下

// 版权声明函数

void Copyright() {
    cout << "版权声明：" << std::endl;
    cout << "-----------" << std::endl;
    cout << "程序名称：ETO内部程序" << std::endl;
    cout << "版本：V8.1.1" << std::endl;
    cout << "版权所有 (c) 2024 RCX. 保留所有权利。" << std::endl;
    cout << "版权所有 (c) 2023-2024 RCX. 保留所有权利。" << std::endl;
    cout << "copyright (c) 2024 RCX. All rights reserved" << std::endl;
	cout << "copyright (c) 2023-2024 RCX. All rights reserved" << std::endl;
    cout << "-----------" << std::endl;
    cout << "请注意：未经版权所有者明确书面许可，" << std::endl;
    cout << "禁止复制、分发或以任何形式使用本程序。" << std::endl;
    cout << "-----------" << std::endl;
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
							 ShellAboutA(NULL,"ETO内部程序V8.1.1","Copyright (c)  2024 RCX.All Rights Reserved.\n(c)2023-2024 RCX保留所有权利", NULL);//所有权声明//		
						     
}
void model2(){
	printf("主から課題を受ける\n");
					        Sleep(3000);
							system("cls");
					        MessageBox(NULL,"不友好的小日子不配使用本程序","煞笔",MB_YESNO|MB_ICONQUESTION);
					        MessageBox(NULL,"煞笔","煞笔",MB_YESNO|MB_ICONQUESTION);
							 printf("Copyright (c)  2024 RCX.All Rights Reserved.\n");
							 ShellAboutA(NULL,"ETO内部程序V8.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);
							 exit(0);			
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
							ShellAboutA(NULL,"ETO内部程序V8.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);
							
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
								 ShellAboutA(NULL,"ETO内部程序V8.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
						
}

void model5() {
    // German
    printf("Erhalten Sie eine Aufgabe vom Herrn\n");
    Sleep(3000);
    system("cls");
    MessageBox(NULL, "Erhalten Sie eine Aufgabe vom Herrn", "Stellarleistung sendet das Informationsfenster des Interfaces", MB_YESNO|MB_ICONQUESTION);
    MessageBox(NULL, "Aus der Trisolaran-Galaxis", "Stellarleistung sendet das Informationsfenster des Interfaces", MB_YESNO|MB_ICONQUESTION);
    MessageBox(NULL, "Diese Mission: Luo Ji t?ten", "Stellarleistung sendet das Informationsfenster des Interfaces", MB_YESNO|MB_ICONQUESTION);
    MessageBox(NULL, "Bildempfang fehlgeschlagen!", "Stellarleistung sendet das Informationsfenster des Interfaces", MB_YESNO|MB_ICONEXCLAMATION);
    MessageBox(NULL, "Das Bild ist zum zweiten Mal zum Senden und Empfangen fehlgeschlagen!", "Stellarleistung sendet das Informationsfenster des Interfaces", MB_YESNO|MB_ICONHAND);
    MessageBox(NULL, "Bitte stellen Sie sicher, dass Sie es abschlie?en", "Stellarleistung sendet das Informationsfenster des Interfaces", MB_YESNO|MB_ICONQUESTION);
    MessageBox(NULL, "Statistik: Der Empfang wurde abgeschlossen, und der Empfang von 99 Bytes an Informationen wurde abgeschlossen, aber das Lesen des Bildes ist fehlgeschlagen (?). kb)", "Stellarleistung sendet das Informationsfenster des Interfaces", MB_YESNO|MB_ICONQUESTION);
    MessageBox(NULL, "Copyright (c) 2024 RCX. Alle Rechte vorbehalten.", "Stellarleistung sendet das Informationsfenster des Interfaces", MB_YESNO|MB_ICONQUESTION);
    printf("Copyright (c) 2024 RCX. Alle Rechte vorbehalten.\n");
    ShellAboutA(NULL,"ETO-Internes Programm V8.1.1","Copyright (c) 2024 RCX. Alle Rechte vorbehalten.", NULL);
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
string decimalToBinary(int decimal) {
string binary = "";
    while (decimal > 0) {
        binary = char('0' + (decimal % 2)) + binary; // 将余数添加到字符串的前面
        decimal /= 2; // 将十进制数除以2
    }
    return binary.empty() ? "0" : binary; // 如果输入为0，则返回"0"
};

void answer0(){
	string str = { "不要回答！" };//创建一个字符串
		for (int i = 0; i < str.length(); i++)
		{
			cout << str[i]; //输出字母
			Sleep(300);
		}
		cout << endl;
}	
	void answer1(){
		string str = { "不要回答！！" };//创建一个字符串
			for (int i = 0; i < str.length(); i++)
			{
				cout << str[i]; //输出字母
				Sleep(300);
			}
			cout << endl;
	}		
	void answer2(){
		string str = { "不要回答！！！\n这个世界收到了你们的信息。 \n我是这个世界的一个和平主义者，\n我首先收到信息是你们文明的幸运，\n警告你们：\n 不要回答！\n不要回答！！\n不要回答！！！\n 你们的方向上有千万颗恒星，只要不回答，这个世界就无法定位发射源。\n 如果回答，发射源将被定位，你们的行星系将遭到入侵，你们的世界将被占领！\n 不要回答！\n不要回答！！\n不要回答！！！\n " };//创建一个字符串
			for (int i = 0; i < str.length(); i++)
			{
				cout << str[i]; //输出字母
				Sleep(150);
			}
			cout << endl;
	}
	void LaunchInformation()
	{
        int d;
		MessageBox(NULL, "欢迎进入红岸发射端", "提示", MB_YESNO);
		MessageBox(NULL, "您已选择发射！！!", "警告", MB_YESNO);
		MessageBox(NULL, "Warning！！!", "Warning", MB_YESNO);
		MessageBox(NULL, "Warning！！!", "Warning", MB_YESNO);
		MessageBox(NULL, "Warning！！!", "Warning", MB_YESNO);
        cout<<"您正在进行发射操作！"<<endl;
        MessageBox(NULL, "请输入发射频率：", "提示", MB_YESNO);
        scanf("%d",&d);
        if(d>=3000000000000)
		{
		cout<<"超过人类所能发射的极限频率！";
		cout<<"请重新输入";
		}
		else if(d>=1000000000&d<300000000000)
		     {
		    cout<<"您选择的频率是"<<d/10000000000<<"GHz"<<endl;	
		    cout<<"请输入您想发射到的星系："<<endl;
		    char e[50];
		    cin.getline(e, 50);
		    cout << e;
		    cout<<"您选择的星系是："<<e<<endl;
		    cout<<"请选择发射角度："<<endl;
		    char h[10];
		    cin.getline(h, 10);
		    cout << h;
		    }
		else if(d>=1000&d<1000000)
			 {
			cout<<"您选择的频率是"<<d/1000<<"KHz"<<endl;	
			cout<<"请输入您想发射到的星系："<<endl;
			char e[50];
			cin.getline(e, 50);
			cout << e;
		    cout << endl;
		    cout<<"您选择的星系是："<<e<<endl;
			cout<<"请选择发射角度："<<endl;
			char h[10];
			cin.getline(h, 10);
		    cout << h;	
			}
		else if(d>1000000&d<1000000000)
			{
			cout<<"您选择的频率是"<<d/1000000<<"MHz"<<endl;	
			cout<<"请输入您想发射到的星系："<<endl;
			char e[50];
			cin.getline(e, 50);
			cout << e;
			cout << endl;
			cout<<"您选择的星系是："<<e<<endl;
			cout<<"请选择发射角度："<<endl;
			char h[10];
			cin.getline(h, 10);
			cout << h;
			}
		else if(d>=0&d<=1000)
			{
			cout<<"您选择的频率是"<<d/1<<"Hz"<<endl;	
			cout<<"请输入您想发射到的星系："<<endl;
			char e[50];
			cin.getline(e, 50);
			cout << e;
			cout << endl;
			cout<<"您选择的星系是："<<e<<endl;
			cout<<"请选择发射角度："<<endl;
			char h[10];
			cin.getline(h, 10);
			cout << h;
			}			
		cout<<"默认发射以下信息：\n"<<"向收到该信息的世界致以美好的祝愿。\n通过以下信息，你们将对地球文明有一个基本的了解。\n人类经过漫长的劳动和创造，建立了灿烂的文明，\n涌现出丰富多彩的文化，\n并初步了解了自然界和人类社会运行发展的规律，\n我们珍视这一切。\n 但我们的世界仍有很大缺陷，存在着仇恨、偏见和战争，\n由于生产力和生产关系的矛盾，财富的分布严重不均，\n相当部分的人类成员生活在贫困和苦难之中。\n人类社会正在努力解决自己面临的各种困难和问题，努力为地球文明创造一个美好的未来。\n发送该信息的国家所从事的事业就是这种努力的一部分。\n我们致力于建立一个理想的社会，使每个人类成员的劳动和价值都得到充分的尊重，\n使所有人的物质和精神需要都得到充分的满足，使地球文明成为一个更加完美的文明。\n 我们怀着美好的愿望，期待着与宇宙中其他文明社会建立联系，\n期待着与你们一起，在广阔的宇宙中创造更加美好的生活。\n"<<endl;	
		}	
int a, b,c;
// Main function
int main() {
	STSRT:
    system("title 地球三体组织（ETO）内部程序  版本：V8.1.1");
    system("color F0");
    Logger logger("ETO_internal_log.txt"); // 创建日志文件
    logger.log("-----------------------Start-----------------------");
    logger.log("程序启动"); // 记录程序启动
    plane:
    system("cls");	
    printf("——————————=》》☆》☆》=《=☆=》=《☆《☆《《=——————————\n");
    printf("——————————=制止一切分裂，国家利益高于一切---------------------------\n");
    int userResponse = MessageBox(NULL, "请不要尝试输入任何乱码，否则将导致游戏崩溃。", "提示", MB_YESNO);
    system("cls");
    if (userResponse != IDYES) {
    	MessageBox(NULL, "下次再会，再见！", "很遗憾", MB_YESNO);
        return 0;
    }
    int password, language;
	system("cls");
    std::cout << "欢迎您进入ETO程序！" << std::endl;
	std::cout << " -----------------------------------------------------------------------------------" << std::endl;
	std::cout << "|                                       主界面                                      |"<< std::endl;
	std::cout << "|                                 程序名称：ETO内部程序                             |"<< std::endl;
	std::cout << "|                                      版本：V8.1.1                                 |"<< std::endl;
	std::cout << "|                                    该程序为ETO专用。                              |"<< std::endl;
	std::cout << "|                                      请输入密码：                                 |"<< std::endl;
	std::cout << " ---------------------------------------------------------------------------------- " << std::endl;
	if (scanf("%d", &password) != 1) {
	MessageBox(NULL, "请输入一个数字！", "重要提示！", MB_YESNO|MB_ICONQUESTION);
	logger.log("用户未输入数字，已自动退出");
	logger.log("-----------------------END-----------------------");
	return 0;
	}
	printf("请选择语言！（目前仅支持中，日，英,俄,德五国语言）\n");
	printf("请键入：1.(汉语)，2.(日本語)，3.(English)，4.（Россия）5.（Deutsch）五国语言\n");
	printf("请抓紧选择语言！本段文字显示完后，将于3秒后清屏\n");
	Sleep(3000);
	system("cls");
	scanf("%d", &c);
	Sleep(3000);
    if (password == 114514) 
	{
		logger.log("密码验证成功"); // 记录密码验证成功
        if (c==-1)
				{
					
					printf("---------------------------------\n|        更新日志：             |\n|        1:修复已知bug          |\n|        2:新增德语          |\n|        3:新增些新功能         |\n|        公司：ETO&动物联盟A.L. |\n---------------------------------\n");
					Sleep(5000);
				    system("cls");
					Sleep(3000);
					logger.log("程序已跳转主页面");
					goto plane;
				}                                              
			    else if (c==1)//内容//
				    {
				    	logger.log("已选择语言（汉语）"); 
				         model1();
				         Copyright();
				         logger.log("程序结束");
				         logger.log("-----------------------END-----------------------");
				         exit(0);
					}
						
			    
			    else if (c==2)//内容//
			       {
			       	    logger.log("已选择语言（日语）"); 
				        model2();
				        Copyright();
				        logger.log("程序结束");
				        logger.log("-----------------------END-----------------------");
				        exit(0);
				    }
				else if (c==3)//内容//
				    {
				    	logger.log("已选择语言（英语）"); 
						model3();
						Copyright();
						logger.log("程序结束");
						logger.log("-----------------------END-----------------------");
						exit(0);
					} 
					else if (c==4)//内容//
					    {
					    	logger.log("已选择语言（俄语）"); 
					        model4();
								Copyright();
								logger.log("程序结束");
								logger.log("-----------------------END-----------------------");
								exit(0);				    
							}
					else if (c==5)
					{
						logger.log("已选择语言（德语）");
						model5();
					Copyright()	;
					logger.log("程序结束");
					logger.log("-----------------------END-----------------------");
					exit(0);
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
						   ShellAboutA(NULL,"ETO内部程序V8.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
						}
				
				else if (c==-2)
				{
				system("cls");	
				system("title 红岸基地接收端  版本：V8.1.1");
				MessageBox(NULL, "接收到来自半人马座方向的信号\n可能包含智慧信息\n系统开始自动译解。\n", "红岸基地接收端 V8.1.1", MB_YESNO);
				cout<<"自译解系统启动"<<endl;
				cout<<"开始译解："<<endl;
				int counter = 18; 
				Sleep(500);
				while (counter >= 1)
				{
				cout << "\r自译解剩余时间: " << counter << flush;
				Sleep(1000);
				counter--;
				}
				 cout<<"识别等级“AAAAA”"<<endl;
				 MessageBox(NULL, "自译解结果：AAAAA", "红岸基地接收端 V8.1.1", MB_YESNO);
		     	 system("cls");
				 answer0();
				 answer1();
				 answer2();
				 MessageBox(NULL, "第一段信息译解已完成。", "红岸基地接收端 V8.1.1", MB_YESNO);
				 MessageBox(NULL, "第一段信息译解已完成。", "红岸基地接收端 V8.1.1", MB_YESNO);
				 system("pause");
				 goto plane;
				}
				else if(c==-3)
				{
				LaunchInformation();
				system("pause");
				goto plane;
				}
				}				
     else if(password==54188)
	 {
	 int decimalNumber;
	     string binaryNumber;
	 
	     // 提示用户输入一个十进制数
	     cout << "请输入一个十进制数：";
	     cin >> decimalNumber;
	 
	     // 转换为二进制
	     binaryNumber = decimalToBinary(decimalNumber);
	 
	     // 输出二进制数
	     cout << "本二进制数是: " << binaryNumber << std::endl;
	     system("pause");
	     goto plane;
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
			logger.log("-----------------------END-----------------------");
            exit (0);
        }
    
}
}
