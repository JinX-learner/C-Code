#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//switch ���֧����ʹ��  ����ȷ����int���͵�ֵ

	int day = 0;
	printf("������1~5֮���һ����:>");
	scanf("%d",&day);

	switch (day)  //switch (int���͵�����)  ���򱨴�
	{
	case 1:    //case ������int���ͳ������ʽ��int���͵ĳ���ֵ :
		printf("����һ");
		break;  //��������ʵ�ַ�֧,û�еĻ���ִ�к�������
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	default:   //���϶���ƥ��Ļ�������defaultִ����������� ������ʾ  
		        //�粻��Ҫ��ʾ��default����ֻдbreakҲ�ɻ���ֱ�Ӳ���default   
		printf("�������");
		break;
	}
	/*
	case �����break��һ����Ҫ��

	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	     printf("������");   //��������1~5֮�����һ���������������
		 break;
    }
	
	
	*/

	return 0;
}

