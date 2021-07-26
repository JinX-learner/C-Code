#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)    //switch允许嵌套使用
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;  //内层的switch跳出，可是case3没有break，所以会继续执行到case4
		}
	case 4:
		m++;
		break;
	default:
		break;
	}

	printf("m=%d n=%d \n",m,n);  //m=5  n=3
	return 0;

}

