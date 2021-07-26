#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1.static 关键字  修饰局部变量，局部变量的生命周期变长
//2.static 关键字  修饰全局变量，改变了全局变量的作用域
//3.static 关键字  修饰函数，也改变了函数的作用域   

void test()  //void 无类型   test（） 无参数接收   函数体里面的变量是局部变量  局部变量的作用域是{ }
{
   static int b = 1;   //b是一个静态的局部变量
	b++;
	printf("b=%d\n", b); //输出结果a=2  4 3 4 5 6   因为添加了static改变了生命周期，保留原先的值，否则不加static就会
	                                  //输出b=2 2 2 2 2
}

int main()

{
	int a = 0;
	while (a < 5)
	{
		test();//调用test函数 里面没有参数传递，与上面一一对应
		a++;
	}

	return 0;
}







