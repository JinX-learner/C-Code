#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//��ӡ1000�굽2000��֮������꣺    ����һ��   ���겻��   �İ�������
	int i = 0;
	int sum = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i%4==0 && i%100!=0 ||i%400==0) //�ж����꣺1.�ܱ�4�������Ҳ��ܱ�100���������� 
			                                //          2.�ܱ�400����������
		{
			printf("%d\n",i);
			sum += 1;
		}
   }
	printf("sum=%d\n",sum);
	return 0;
}

