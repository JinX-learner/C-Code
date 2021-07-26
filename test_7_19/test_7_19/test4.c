#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int i ;
	for (i = 0; i < 5; i++)  //使用前闭后开的写法   0~4   条件一般用<  不是<=
	{
		printf("%d\n", arr[i]);
	}

	/*
	for( ; ; )     for循环的初始化、条件判断、累加调整都不写的话，是可以的
	{               但是 如果条件判断不写的话，那就是恒为真  会死循环  一直输出
	printf("hehe\n");
	}
	*/

	return 0;
}
