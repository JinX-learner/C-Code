#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//goto���  �ػ�С����
	char input[20] = { 0 };
	system("shutdown -s -t 60"); //����60����Զ��ػ�

again:
	printf("��ע�⣬����60����Զ��ػ������������������ֹͣ�ػ���\n�����룺>");

	scanf("%s",input);

	if (strcmp("������", input) == 0)  //�Ƚ������ַ����Ƿ����
	{
		system("shutdown -a"); //ȡ�����Թػ�

	}
	else
	{
		goto again;  //again�Ǹ�����  �����������õ� goto���ͱ����ת�ı�š�
	}

	/*  ��whileѭ��ʵ�ֹػ�С����
	
	char input[20] = { 0 };
	system("shutdown -s -t 60"); //����60����Զ��ػ�

	while(1){   ��������Ϊ1  ��Ϊ��   һֱѭ��
	printf("��ע�⣬����60����Զ��ػ������������������ֹͣ�ػ���\n�����룺>");

	scanf("%s",input);

	if (strcmp("������", input) == 0)
	{
		system("shutdown -a"); //ȡ�����Թػ�
		break;   //����ѭ��
	}
	
	}
	
	
	*/



	return 0;
}

