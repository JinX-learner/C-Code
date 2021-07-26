#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//一维数组在内存中的存储:数组在内存中是连续存放的，由低地址向高地址，每个地址相差固定的字节
	int i = 0;
	int arr2[] = { 1,2,3,4,5 };
	int size = sizeof(arr2) / sizeof(arr2[0]);
	for (i = 0; i < size; i++)
	{
		printf("&arr2[%d]=%p\n",i, &arr2[i]);  //地址是十六进制存储  0~9  A~F  int类型连续递增4个字节
	}



	 

	return 0;
}