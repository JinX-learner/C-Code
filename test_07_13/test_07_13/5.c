#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//ת���ַ�--ת����˼     ��\��ת�������ַ�    ����\n ���� 

	printf("D:\data\test\todeStyles");  //���Ҫ��ӡ�����ַ  \t��ת�Ƴ�ˮƽ�Ʊ��
	printf("\n");
	printf("D:\data\\test\\todeStyles"); //   \\���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���
	printf("\n");

	printf("%s\n","\"");    //      \"���ڱ�ʾһ���ַ����ڲ���˫����
	printf("%c\n", '\'');   //      \'���ڱ�ʾ�ַ�����'
	

	return 0;
}




