#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//输出乘法口诀表

	int i = 0;
	int j = 0;
	
	for (i = 1; i <=9; i++) //行   共9行
	{
		for (j = 1; j <= i; j++)  //列
		{ 
			printf("%d*%d=%-2d ",i,j,i*j);  //%-2d  -2向左两位对齐  2-向右
		 }
		printf("\n"); //换行
	}



	return 0;
}