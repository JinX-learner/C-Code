#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//C语言是一门结构化的程序设计语言   结构化：顺序、选择(if switch)、循环结构（while dowhile for）。

int main()

{
	//单分支语句
	//int age = 10;
	//if (age < 12)
	//{
		//printf("O(∩_∩)O哈哈~");
	//}

	//双分支语句
	//if (age < 2)
	//{
		//printf("年龄较小");
	//}
	//else
	//{
		//printf("青少年");
	//}

	//多分支语句
	/*
	if (age < 2) 
	{
		printf("小");
	}
	else if (10 <= age && age < 20)
	{
		printf("中");
	}
	else if (20 <= age && age < 40)
	{
		printf("大");
	}

	else
	{
		printf("较大");
	}
	*/
	
	//悬空else   未加{}结构体的话， 用代码块进行分割   else与未匹配的最近的if进行匹配

    //int a = 1;
	//int b = 2;
	//if (a == 0)
	//{
	//	if(b==2)
	//	printf("^_^");
	//}
	//else
	//{
	//	printf("hh");
	//}

	int a = 4;
	if (a=5)  //注意  ==为是否相等   =为重新赋值
	{
		printf("o(*￣︶￣*)o");
	}

	int b = 2;
	if (5 == b)
	{
		printf("注意把常量放在==的左边，把变量放在==的右边");
	}



	return 0;
}



