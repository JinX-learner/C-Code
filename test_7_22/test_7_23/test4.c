#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
//模拟strlen函数，实现求出字符串的长度
int LENGTH(char* str)  //获取数组第一个元素的地址
{
	int count = 0;
	while (*str != '\0')//解引用数组的第一个元素进行循环判断不是文字结束标记
	{
		count++; //计算累加数量
		*str++;  //数组第一个元素往后移动累加，直到不是文字结束标记
	}
	return count;
}

*/

//使用递归调用，不创建临时变量实现字符串长度
// LENGTH("hello") 从数组的第一个元素的值开始判断是否是\0
//1+ LENGTH("ello")
//1+1 1LENGTH("llo")
//1+1+1 LENGTH("lo")
//1+1+1+1LENGTH("o")
//1+1+1+1+1 LENGTH("\0")
//5

int LENGTH(char* str)
{
	if (*str != '\0') 
	{
		return 1 + LENGTH(str + 1);  //str+1 第一个元素的地址加1 变成第二个
	}
	else    //如果遇到的第一个数组元素的地址就是\0  
	{
		return 0;
	}
}


int main()
{
	
	char arr[] = "hello";
	int len = LENGTH(arr);  //当数组为实参传递到形参的话，实际是传递的数组第一个元素的地址
	printf("%d\n", len);

	return 0;
}


