#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//递归调用实现：接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：123，输出 1 2 3 .

void DY(int x)
{
	if (x > 9)  //条件判断要为2位数    递归调用之前必须要有条件判断，否则会死循环栈溢出；每次递归调用之后越来越接近这个限制条件
	{
		DY(x / 10);//递归调用 
	}

	printf("%d ", x % 10);

}


int main()
{
	unsigned  int s = 0;  //无符号数
	printf("请输入:>");
	scanf("%d", &s);

    DY(s);


	return 0;
}