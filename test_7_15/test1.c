#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//自定义两个数相加的函数 
int ADD(int a, int b)      //返回值类型   函数名    函数参数及类型
{
	int z = a + b;      //函数体功能实现
	return z;          //返回值
}



//函数   自定义函数：自己定义设计的函数    库函数：例如输入输出函数
int main()
{
	
	int sum = ADD(5, 2); //调用函数   将z的值传给sum
	printf("%d\n", sum);


	return 0;
}








