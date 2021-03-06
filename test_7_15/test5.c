#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数求两个数的较大值
int MAX(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
	
}

int main()
{
	int k = MAX(5, 9);
	printf("%d\n", k);

	//单目操作符   ~ 对一个数的二进制按位取反

	int a = 0; 
	int b = ~a;
	/*
	  a为32bit     存储在内存中的二进制序列  00000000000000000000000000000
	  ~a按二进制进行取反为  1111111111111111111111111111
	  负数在内存中存储的为补码  第一位是符号位  0-正  1-负
	  正数  原-反-补  一致
	  负数  原-反-补：符号位不变，其他取反为反码；符号位不变在原码基础上加1为补码。
	 补 1111111111111111111111111111
	 反 1111111111111111111111111110
	 原 10000000000000000000000000001
	 十进制数值   -1
	*/

	printf("%d\n",b);   //输出结果为-1   输出为原码

	//前置、后置++     前置、后置--

	int s = 5;
	int p = s++;  //后置++  先使用(先把s的值给p)，后++ (最后s再加1)  
	int m = ++s;   //前置++   先++，后使用
	               
	printf("s=%d p=%d\n",s,p); //s=6  p=5
	printf("s=%d m=%d\n",s,m); //s=6  m=6

	//(类型) 强制类型转换
	int h = (int)3.14;   //3.14是double类型，如果要转int类型可在前面强制类型转换

	

	return 0;
}



