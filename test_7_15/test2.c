#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};  //定义一个存放10个整数数字的数组
	printf("%d\n", arr[4]);  //数组的是通过下标访问某个元素，下标从0开始

	int s = 0;       //通过循环访问数组的所有元素     fn+f10可以进行调试
	while (s < 10)
	{
		printf("%d\n", arr[s]);
		s++;
	}

	return 0;
}




