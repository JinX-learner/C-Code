#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//    输入三个数按大到小输出
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d%d%d",&a,&b,&c);  // 假设格式中有, scanf("%d,%d,%d")  那么输入的间隔要为, 不是空格

	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}

	printf("%d %d %d \n", a, b, c);
	return 0;
}