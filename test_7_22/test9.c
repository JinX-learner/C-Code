#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//函数的声明    函数的定义在main方法之后或在另一个.h的文档中(引入头文件#include "文件名.h")要有声明

int ADD(int x, int y);

int main()

{
	int a = 2;
	int b = 3;
	int s=ADD(a, b); //函数的调用
	printf("%d\n", s);
	return 0;
}
//函数的定义
int ADD(int x, int y)
{
	int z = x + y;
	return z;
}