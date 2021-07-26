#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//数组是一组相同类型元素的集合

    int arr[10];//创建一个整型数组，里面放10个元素。数组创建，[]中要给一个常量才可以，不能使用变量。

	//数组的初始化：在创建数组的同时给数组的内容一些合理初始值（初始化）

	int arr1[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
	char arr2[5] = { 'a',65 };//65对应的ascll码是A，是个字符类型
	char arr3[] = "asdfgh";  //不给数组大小，会根据初始化的值确定，字符串后面有结束标志，数组大小为7
	printf("%d\n", sizeof(arr3));
	//sizeof 计算arr3所占空间的大小，7个元素-char类型(占1个字节)    7*1=7
	//sizeof 计算变量、数组、类型的大小（单位：字节）,是个操作符
	printf("%d\n", strlen(arr3));
	//strlen  只能求字符串的长度，遇到\0停止，不包含文档结束标记\0    输出   6
	//strlen  是库函数，使用必须引用头文件
	printf("%d\n", sizeof(arr1)); //输出  40
	printf("%d\n", sizeof(arr2)); //输出  5


	char x[] = "abc";
	char y[] = {'a','b','c'};
	printf("%d\n", sizeof(x)); //输出  4
	printf("%d\n", sizeof(y)); //输出  3
	printf("%d\n", strlen(x));  //输出  3
	printf("%d\n", strlen(y)); //输出  随机数  直到遇到\0才

	//字符串会自动后面加\0, 字符不会
     return 0;
}