#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//是素数返回1，不是素数返回0
int is_prime(int n)
{
	//2->n-1
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)  //偶数不可能是素数
			return 0;
	}
	return 1;

}


int main()
{
	//写一个函数判断100-200之间的素数
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}
	return 0;
}



/*
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//质数，又称素数。除了1和此整数自身外，无法被其他自然数整除的数
	//求100~200之间的素数
	int i = 0;
	int count = 0;
	for(i=100;i<=200;i++)
	{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)  //偶数不可能是素数
		{
			break;
		}
	}
	if (j==i)
	{
		printf("%d\n",i);
		count++;
	}

	printf("count=%d\n", count);

	}
	return 0;
}

*/