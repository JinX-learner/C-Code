#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//给定两个数，求两个数的最大公约数  
	int a = 0;
	int b = 0;
	int r;

	scanf("%d%d",&a,&b);
     
	while (r = a % b)   // 辗转相除法
	{
		a = b;
		b = r;

	}
	printf("%d\n",b);


	/*
	//打印1~100之间所有3的倍数的数字
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

