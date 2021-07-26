#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include "add.h"   //引入函数的声明文件

int main()
{
	int a = 5;
	int b = 10;
	int sum = ADD(a, b);
	printf("%d\n",sum);


	return 0;
}


