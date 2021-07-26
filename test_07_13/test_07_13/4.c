#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>   //使用strlen()要引入

int main()
{
	//字符串类型的使用  存储在数组中  \0作为字符串的结束标志！
	char arr1[] = "abc";//  将"abc"赋给字符数组
	//"abc"---'a','b','c','\0'   '\0'的值为0  是字符串的结束标志，不算字符串内容
	printf("%s\n",arr1);  //%s打印字符串格式的数据


	
	char arr2[] = { 'a','b','c','\0'};  //单独赋值的话要手动添加一个'\0'结束标志，只有遇到'\0'才会结束，否则乱码
	printf("%s\n", arr2);

	char arr3[] = "abc";
	printf("%d\n", strlen(arr3));  //strlen --string length  字符串长度  输出为3

	char arr4[] = { 'a','b','c' };
	printf("%d\n", strlen(arr4)); //输出为一个随机值，因为没有添加结束标志

	//更改后为以下     可见'\0'的重要性
	char arr5[] = { 'a','b','c','\0'};
	printf("%d\n", strlen(arr5));

	return 0;
}


