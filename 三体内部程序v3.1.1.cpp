#include<stdio.h>
#include<windows.h>
#include <string.h> 
#include<winuser.h>

//Copyright (c)  2024 RCX.All Rights Reserved.//
//Copyright (c)   2023-2024 RCX��������Ȩ��//
int main()
{   
    plane:
	system("title ����������֯��ETO���ڲ�����  �汾��V3.1.1");//����//
	system("color F0");
	printf("��������������������=������=��?=��=?��=������=��������������������\n");
	printf("��������������������=��ֹһ�з��ѣ������������һ��---------------------------\n");
	int huida=MessageBox(NULL,"�벻Ҫ���������κ����룬���򽫵�����Ϸ������","��ʾ",MB_YESNO);
	if(huida==IDYES){
	MessageBox(NULL,"лл��ϣ�","��ʾ",MB_OK);	
	}
	
    else{
		goto plane;
	}
    
	int a, b, c;
    ShellAboutA(NULL,"ETO�ڲ�����V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.\nCopyright (c)  2023-2024 RCX��������Ȩ��", NULL);//����Ȩ����//	
    huida=MessageBox(NULL,"Copyright (c)  2024 RCX.All Rights Reserved�������ذ�Ȩ","��ʾ",MB_YESNO);
	if(huida==IDYES)
	MessageBox(NULL,"лл��ϣ�","��ʾ",MB_OK);
	else
	goto plane;
	printf("��ӭ�������\n�ó���ΪETOר�á�\n");	//����//
    printf("���������룺");
    scanf("%d", &a);//ʵ�����빦��//

    printf("��ѡ�����ԣ���Ŀǰ��֧���У��գ�Ӣ,���Ĺ����ԣ�\n");//����//
    printf("����룺1.(����)��2.(�ձ��Z)��3.(English)��4.��������ڧ��Ĺ�����\n");//����//
    printf("��ץ��ѡ�����ԣ�����������ʾ��󣬽���3�������\n");//����//
    printf("\n");
    scanf("%d", &c);
    Sleep(5000);
	system("cls");
    if(a==114514)
	{
		if (c==-1)
		{
			printf("---------------------------------\n|        ������־��             |\n|        1:�޸���֪bug          |\n|        2:��������˹��         |\n|        ��˾��ETO&��������A.L. |\n---------------------------------\n");
			Sleep(5000);
		    system("cls");
			Sleep(3000);
			goto plane;
		}                                              
	    else if (c==1)//����//
		    {
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
				 Sleep(3000);
				 ShellAboutA(NULL,"ETO�ڲ�����V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.\n(c)2023-2024 RCX��������Ȩ��", NULL);//����Ȩ����//		
			     return 0;
			}
				
	    
	    
	    else if (c==2)//����//
	       {
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
				 Sleep(3000);
				 ShellAboutA(NULL,"ETO�ڲ�����V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
				 return 0;
		    }
		else if (c==3)//����//
		    {
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
				Sleep(3000);
				ShellAboutA(NULL,"ETO�ڲ�����V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);
				return 0;	
			} 
			else if (c==4)//����//
			    {
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
					 Sleep(3000);
					 ShellAboutA(NULL,"ETO�ڲ�����V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
					  return 0;
			    }
			   
		else if (c==0)
				{
				   printf("----------------------------------------------\n|        �����ˣ�RCX                         |\n|        RCX��Ȩ����                         |\n|        �汾��V2.0.0                        |\n|        ��˾��ETO&��������A.L.              |\n|Copyright (c)  2024 RCX.All Rights Reserved.|\n----------------------------------------------\n");
				   printf("��չʾ5��󷵻�������\n");
				   Sleep(5000);
				   system("cls");
				   Sleep(1000);
				   goto plane;
				   ShellAboutA(NULL,"ETO�ڲ�����V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.", NULL);	
				}
			}
	
		else if(a!=114514)
		{
				printf("�������!\n�ѥ���`�ɤ��g�`�äƤ���!\nWrong password!\n");
			    printf("\n");
		        printf("1.������������\n(�ѥ���`�ɤ�����������)\n(Re-enter your password)\n2.����1���������������\nPress any key except 1 to end the programn\n1����Υ��`��Ѻ���ƥץ�����K�ˤ��ޤ�n\n");
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
				  ShellAboutA(NULL,"�����ڲ�����V3.1.1","Copyright (c)  2024 RCX.All Rights Reserved.\nCopyright(c)2023-2024 RCX��������Ȩ��", NULL);//����Ȩ����//	
				  return 0;	
			}
		} 
	
    
		
	}          	 		 	
