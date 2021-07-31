#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//指针:通过指针能找到为以它为地址的内存单元。
	//指针是个变量，存放内存单元的地址（编号）。  指针==地址   一个指针对应一个地址
	//一个内存单元的大小是一个字节。指针的大小在32位平台是4个字节，在64位平台是8个字节。
	int a =5 ; //在内存中开辟一块空间  4个字节
	int* p = &a;  //这里我们对变量a，取出它的地址，可以使用&操作符。   
				  //将a的地址存放在p变量中，p就是一个指针变量。

	//指针类型：int*、char*、float*......指针的大小在32位平台是4个字节
	printf("%d\n", sizeof(char*)); //4
	printf("%d\n", sizeof(long*));  //4
	printf("%d\n", sizeof(double*)); //4

	//指针类型解引用的区别：指针的类型决定了指针进行解引用能访问空间的大小。
	int x= 0x11223344;
	int* y = &x;
	//char* z = &x;
	*y = 0;  //char*的指针解引用就只能访问一个字节，而int*的指针的解引用就能访问四个字节。
	
	/*
	int* y;     *y 能够访问4个字节
	char* y;   *y 能够访问1个字节
	double* y;   *y 能够访问8个字节
	*/

	//指针+ -整数：指针的类型决定了指针向前或者向后走一步有多大（步长）
	int n = 10;
	int* n1 = &n;
	//char* n2= &n;
	printf("%d\n", n1);  //
	//printf("%d\n", n2);  //两个地址一样

	printf("%d\n", n1+1);  //n1的地址加4个字节
	//printf("%d\n", n2+1);  //n2的地址加1个字节

	/*
	int* y;    y+1 ->4
	char* y;   y+1 ->1
	double* y;  y+1 ->8
	*/
	return 0;
}


