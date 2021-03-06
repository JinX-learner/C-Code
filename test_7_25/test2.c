#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//计算都是补码形式，正数的原反补一样，负数计算要求补码，在补码的基础上进行计算

	//移(二进制)位操作符:  << 左移操作符     >> 右移操作符
	//正数的情况：
	int z = 2;    //int整型占4个字节32位      在内存中表示为30个0+10
	//左移操作符 移位规则：左边抛弃、右边补0
	int x = z << 1;  //左移位操作符(移动的是二进制位)    z向左移动1位，前面去掉一个0后面再补0，得到的十进制为4   >>右移位操作符
	// 右移操作符 移位规则：右边丢弃、左边用原该值的符号位填充
	int y = z >> 1;
	printf("%d\n", x);  //输出的是十进制数   4
	printf("%d\n", y);   //1
	
	//负数的情况：
	int k = -1;
	/*
	* 计算机中存储的是补码格式，输出的是原码-十进制数
	原:10000000000000000000000000001  
	反:11111111111111111111111111110  
	补:11111111111111111111111111111  在补码上进行移位计算，再回到反-原-十进制数输出
	*/
	int a = k << 1;
	int b = k >> 1;
	printf("%d\n", a);  //输出的是十进制数  -2
	printf("%d\n", b);  //-1


	return 0;
}