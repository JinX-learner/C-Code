#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一个函数，每调用一下这个函数，num的值就增加1   使用传址调用函数

void ADD(int* p)
{
	(*p)++;   //指针变量累加++  要使用括号包围  优先级


}



int main()
{
	int num = 0;
	ADD(&num);
	printf("num=%d\n", num);
	ADD(&num);
	printf("num=%d\n", num);
	ADD(&num);
	printf("num=%d\n", num);
	return 0;
}




