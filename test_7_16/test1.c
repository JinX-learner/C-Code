#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define MAX 100  //#define �����ʶ������  max�͵���100


#define  BIG(x,y)    (x>y?x:y)      //#define�����   ����Ƚϴ�С
#define  A(x,y)      (x+y)          //#define�����  ���������


int main()
{
	
	int a = MAX;
	printf("%d\n",a);

	int b = 5;
	int c = 10;
	int m = BIG(b, c);  // m=(b>c?b:c)
	printf("m=%d\n",m);

	return 0;
}

