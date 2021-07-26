#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	// do while 循环的使用  循环体代码至少执行1次  后判断
	int i=1;
	do
	{
		if (5 == i)
			continue;   //输出 1 2 3 4 死循环
		printf("%d\n",i);
		i++;
	} while (i<=10);

	return 0;
}