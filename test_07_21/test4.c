#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	//10数字  求其中的最大值
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	int max = arr[0];  //让max赋值为数字的第一个值，为了避免数组里的为负数
	int size=sizeof(arr)/sizeof(arr[0]);
	for (i = 1; i < size; i++) //从数组的第二个数开始判断
	{
		if (arr[i] >max) //让数组后面的值依次与数组的第一个值进行比较
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);


	return 0;
}