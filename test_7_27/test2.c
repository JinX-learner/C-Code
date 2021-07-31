#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{
	//野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
	int a;//局部变量未初始化，默认是随机值
	int* p;//局部的指针变量未初始化，就被随机初始化
	int* k = NULL; //初始化没有值就赋值NULL，空指针  NULL---0  指针为NULL的话不能使用

	int x[10] = { 0 };
	int* y = x;  //指针变量y中存储的是数组的第一个元素的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*y = i;//给数组的每个元素赋值
		y++;  //按照地址依次递增
		//*y++=i;   也可以写成一条命令
	}



	return 0;
}