#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//��ϵ������   > >=   < <=    !=���ڲ��Բ����   == ���ڲ������
	
	//�߼�������  �����ж����  0-��   ��0-��-Ϊ1   &&�߼���   ||�߼���
	int a = 3;   
	int b = 5;
	int c = a && b;  //3��0Ϊ1  5��0Ϊ1    ͬ����0Ϊ��  ���Ϊ1
	printf("%d\n", c);
	/*
	int a = 3;   
	int b = 0;
	int c = a || b;  //3��0Ϊ1  5Ϊ0Ϊ0    ��һ��Ϊ���Ϊ��  ���Ϊ1
	printf("%d\n", c);
	
	*/

	//��������������Ŀ������   �߼����ʽ?   ֵ1��ֵ2      �߼����ʽΪT��ִ��ֵ1��F��ִ��ֵ2

	int d = 100;
	int e = 5;
	int max = 0;
	max = (d > e ? d : e);  //�ж��������Ľϴ�ֵ
	printf("%d\n",max);


	//�ؼ�������������ܳ�ͻ   unsigned �޷���
	//typedef  �����ض���  �����͵��������
	typedef int  i;  //��int�������Ϊi
	int num = 5;
	i num2 = 3;     //i ��int  ����һ��



	return 0;
}



