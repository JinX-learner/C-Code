#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{   // 编写代码实现，模拟用户登录情景，并且只能登录三次。
	//（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。
	int a = 0;
	char password[20] = { 0 };
	
	for (a = 0; a < 3; a++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp("123",password)==0) //不能用==来判断两个字符串是否相等  要使用strcmp函数 引入头文件
		{
			printf("密码正确");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
		
	}
	if (3 == a)
	{
		printf("三次密码都错误");
	}



	return 0;
}