#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{
	//�������  ����1/1 -1/2 +1/3 .....-1/100��ֵ
	int i;
	double sum = 0.0;  //double����   sum�洢�ķ�����С��
	int flag = 1;
	for (i = 1; i <= 100; i++)  
	{
		sum += flag * 1.0 / i; //����flag�ñ���������    1.0/i   �����1/i����   ��Ϊ������ֵ��С��
		flag = -flag;  //����flagֵ�ĸı��ñ���������
	}

	printf("%lf\n", sum);
	return 0;
}