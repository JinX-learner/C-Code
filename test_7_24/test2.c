#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	// 数组是使用下标来访问的，下标是从0开始    []-下标引用操作符
	char arr[] = "abcdef";
	int i = 0;
	for (i = 0; i <6; i++)  //for (i = 0; i <strlen(arr); i++)   只能字符串数组可以
	{
		printf("%c\n", arr[i]);
	}

	//数组的大小可以通过计算得到  除了字符类型会包含\0  其他用sizeof求大小
	int arr2[] = {1,2,3,4,5};
	int size = sizeof(arr2) / sizeof(arr2[0]);
	for (i = 0; i < size; i++)  
	{
		printf("%c\n", arr2[i]);
	}


	return 0;

}