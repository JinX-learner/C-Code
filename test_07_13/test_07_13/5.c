#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//转义字符--转变意思     用\来转移其他字符    例如\n 换行 

	printf("D:\data\test\todeStyles");  //如果要打印这个地址  \t会转移成水平制表符
	printf("\n");
	printf("D:\data\\test\\todeStyles"); //   \\用于表示一个反斜杠，防止它被解释为一个转义序列符。
	printf("\n");

	printf("%s\n","\"");    //      \"用于表示一个字符串内部的双引号
	printf("%c\n", '\'');   //      \'用于表示字符常量'
	

	return 0;
}




