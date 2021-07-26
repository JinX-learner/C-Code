#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
//函数分为库函数(C语言本身提供)和自定义函数。它负责完成某项特定任务，具备相对的独立性。一般会有输入参数并有返回值
//使用库函数必须引用相关的头文件

	char arr1[] = {"hello"};
	char arr2[] = {"##########"};
	strcpy(arr2,arr1);  //字符串拷贝  第一个参数是目的地，第二个参数是源头地  拷贝会把/0也给拷贝过去，所以会覆盖
	//注意：字符串拷贝要保证源头比目的地的长度要小，否则会溢出
	printf("%s\n",arr2);


	char x[] = { "hello world" };
	memset(x, '*', 5); //内存设置  第一个参数是要设置的字符串对象名   第二个是设置成什么字符  第三个是设置几个数字
	printf("%s\n", x);


	return 0;
}

