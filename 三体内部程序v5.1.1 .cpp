#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <winuser.h>
#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>


// Copyright declaration

// ��Ȩ��������
void displayCopyright() {
    std::cout << "��Ȩ������" << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << "�������ƣ�ETO�ڲ�����" << std::endl;
    std::cout << "�汾��V5.1.1" << std::endl;
    std::cout << "��Ȩ���� (c) 2024 RCX. ��������Ȩ����" << std::endl;
    std::cout << "��Ȩ���� (c) 2023-2024 RCX. ��������Ȩ����" << std::endl;
    std::cout << "copyright (c) 2024 RCX. All rights reserved" << std::endl;
	std::cout << "copyright (c) 2023-2024 RCX. All rights reserved" << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << "��ע�⣺δ����Ȩ��������ȷ������ɣ�" << std::endl;
    std::cout << "��ֹ���ơ��ַ������κ���ʽʹ�ñ�����" << std::endl;
    std::cout << "-----------" << std::endl;
}


void model1(){
	printf("���յ���������������\n");//����//
					          Sleep(3000);
							  system("cls");
					         MessageBox(NULL,"���յ���������������","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONQUESTION);
					         MessageBox(NULL,"������������ϵ","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONQUESTION); 
							 MessageBox(NULL,"����������ɱ�޼�","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONQUESTION);
							 MessageBox(NULL,"ͼƬ����ʧ�ܣ�","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONEXCLAMATION);    
							 MessageBox(NULL,"ͼƬ���η��ͽ���ʧ�ܣ�","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONHAND);            
							 MessageBox(NULL,"��������","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONQUESTION);
							 MessageBox(NULL,"ͳ�ƣ�������ȫ����ɣ�Լ��ɽ���99�ֽڵ���Ϣ����ͼƬ��ȡʧ�ܣ���kb��","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONQUESTION);
					         MessageBox(NULL,"Copyright (c)  2024 RCX.All Rights Reserved.","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_HELP|MB_ICONQUESTION);
					         printf("Copyright (c) 2024 RCX.All Rights Reserved.\n");
							 ShellAboutA(NULL,"ETO�ڲ�����V5.1.1","Copyright (c)  2024 RCX.All Rights Reserved.\n(c)2023-2024 RCX��������Ȩ��", NULL);//����Ȩ����//		
						     exit (0);
}
void model2(){
	printf("�������n�}���ܤ���\n");
					        Sleep(3000);
							system("cls");
					        MessageBox(NULL,"�������n�}���ܤ���","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION);
					         MessageBox(NULL,"�ȥ꥽�����y�Ӥ���","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION); 
							 MessageBox(NULL,"���Υߥå����:�륪?���򚢤�","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION);
							 MessageBox(NULL,"����`�������Ť�ʧ�����ޤ���","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONEXCLAMATION);    
							 MessageBox(NULL,"2��Ŀ�λ���������Ť�ʧ�����ޤ���!","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONHAND);            
							 MessageBox(NULL,"�ؤ���ɤ����Ƥ�������","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION);
							 MessageBox(NULL,"�yӋ:���Ť����ˤ���99�Х��Ȥ��������Ť����ˤ��ޤ�������������i��ȡ���ʧ�����ޤ���(? KB)","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION);
							 MessageBox(NULL,"Copyright (c)  2024 RCX.All Rights Reserved.","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION);
							 printf("Copyright (c)  2024 RCX.All Rights Reserved.\n");
							 ShellAboutA(NULL,"ETO�ڲ�����V5.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
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
							MessageBox(NULL,"The image failed to be sent and received twice��","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONHAND);            
						    MessageBox(NULL,"Please be sure to complete it","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
							MessageBox(NULL,"Statistics: The reception has been completed, and the receipt of 99 bytes of information has been completed, but the picture reading failed (?). kb��","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
							MessageBox(NULL,"Copyright (c)  2024 RCX.All Rights Reserved.","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
							printf("Copyright (c)  2024 RCX.All Rights Reserved./n");
							ShellAboutA(NULL,"ETO�ڲ�����V5.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);
							exit (0);	
}
void model4(){
	printf("����ݧ��ڧ�� �٧ѧէѧߧڧ� ��� �������է�\n");
						        Sleep(3000);
								system("cls");
						         MessageBox(NULL,"����ݧ��ڧ�� �٧ѧէѧߧڧ� ��� �������է�","Stellar Power �����ѧӧݧ�֧� �� ��ܧߧ� ���֧ߧڧ� �ڧߧ���ާѧ�ڧ� �ڧߧ�֧��֧ۧ��",MB_YESNO|MB_ICONQUESTION);
						         MessageBox(NULL,"���� �ԧѧݧѧܧ�ڧܧ� ����ڧ��ݧѧ�ѧ�","Stellar Power �����ѧӧݧ�֧� �� ��ܧߧ� ���֧ߧڧ� �ڧߧ���ާѧ�ڧ� �ڧߧ�֧��֧ۧ��",MB_YESNO|MB_ICONQUESTION); 
								 MessageBox(NULL,"����� �ާڧ��ڧ�: ���ҧڧ�� ���� ���٧�","Stellar Power �����ѧӧݧ�֧� �� ��ܧߧ� ���֧ߧڧ� �ڧߧ���ާѧ�ڧ� �ڧߧ�֧��֧ۧ��",MB_YESNO|MB_ICONQUESTION);
								 MessageBox(NULL,"����ڧ֧� �ܧѧ��ڧߧܧ� �ߧ� ��էѧݧ��!","Stellar Power �����ѧӧݧ�֧� �� ��ܧߧ� ���֧ߧڧ� �ڧߧ���ާѧ�ڧ� �ڧߧ�֧��֧ۧ��",MB_YESNO|MB_ICONEXCLAMATION);    
								 MessageBox(NULL,"���٧�ҧ�ѧا֧ߧڧ� �ߧ� �ҧ�ݧ� �����ѧӧݧ֧ߧ� �� ���ݧ��֧ߧ� �էӧѧاէ�","Stellar Power �����ѧӧݧ�֧� �� ��ܧߧ� ���֧ߧڧ� �ڧߧ���ާѧ�ڧ� �ڧߧ�֧��֧ۧ��",MB_YESNO|MB_ICONHAND);            
								 MessageBox(NULL,"����اѧݧ�ۧ���, ��ҧ�٧ѧ�֧ݧ�ߧ� �٧ѧ��ݧߧڧ�� �֧ԧ�","Stellar Power �����ѧӧݧ�֧� �� ��ܧߧ� ���֧ߧڧ� �ڧߧ���ާѧ�ڧ� �ڧߧ�֧��֧ۧ��",MB_YESNO|MB_ICONQUESTION);
								 MessageBox(NULL,"����ѧ�ڧ��ڧܧ�: ����ڧ֧� �٧ѧӧ֧��֧�, �� ���ڧ֧� 99 �ҧѧۧ� �ڧߧ���ާѧ�ڧ� �٧ѧӧ֧��֧�, �ߧ� ���֧ߧڧ� �ܧѧ��ڧߧܧ� �ߧ� ��էѧݧ��� (?). �ܧ�)","Stellar Power �����ѧӧݧ�֧� �� ��ܧߧ� ���֧ߧڧ� �ڧߧ���ާѧ�ڧ� �ڧߧ�֧��֧ۧ��",MB_YESNO|MB_ICONQUESTION);
								 MessageBox(NULL,"Copyright (c)  2024 RCX.All Rights Reserved.","Stellar Power �����ѧӧݧ�֧� �� ��ܧߧ� ���֧ߧڧ� �ڧߧ���ާѧ�ڧ� �ڧߧ�֧��֧ۧ��",MB_YESNO|MB_ICONQUESTION);  
								 printf("Copyright (c)  2024 RCX.All Rights Reserved.\n");
								 ShellAboutA(NULL,"ETO�ڲ�����V5.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
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
        logFile.open(logFileName, std::ios::out); // ʹ�ø���ģʽ��ÿ�촴�����ļ�
        if (!logFile.is_open()) {
            std::cerr << "�޷�����־�ļ�: " << logFileName << std::endl;
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
    system("title ����������֯��ETO���ڲ�����  �汾��V5.1.1");
    system("color F0");
    Logger logger("ETO_internal_log.txt"); // ������־�ļ�
    logger.log("��������"); // ��¼��������
    plane:
    printf("��������������������=������=��=��=��=������=��������������������\n");
    printf("��������������������=��ֹһ�з��ѣ������������һ��---------------------------\n");
    int userResponse = MessageBox(NULL, "�벻Ҫ���������κ����룬���򽫵�����Ϸ������", "��ʾ", MB_YESNO);
    if (userResponse != IDYES) {
        return 0;
    }
    int password, language;
    printf("��ӭ�������\n�ó���ΪETOר�á�\n");
    printf("���������룺");
    if (scanf("%d", &password) != 1) {
        printf("�������������һ��������Ϊ���롣\n");
        return 0;
    }
	displayCopyright();
    printf("��ѡ�����ԣ���Ŀǰ��֧���У��գ�Ӣ,���Ĺ����ԣ�\n");
	printf("����룺1.(����)��2.(�ձ��Z)��3.(English)��4.��������ڧ��Ĺ�����\n");
	printf("��ץ��ѡ�����ԣ�����������ʾ��󣬽���3�������\n");
	Sleep(3000);
	scanf("%d", &c);
	Sleep(5000);
	system("cls");
    if (password == 114514) 
	{
		logger.log("������֤�ɹ�"); // ��¼������֤�ɹ�
        if (c==-1)
				{
					printf("---------------------------------\n|        ������־��             |\n|        1:�޸���֪bug          |\n|        2:��������˹��         |\n|        3:����Щ�¹���         |\n|        ��˾��ETO&��������A.L. |\n---------------------------------\n");
					Sleep(5000);
				    system("cls");
					Sleep(3000);
					goto plane;
				}                                              
			    else if (c==1)//����//
				    {
				    	logger.log("��ѡ�����ԣ����"); 
				         model1();
					}
						
			    
			    else if (c==2)//����//
			       {
			       	    logger.log("��ѡ�����ԣ����"); 
				        model2();
				    }
				else if (c==3)//����//
				    {
				    	logger.log("��ѡ�����ԣ�Ӣ�"); 
						model3();
					} 
					else if (c==4)//����//
					    {
					    	logger.log("��ѡ�����ԣ����"); 
					        model4();					    
							}
					   
				else if (c==0)
						{
						   logger.log("��չʾ��Ȩ"); 	
						   printf("----------------------------------------------\n|        �����ˣ�RCX                         |\n|        RCX��Ȩ����                         |\n|        �汾��V4.1.1                        |\n|        ��˾��ETO&��������A.L.              |\n|Copyright (c)  2024 RCX.All Rights Reserved.|\n----------------------------------------------\n");
						   printf("��չʾ5��󷵻�������\n");
						   Sleep(5000);
						   system("cls");
						   Sleep(1000);
						   goto plane;
						   ShellAboutA(NULL,"ETO�ڲ�����V5.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
						}
					}
        
     else if(password!=114514)
	 {
	 	logger.log("�������"); // ��¼�������
        printf("�������!\n");
        int reenter = MessageBox(NULL, "ѡ�\n��.�������������룩\n��.��������", "�������", MB_YESNO);
        if (reenter == IDYES) {
        	logger.log("�û�ѡ�������������루ѡ���ǣ�"); 
            system("cls");
            goto plane;
        } else {
        	logger.log("�û�ѡ���������ѡ���"); 
			logger.log("�������"); // ��¼�������
            exit (0);
        }
    

    
    return 0;
}
}
