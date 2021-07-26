#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	/*
	if (12)  //非0为真   if(逻辑表达式)   
	{
		printf("hehe");  //输出hehe
	}
	*/
	
	//while (12)  //非0为真     while(逻辑表达式)
	//{
		//printf("haha\n");   //一直循环输出haha    条件恒为真   为死循环
	//}

	int a = 0;
	while (a <=10)
	{
		a++;
		if (5 == a)
		{
			continue; //continue是终止本次循环中后面的代码，后面的代码不执行，跳转到循环的判断代码,判断是否下一次循环，不改变a++位置会死循环
			         //换成break的话  会输出1234跳出循环
		}
		printf("%d\n",a);
		
	}
	/*
	while中的break是用于永久终止循环的。
	continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
	而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。
	
	*/


	return 0;
}


