#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//�������������������������Լ��  
	int a = 0;
	int b = 0;
	int r;

	scanf("%d%d",&a,&b);
     
	while (r = a % b)   // շת�����
	{
		a = b;
		b = r;

	}
	printf("%d\n",b);


	/*
	//��ӡ1~100֮������3�ı���������
	int a;
	int total=0;
	for (a=1;a<=100;a++)
	{
		if (a%3==0)
		{
			printf("%d\n",a);
		}
		 
	}
	*/
	return 0;

}

