#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a;
	int b;
	int jc=1;
	int sum = 0;
	//求1~3的阶乘相加之和  方法一
	for (a=1;a<=3;a++)
	{
		jc = jc * a;
		sum = sum + jc;
	}

	printf("%d\n", sum);



	/*
	int a;
	int b;
	int jc;
	int sum=0;
	//求1~10的阶乘相加之和  方法二
	for (a=1;a<=10;a++)    //外层for循环决定范围
	{
		  jc = 1;    //让jc每次的初始值为1 不叠加相乘
		for (b = 1; b <= a; b++) //内层for循环求一个数的阶乘
		{
			jc = jc * b;
		}
		sum = sum + jc;

	}

	printf("%d\n", sum);
	*/

	return 0;
}
