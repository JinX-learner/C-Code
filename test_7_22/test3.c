#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//自定义函数：返回类型   函数名  函数参数  函数体

//写一个函数来交换两个函数的内容 ：用指针交换地址
void C(int* x ,int* y) //在函数内部通过指针变量操作外面的变量  形式参数(形参 )  
{    
	int tmp = 0;   //当实参传给形参的时候，形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的，
	tmp = *x;      //所以要通过指针变量地址的方法进行交换值。
	*x = *y;
	*y = tmp;      //实参的参数名和形参的参数名可以一致
}

int main()
{
	int a = 5;
	int b = 7;
	printf("a=%d b=%d\n", a, b);
	//传地址调用C函数：函数内部能够操作函数外部的变量，建立联系
	C (&a, &b);  //实际参数（实参） 实参可以是：常量、变量、表达式、函数等。必须要有确定的值
	//C (a, b);传值调用C函数：对形参的修改是不会改变实参，各有各自的存储空间
	
	printf("a=%d b=%d", a, b);

	/*
	只获取某个值使用传值调用
	从内部修改外部的变量使用传址调用
	*/

	return 0;
}




/*

int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 5;
	int b = 10;
	int max = MAX(a, b);
	printf("%d\n", max);

	return 0;
}
*/