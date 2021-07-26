#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//函数的嵌套调用：在一个函数中调用另一个函数   套娃   
	//函数的链式访问：把一个函数的返回值作为另外一个函数的参数。
	int a = 13;
	printf("%d\n", a);
	printf("%d\n", 13); //链式访问 与上述结果一致  

	//一个printf是打印参数值，多个printf 嵌套是输出打印的字符的个数
	printf("%d", printf("%d", printf("%d", 43)));  //输出4321  
		

	
	return 0;
}

