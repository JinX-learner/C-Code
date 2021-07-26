#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//输出1~100之间的奇数   奇数和2500    偶数和2550


int main()
{
	int a =1;
	int sum = 0;
	while (a <= 100)
	{
		if (a % 2 ==1)
		{
			printf("a=%d\n", a);
			sum += a;
		}
		a++;
		

	}
	printf("1~100之间的奇数和：%d\n",sum);

	return 0;
}
