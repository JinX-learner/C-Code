#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//������������  + - * / %
	int x = 5 / 2;  //���������   ��Ϊ��int���ͣ������ͱ������������ͣ������������2
	printf("%d\n", x);
    double a = 5 / 2.0; //Ҫ���С�����ͣ�Ҫ��֤������double���ͣ������ͱ�������һ����С��
	printf("%lf\n", a);

	int y = 5 % 2;  //ȡģ(ȡ����)ֻ�ܶ�int���Ͳ��������ܸ����͡�
	printf("%d\n", y);

	//



	return 0;
}