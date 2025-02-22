#include<stdio.h>
#include<windows.h>
#include <string.h> 
#include<winuser.h>

//Copyright (c)  2024 RCX.All Rights Reserved.//
//Copyright (c)   2023-2024 RCX保留所有权利//
int main()
{   
    plane:
	system("title 地球三体组织（ETO）内部程序  版本：V3.1.1");//标题//
	system("color F0");
	printf("——————————=》》☆》☆》=《?=☆=?》=《☆《☆《《=——————————\n");
	printf("——————————=制止一切分裂，国家利益高于一切---------------------------\n");
	int huida=MessageBox(NULL,"请不要尝试输入任何乱码，否则将导致游戏崩溃。","提示",MB_YESNO);
	if(huida==IDYES){
	MessageBox(NULL,"谢谢配合！","提示",MB_OK);	
	}
	
    else{
		goto plane;
	}
    
	int a, b, c;
    ShellAboutA(NULL,"ETO内部程序V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.\nCopyright (c)  2023-2024 RCX保留所有权利", NULL);//所有权声明//	
    huida=MessageBox(NULL,"Copyright (c)  2024 RCX.All Rights Reserved。请尊重版权","提示",MB_YESNO);
	if(huida==IDYES)
	MessageBox(NULL,"谢谢配合！","提示",MB_OK);
	else
	goto plane;
	printf("欢迎进入程序。\n该程序为ETO专用。\n");	//内容//
    printf("请输入密码：");
    scanf("%d", &a);//实现输入功能//

    printf("请选择语言！（目前仅支持中，日，英,俄四国语言）\n");//内容//
    printf("请键入：1.(汉语)，2.(日本語)，3.(English)，4.（Россия）四国语言\n");//内容//
    printf("请抓紧选择语言！本段文字显示完后，将于3秒后清屏\n");//内容//
    printf("\n");
    scanf("%d", &c);
    Sleep(5000);
	system("cls");
    if(a==114514)
	{
		if (c==-1)
		{
			printf("---------------------------------\n|        更新日志：             |\n|        1:修复已知bug          |\n|        2:新增俄罗斯语         |\n|        公司：ETO&动物联盟A.L. |\n---------------------------------\n");
			Sleep(5000);
		    system("cls");
			Sleep(3000);
			goto plane;
		}                                              
	    else if (c==1)//内容//
		    {
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
				 Sleep(3000);
				 ShellAboutA(NULL,"ETO内部程序V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.\n(c)2023-2024 RCX保留所有权利", NULL);//所有权声明//		
			     return 0;
			}
				
	    
	    
	    else if (c==2)//内容//
	       {
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
				 Sleep(3000);
				 ShellAboutA(NULL,"ETO内部程序V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
				 return 0;
		    }
		else if (c==3)//内容//
		    {
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
				Sleep(3000);
				ShellAboutA(NULL,"ETO内部程序V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);
				return 0;	
			} 
			else if (c==4)//内容//
			    {
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
					 Sleep(3000);
					 ShellAboutA(NULL,"ETO内部程序V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
					  return 0;
			    }
			   
		else if (c==0)
				{
				   printf("----------------------------------------------\n|        出版人：RCX                         |\n|        RCX版权所有                         |\n|        版本：V2.0.0                        |\n|        公司：ETO&动物联盟A.L.              |\n|Copyright (c)  2024 RCX.All Rights Reserved.|\n----------------------------------------------\n");
				   printf("将展示5秒后返回主界面\n");
				   Sleep(5000);
				   system("cls");
				   Sleep(1000);
				   goto plane;
				   ShellAboutA(NULL,"ETO内部程序V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
				}
			}
	
		else if(a!=114514)
		{
				printf("密码错误!\nパスワードが間違っている!\nWrong password!\n");
			    printf("\n");
		        printf("1.重新输入密码\n(パスワードを再入力する)\n(Re-enter your password)\n2.按除1外任意键结束程序\nPress any key except 1 to end the programn\n1以外のキーを押してプログラムを終了しますn\n");
				printf("\n");
				printf("\n");
				printf("Copyright (c)  2024 RCX.All Rights Reserved.\n");
				scanf("%d", &b);
				if (b == 1)
		   {
		   	    Sleep(1000);
			   	system("cls");
				goto plane;
		   }
			    else
		   {
				  ShellAboutA(NULL,"三体内部程序V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.\nCopyright(c)2023-2024 RCX保留所有权利", NULL);//所有权声明//	
				  return 0;	
			}
		} 
	
    
		
	}          	 		 	
