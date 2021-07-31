#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//条件操作符（三目运算符）
	/*
	int a = 5;
	int b = 7;
	int max = (a>b? a:b);
	printf("%d\n",max);
	*/
	//逗号表达式，就是用逗号隔开的多个表达式。 逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果。
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);  //a=12   b=13
	printf("%d\n", c); //13

	int d;
    if (a = b + 1, c = a / 2, d > 0)   //真正判断是最后的d是否大于0



	return 0;
}




