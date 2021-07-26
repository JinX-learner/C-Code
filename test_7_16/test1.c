#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define MAX 100  //#define 定义标识符常量  max就等于100


#define  BIG(x,y)    (x>y?x:y)      //#define定义宏   例如比较大小
#define  A(x,y)      (x+y)          //#define定义宏  两个数相加


int main()
{
	
	int a = MAX;
	printf("%d\n",a);

	int b = 5;
	int c = 10;
	int m = BIG(b, c);  // m=(b>c?b:c)
	printf("m=%d\n",m);

	return 0;
}

