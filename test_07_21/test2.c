#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{
	//1~100之间的数字中出现了多少个数字9

	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9) //求个位
		{
			count++;
			printf("%d\n", i);
		}
		if (i / 10 == 9) //求十位
		{
			count++;
			printf("%d\n", i);
		}
		
	}
	
	printf("%d\n",count);
	return 0;
}