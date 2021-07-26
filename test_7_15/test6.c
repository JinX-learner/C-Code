#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//关系操作符   > >=   < <=    !=用于测试不相等   == 用于测试相等
	
	//逻辑操作符  用来判断真假  0-假   非0-真-为1   &&逻辑与   ||逻辑或
	int a = 3;   
	int b = 5;
	int c = a && b;  //3非0为1  5非0为1    同都非0为真  结果为1
	printf("%d\n", c);
	/*
	int a = 3;   
	int b = 0;
	int c = a || b;  //3非0为1  5为0为0    有一个为真就为真  结果为1
	printf("%d\n", c);
	
	*/

	//条件操作符或三目操作符   逻辑表达式?   值1：值2      逻辑表达式为T就执行值1，F就执行值2

	int d = 100;
	int e = 5;
	int max = 0;
	max = (d > e ? d : e);  //判断两个数的较大值
	printf("%d\n",max);


	//关键字与变量名不能冲突   unsigned 无符号
	//typedef  类型重定义  给类型的起个别名
	typedef int  i;  //将int起个别名为i
	int num = 5;
	i num2 = 3;     //i 与int  类型一样



	return 0;
}



