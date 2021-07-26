#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sqrt(int arr[], int size)
{
	//确定冒泡排序的趟数为长度-1
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
	int flag = 1; //假设这一趟的要排序的数组已经排过序

		int j = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])  //决定数组里的元素是升序(>)还是降序(<)
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 0; //重新赋值表示这个数组本身不是有序数组，已经重新排序了
			}
		}
	if (flag == 1)//说明这个数组不需要排序，本身就是有序数组
	{
		break;   //break的使用是终止循环和在switch  ，这个break是跳出外层的for循环
     }

	}

}

int main()
{
	//数组名作为函数参数,实际上只是把数组的首元素的地址传递过去了。 arr==&arr[0]
	//冒泡排序(升序)函数:通过将函数数组两两比较，一个整形数组排序。 

	int arr[] = {9,8,7,6,4,3,2,5,1,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sqrt(arr, size);  //数组长度要先在main()函数中算好再传参数

	for (i = 0; i < size; i++)//将排序的结果进行输出
	{
		printf("%d", arr[i]);
	}

	return 0;
}