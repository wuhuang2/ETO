#include<stdio.h>
#include<windows.h>
#include <string.h> 

int main()
{
    system("title ����������֯��ETO���ڲ�����  �汾��V2.0");
	int a, b, c;
    plane:
    printf("���������룺");
    scanf("%d", &a);
    printf("��ѡ�����ԣ���Ŀǰ��֧���У��գ�Ӣ,���Ĺ����ԣ�\n");
    printf("����룺1.(����)��2.(�ձ��Z)��3.(English)��4.��������ڧ��Ĺ�����\n");
    scanf("%d", &c);
    printf("\n");
    if (a == 114514 && c==1)
    {
        printf("���յ���������������\n");
        MessageBox(NULL,"���յ���������������","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONQUESTION);
         MessageBox(NULL,"������������ϵ","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONQUESTION); 
		 MessageBox(NULL,"����������ɱ�޼�","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONQUESTION);
		 MessageBox(NULL,"ͼƬ����ʧ�ܣ�","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONEXCLAMATION);    
		 MessageBox(NULL,"ͼƬ���η��ͽ���ʧ�ܣ�","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONHAND);            
		 MessageBox(NULL,"��������","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONQUESTION);
		 MessageBox(NULL,"ͳ�ƣ�������ȫ����ɣ�Լ��ɽ���99�ֽڵ���Ϣ����ͼƬ��ȡʧ�ܣ���kb��","���Ǽ����ʷ��ͽ�����Ϣ��ȡ����",MB_YESNO|MB_ICONQUESTION);
		 Sleep(5000);	  
    }
   
    if (a == 114514 && c==2)
       {
	        printf("�������n�}���ܤ���\n");
	        MessageBox(NULL,"�������n�}���ܤ���","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION);
	         MessageBox(NULL,"�ȥ꥽�����y�Ӥ���","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION); 
			 MessageBox(NULL,"���Υߥå����:�륪?���򚢤�","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION);
			 MessageBox(NULL,"����`�������Ť�ʧ�����ޤ���","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONEXCLAMATION);    
			 MessageBox(NULL,"2��Ŀ�λ���������Ť�ʧ�����ޤ���!","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONHAND);            
			 MessageBox(NULL,"�ؤ���ɤ����Ƥ�������","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION);
			 MessageBox(NULL,"�yӋ:���Ť����ˤ���99�Х��Ȥ��������Ť����ˤ��ޤ�������������i��ȡ���ʧ�����ޤ���(? KB)","Stellar�ѥ�`�ϡ����󥿩`�ե��`��������i��ȡ�ꥦ����ɥ������Ť��ޤ�",MB_YESNO|MB_ICONQUESTION);
			 Sleep(5000);
	    }
	if (a == 114514 && c==3)
	    {
			printf("Receive a task from the Lord\n");
			MessageBox(NULL,"Receive a task from the Lord","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
			MessageBox(NULL,"From the Trisolaran Galaxy","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION); 
		    MessageBox(NULL,"This mission: Kill Luo Ji","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
			MessageBox(NULL,"Picture reception failed!","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONEXCLAMATION);    
			MessageBox(NULL,"The image failed to be sent and received twice��","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONHAND);            
		    MessageBox(NULL,"Please be sure to complete it","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
			MessageBox(NULL,"Statistics: The reception has been completed, and the receipt of 99 bytes of information has been completed, but the picture reading failed (?). kb��","Stellar power sends the information reading window of the interface",MB_YESNO|MB_ICONQUESTION);
			Sleep(5000);
		} 
		else (a !=114514 );
		   {
				printf("�������!\n�ѥ���`�ɤ��g�`�äƤ���!\nWrong password!\n");
			    printf("\n");
		        printf("1.������������\n(�ѥ���`�ɤ�����������\nRe-enter your password)\n2.����1���������������\nPress any key except 1 to end the programn\n 1����Υ��`��Ѻ���ƥץ�����K�ˤ��ޤ�n\n");
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
	   printf("---------------------------------\n|        �����ˣ�RCX            |\n|        RCX��Ȩ����            |\n|        �汾��V2.0.0           |\n|        ��˾��ETO&��������A.L. |\n---------------------------------\n");
	   Sleep(5000);
	   goto plane;
	}
   

}
