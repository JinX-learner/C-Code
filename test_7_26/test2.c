#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test1(int arr[]) {
	printf("%d\n", sizeof(arr)); //输出  4  
	//arr传输的是数组的第一个元素的地址，本质上是一个指针，指针的大小在win32是4个字节
}
void test2(char ch[]) {
	printf("%d\n", sizeof(ch)); //输出  4
	//ch传输的是数组的第一个元素的地址，本质上是一个指针，指针的大小在win32是4个字节
}


int main()
{    int arr[10] = {0};  
     char ch[10] = {0};   
    printf("%d\n", sizeof(arr)); //输出  40
    printf("%d\n", sizeof(ch)); //输出  10
	test1(arr);    
	test2(ch);    
	return 0;
}