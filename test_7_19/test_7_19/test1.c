#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>  //用于输入输出语句 scanf getchar  printf putchar 

int main()
{
	//getchar()的使用
	int a ;
	int s;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s",password); //输入密码并保存在password数组中
	/*
	数据缓冲区：
	密码输入： 123  ABC  \n(再回车)
	
	
	*/
	while ((a=getchar()) !='\n')//判断如果getchar()是密码的末尾的回车键，就跳出循环，不是的话就一直循环,直到数据缓冲区的\n，
		                          //数据缓冲区为空，让下一个getchar接收新的输入
	{
		;
	}
	printf("请确认是否收到(Y/N):>");
	s = getchar(); //获取数据缓冲区的字符Y或N
	if ('Y' == s)
	{
		printf("OK");
	}
	else
	{
		printf("不行");
	}


	return 0;
}
