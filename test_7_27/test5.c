#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//指针和数组
	int arr[10] = { 0 };
	printf("%p\n",arr);     //数组的第一个元素的地址
	printf("%p\n", arr+1);  //数组的第一个元素的地址加1  加4个字节 访问第二个元素的地址

	printf("%p\n", &arr[0]);  //也是数组的第一个元素的地址
	printf("%p\n", &arr[0]+1); //数组的第一个元素的地址加1  加4个字节 访问第二个元素的地址

	printf("%p\n", &arr);   //整个数组的地址
	printf("%p\n", &arr+1); //整个数组的地址加1   再加一个数组 40个字节

	//通过指针来访问数组中的元素的地址

	int arr2[10] = { 0 };
	int* cs = arr2;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//printf("%p======%p\n", cs+i,&arr2[i]);  //两个地址的值是相等的
	}
	//通过指针向数组中的元素赋值
	for (i = 0; i < 10; i++)
	{
		*(cs + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n",arr2[i]);   //两个地址所指向的对象的值是相等的
		printf("%d\n", *(cs + i));
	}


	return 0;
}