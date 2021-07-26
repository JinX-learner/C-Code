#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a;
	int b;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("hehe\n");  //  10*10 ==100   外层循环1次  内层循环10次  输出100个hehe
        //如果两个for循环的初始化都不写的话，会输出10个hehe，第一次循环完b=10 内层循环直接跳出
		}
	}
	/*
	int x,y;      ,逗号表达式分割多个变量
	for(x=0,y=0; x<2 && y<5;  x++,y++)  带两个变量的for循环
	{
	  printf("hehe\n");   会输出两个hehe
	
	}
	
	以下循环几次？
	int i;
	int j;
	for(i=0,j=0; i=0 ; i++,j++)
	{
	    i++
	}
	循环0次  第二个为条件判断i=0为赋值  不是相等==   其次0-假
	         如果条件判断写成i=1 非0-真 那么这个程序就是死循环
	*/


	return 0;
}