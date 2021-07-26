#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//goto语句  关机小程序
	char input[20] = { 0 };
	system("shutdown -s -t 60"); //设置60秒后自动关机

again:
	printf("请注意，电脑60秒后自动关机。如果输入我是猪，就停止关机。\n请输入：>");

	scanf("%s",input);

	if (strcmp("我是猪", input) == 0)  //比较两个字符串是否相等
	{
		system("shutdown -a"); //取消电脑关机

	}
	else
	{
		goto again;  //again是个符号  可以随意滥用的 goto语句和标记跳转的标号。
	}

	/*  用while循环实现关机小程序
	
	char input[20] = { 0 };
	system("shutdown -s -t 60"); //设置60秒后自动关机

	while(1){   设置条件为1  恒为真   一直循环
	printf("请注意，电脑60秒后自动关机。如果输入我是猪，就停止关机。\n请输入：>");

	scanf("%s",input);

	if (strcmp("我是猪", input) == 0)
	{
		system("shutdown -a"); //取消电脑关机
		break;   //跳出循环
	}
	
	}
	
	
	*/



	return 0;
}

