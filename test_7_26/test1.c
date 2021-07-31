#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//前置、后置++     前置、后置--

	int a = 10;
	//printf("%d\n", ++a); // 11
	printf("%d\n", a++);  // 10
	printf("%d\n", a);    //11



	int s = 5;
	int p = s++;  //后置++  先使用(先把s的值给p)，后++ (最后s再加1)  
	int m = ++s;   //前置++   先++，后使用

	printf("s=%d p=%d\n", s, p); //s=6  p=5
	printf("s=%d m=%d\n", s, m); //s=6  m=6

	//强制类型转换
	int a = (int)3.14;  //把3.14强制转换为int类型

	
	return 0;
}
