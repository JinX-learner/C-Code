#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//函数的递归：直接或间接调用自身的一种方法。递归的主要思考方式在于：把大事化小
//内存包括：栈区(局部变量、函数形参、函数调用)、堆区(动态开辟的内存)、静态区(全局变量、static修饰的变量)
int main()

{
	printf("haha\n");
	main();     //最简单的递归调用  无条件的递归调用会实现死循环输出haha    递归的常见错误：stack overflow（栈溢出）

	return 0;
}
