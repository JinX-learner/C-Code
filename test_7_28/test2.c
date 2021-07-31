#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	/*
	题目：
	1.int i=1;
	  int ret=(++i)+(++i)+(++i);
	  printf("%d\n", ret);   正确的编译结果是程序错误   不同编译器的编译结果不一样
	   
	*/
	//2.
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr; //把arr数组强制转换成short*类型 放在指针变量p中 p只能访问arr中的两个字节
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;  //short类型的指针只能访问两个字节，这个循环运行4次，把前两个数组的值变成0
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);  //输出 0 0 3 4 5
	}

	//3.

	int a = 0x11223344; //a是十六进制的整数占四个字节   内存中存储为44332211
	char* pa = (char*)&a;//pa是char类型，只能访问a的一个字节，只能访问44
	*pa = 0;   //把44改为00
	printf("%x\n", a);  //输出 11223300

	//4.

	int x, y, z;
	x = 5;
	z = ++x;
	y = ++z, z++, ++x, x++;  //逗号表达式依次运算，最后取的是最后一个表达式的值
	//但是=赋值表达式的优先级高于逗号表达式，第一个逗号表达式是赋值给了y，剩下的逗号表达式是自增
	y += x++ + z;
	printf("x=%d y=%d z=%d", x, y, z); //x=9 y=23 z=8

	
	return 0;
}