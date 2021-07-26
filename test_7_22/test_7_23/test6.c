#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//斐波那契数列：1,1,2,3,5,8,13....

//递归求第n的斐波那契数列   
//f(x){   x<=2    1
//        x>2     f(x-1)+f(x-2)  }

int FB(int x)
{
	if (x <= 2)
	{
		return 1;

	}
	else
	{
		return FB(x - 1) + FB(x - 2);  //前一个数+前两个数
	}
}

//函数求第n的斐波那契数列
int FB2(int x) 
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}

	return c;
}

int main()
{
	int i = 0;
	printf("请输入要求的数字:>");
	scanf("%d", &i);
	int ret = FB2(i);
	printf("%d\n", ret);

	return 0;
}
