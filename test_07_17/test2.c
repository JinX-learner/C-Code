#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//���1~100֮�������   ������2500    ż����2550


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
	printf("1~100֮��������ͣ�%d\n",sum);

	return 0;
}
