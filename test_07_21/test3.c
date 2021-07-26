#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{
	//分数求和  计算1/1 -1/2 +1/3 .....-1/100的值
	int i;
	double sum = 0.0;  //double类型   sum存储的分数是小数
	int flag = 1;
	for (i = 1; i <= 100; i++)  
	{
		sum += flag * 1.0 / i; //利用flag让变正数或负数    1.0/i   如果是1/i不行   因为分数的值是小数
		flag = -flag;  //利用flag值的改变让变正数或负数
	}

	printf("%lf\n", sum);
	return 0;
}