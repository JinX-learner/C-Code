#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//打印1000年到2000年之间的闰年：    四年一闰   百年不闰   四百年再闰
	int i = 0;
	int sum = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i%4==0 && i%100!=0 ||i%400==0) //判断闰年：1.能被4整除并且不能被100整除是闰年 
			                                //          2.能被400整除是闰年
		{
			printf("%d\n",i);
			sum += 1;
		}
   }
	printf("sum=%d\n",sum);
	return 0;
}

