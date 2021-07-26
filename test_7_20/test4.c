#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h> //strlen的头文件
#include <Windows.h>  //Sleep的头文件
#include <stdlib.h>   //system的头文件

int main()
{
	//编写代码，演示多个字符从两端移动，向中间汇聚。

	char arr1[] = "welcome to world!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;  //获取最后一个字符的索引  strlen是字符串数据    或  sizeof(arr1)/sizeof(arr[0])-2  
	                               //-2是是个字符数组包括字符结束标记符号   
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000); //休息暂停1秒
		system("cls"); //system执行系统命令的一个函数    cls-清空屏幕
		left++;
		right--;
	}

	printf("%s\n", arr2);

	return 0;
}