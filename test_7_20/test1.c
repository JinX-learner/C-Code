#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//求一个数n的阶乘
	
	int i;
	int n;
	int jc=1;
	printf("请输出一个数，可以算出这个数的阶乘:>");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		jc = jc * i;
	}
	printf("jc=%d\n",jc);

	return 0;
}