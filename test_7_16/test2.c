#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{     /*
	  指针(内存)：内存被划分为一个个小的内存单元，每个内存单元的大小是1个字节。
	  为了能够有效的访问到内存的每个单元，就给内存单元进行了编号，这些编号被称为内存单元的地址。
	  例如：int a=10;    表示向内存申请4个字节给a，a就占了4个内存单元。
	  */
	
	int a = 10;  //表示向内存申请4个字节给a，a就占了4个内存单元。
	printf("%p\n", &a);  //%p  输出地址格式的数据    &a取a的地址   输出的地址是十六进制的数据 地址不是固定的会变化
	//指针变量：是用来存储地址的一种变量    
	int* b = &a;   //int*  指针变量类型   指针变量名  定义这种指针变量  后面赋值为某个变量的地址(十六进制)
	printf("%p\n", b);

	 *b = 20;    //* 是解引用操作符，指针变量b中存储的是a的地址，那*b是对b进行解引用，通过地址找到的对象是变量a  *b=a=20
	printf("%d\n",a);

	//指针变量的大小在win32位平台是4个字节，win64位平台是8个字节。  不管指针变量是什么类型
	printf("%d\n", sizeof(b));   //输出为4  单位字节

	return 0;
}
