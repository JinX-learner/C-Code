#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����������    �����Ķ�����main����֮�������һ��.h���ĵ���(����ͷ�ļ�#include "�ļ���.h")Ҫ������

int ADD(int x, int y);

int main()

{
	int a = 2;
	int b = 3;
	int s=ADD(a, b); //�����ĵ���
	printf("%d\n", s);
	return 0;
}
//�����Ķ���
int ADD(int x, int y)
{
	int z = x + y;
	return z;
}