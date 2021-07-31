#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//计算都是补码形式，正数的原反补一样，负数计算要求补码，在补码的基础上进行计算

	//(二进制)位操作符  
	/*
	&按位与    两个数的二进制同为1时结果为1，否则为0
	|按位或    两个数的二进制只要有一个为1或都为1结果为1，否则为0
	^按为异或  两个数的二进制两个相同结果为0，不同为1
	*/

	int q = 5;
	int w = 3;
	int r = 5 & 3;   //  101 & 011    001为1    101 | 011    111为3     101 ^ 011  100为4
	printf("%d\n", r);  //输出的结果为二进制转换过的十进制数值  

	/*
	//交换两个数的值
	int a = 3;
	int b = 5;
	printf("a= %d\n", a);
	printf("b=%d\n", b);
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	printf("a= %d\n", a);
	printf("b= %d\n", b);
	*/

	//不允许创建一个临时变量来交换两个数的值
	int a = 3; //011
	int b = 5; //101
	printf("a= %d\n", a);
	printf("b=%d\n", b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a= %d\n", a);
	printf("b=%d\n", b);


	return 0;
}