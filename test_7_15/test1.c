#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�Զ�����������ӵĺ��� 
int ADD(int a, int b)      //����ֵ����   ������    ��������������
{
	int z = a + b;      //�����幦��ʵ��
	return z;          //����ֵ
}



//����   �Զ��庯�����Լ�������Ƶĺ���    �⺯�������������������
int main()
{
	
	int sum = ADD(5, 2); //���ú���   ��z��ֵ����sum
	printf("%d\n", sum);


	return 0;
}








