#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{   // ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
	//��ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
	int a = 0;
	char password[20] = { 0 };
	
	for (a = 0; a < 3; a++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp("123",password)==0) //������==���ж������ַ����Ƿ����  Ҫʹ��strcmp���� ����ͷ�ļ�
		{
			printf("������ȷ");
			break;
		}
		else
		{
			printf("�������\n");
		}
		
	}
	if (3 == a)
	{
		printf("�������붼����");
	}



	return 0;
}