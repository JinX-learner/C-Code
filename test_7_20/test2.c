#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a;
	int b;
	int jc=1;
	int sum = 0;
	//��1~3�Ľ׳����֮��  ����һ
	for (a=1;a<=3;a++)
	{
		jc = jc * a;
		sum = sum + jc;
	}

	printf("%d\n", sum);



	/*
	int a;
	int b;
	int jc;
	int sum=0;
	//��1~10�Ľ׳����֮��  ������
	for (a=1;a<=10;a++)    //���forѭ��������Χ
	{
		  jc = 1;    //��jcÿ�εĳ�ʼֵΪ1 ���������
		for (b = 1; b <= a; b++) //�ڲ�forѭ����һ�����Ľ׳�
		{
			jc = jc * b;
		}
		sum = sum + jc;

	}

	printf("%d\n", sum);
	*/

	return 0;
}
