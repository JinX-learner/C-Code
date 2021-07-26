#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//getchar的使用  只输出数字字符
	int a = 0;
	while ((a = getchar()) != EOF)
	{
		if (a<'0'||a>'9')//输出的范围 0<a<9   按照ascll码只输出数字字符
		{
			continue;
		}
		putchar(a);
	}

	return 0;
}