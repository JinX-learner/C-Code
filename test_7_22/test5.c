#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//д�������ж�1000~2000֮�������
int YY(int  x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		return 1;
	else
		return 0;
}


int main()
{    
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (YY(i) == 1) {
			printf("%d\n",i);
		}
	}
	
	return 0;
}