#include<stdio.h>
#include<windows.h>
#include <string.h> 

int main()
{
    system("title 地球三体组织（ETO）内部程序  版本：V2.0");
	int a, b, c;
    plane:
    printf("请输入密码：");
    scanf("%d", &a);
    printf("请选择语言！（目前仅支持中，日，英,俄四国语言）\n");
    printf("请键入：1.(汉语)，2.(日本語)，3.(English)，4.（Россия）四国语言\n");
    scanf("%d", &c);
    printf("\n");
    if (a == 114514 && c==1)
    {
        printf("接收到来自于主的任务\n");
        MessageBox(NULL,"接收到来自于主的任务","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONQUESTION);
         MessageBox(NULL,"来自于三体星系","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONQUESTION); 
		 MessageBox(NULL,"本次任务：诛杀罗辑","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONQUESTION);
		 MessageBox(NULL,"图片接收失败！","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONEXCLAMATION);    
		 MessageBox(NULL,"图片二次发送接收失败！","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONHAND);            
		 MessageBox(NULL,"请务必完成","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONQUESTION);
		 MessageBox(NULL,"统计：接收已全部完成，约完成接收99字节的信息，但图片读取失败（？kb）","恒星级功率发送界面信息读取窗口",MB_YESNO|MB_ICONQUESTION);
		 Sleep(5000);	  
    }
   
    if (a == 114514 && c==2)
       {
	        printf("主から課題を受ける\n");
	        MessageBox(NULL,"主から課題を受ける","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION);
	         MessageBox(NULL,"トリソララン銀河から","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION); 
			 MessageBox(NULL,"このミッション:ルオ?ジを殺す","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION);
			 MessageBox(NULL,"イメージの受信に失敗しました","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONEXCLAMATION);    
			 MessageBox(NULL,"2回目の画像の送受信に失敗しました!","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONHAND);            
			 MessageBox(NULL,"必ず完成させてください","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION);
			 MessageBox(NULL,"統計:受信が完了し、99バイトの情報の受信が完了しましたが、画像の読み取りに失敗しました(? KB)","Stellarパワーは、インターフェースの情報読み取りウィンドウを送信します",MB_YESNO|MB_ICONQUESTION);
			 Sleep(5000);
	    }
	if (a == 114514 && c==3)
	    {
			printf("Receive a task from the Lord\n");
			MessageBox(NULL,"Receive a task from the Lord","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
			MessageBox(NULL,"From the Trisolaran Galaxy","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION); 
		    MessageBox(NULL,"This mission: Kill Luo Ji","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
			MessageBox(NULL,"Picture reception failed!","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONEXCLAMATION);    
			MessageBox(NULL,"The image failed to be sent and received twice！","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONHAND);            
		    MessageBox(NULL,"Please be sure to complete it","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
			MessageBox(NULL,"Statistics: The reception has been completed, and the receipt of 99 bytes of information has been completed, but the picture reading failed (?). kb）","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
			Sleep(5000);
		} 
		else (a !=114514 );
		   {
				printf("密码错误!\nパスワードが間違っている!\nWrong password!\n");
			    printf("\n");
		        printf("1.重新输入密码\n(パスワードを再入力する\nRe-enter your password)\n2.按除1外任意键结束程序\nPress any key except 1 to end the programn\n 1以外のキーを押してプログラムを終了しますn\n");
				scanf("%d", &b);
				if (b == 1)
		   {
				goto plane;
		   }
			    else
		   {
				 return 0;
			}
		 }
	if (a == 114514 && c==0)
	{
	   printf("---------------------------------\n|        出版人：RCX            |\n|        RCX版权所有            |\n|        版本：V2.0.0           |\n|        公司：ETO&动物联盟A.L. |\n---------------------------------\n");
	   Sleep(5000);
	   goto plane;
	}
   

}
