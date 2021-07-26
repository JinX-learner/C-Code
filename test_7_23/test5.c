#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数求一个数的阶乘
int JC1(int x)
{
	int s = 0;
	int k = 1;
	for (s = 1; s <= x; s++)
	{
		k *= s;
	}
	return k;
}
//递归求一个数的阶乘   
//f(x){   x<=1    1
//        x>1     x*f(x-1)  }
int JC2(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else
	{
		return x * JC2(x - 1);
	}
}


int main()
{
	
	int i = 0;
	printf("请输入要求阶乘的数字:>");
	scanf("%d", &i);
	int ret = JC2(i);
	printf("%d\n", ret);

	return 0;
}
