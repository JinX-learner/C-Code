#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//��������������Ŀ�������
	/*
	int a = 5;
	int b = 7;
	int max = (a>b? a:b);
	printf("%d\n",max);
	*/
	//���ű��ʽ�������ö��Ÿ����Ķ�����ʽ�� ���ű��ʽ��������������ִ�С��������ʽ�Ľ�������һ�����ʽ�Ľ����
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);  //a=12   b=13
	printf("%d\n", c); //13

	int d;
    if (a = b + 1, c = a / 2, d > 0)   //�����ж�������d�Ƿ����0



	return 0;
}




