#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test()
{
  static int b = 1;
	b++;
	printf("b=%d\n",b);
}


int main()
{
	//extern 关键字  用于声明外部符号  例如在另一个源文件里定义 int a=10;  全局变量
	// 	   在此源文件中引用外部变量的写法为  extern int a;  声明外部变量 
	//     打印输出   printf("a=%d\n",a);    输出10
	   //只要在另一个源文件中定义函数或变量，在此文件中使用都要声明外部符号extern
	   //  在此源文件中引用外部函数的写法为  extern int ADD(int,int);  声明外部函数

	/*
	static 关键字  修饰全局变量，改变了变量的作用域--让静态的全局变量只能在自己所在的源文件内部中使用，
	               出了源文件就没法再使用会报错
	  例如在另一个源文件里定义 static int a=10;  静态的全局变量
	      在此源文件中引用的写法为  extern int a;
		  打印输出运行会报错
     static 关键字  修饰函数，也改变了函数的作用域，准确的说是改变了函数的链接属性，
	                                                外部链接属性变成内部链接属性


	*/

	int a = 0;
	while (a < 5)
	{
		test( );
		a++;

	}






	return 0;
}





