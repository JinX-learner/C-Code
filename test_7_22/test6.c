#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一个函数：实现一个整型有序数组的二分查找数组中的某个值
//1.给一个有序的数组  2.查找某个数   3.找到了返回下标，找不到返回-1


int LOOK(int arr[], int k,int size )//传递形参
{
	int left = 0;//左下标开始
	int right = size - 1;//右下标
	

	while (left <= right)//循环条件为  左下标小于或等于右下标
	{
		int mid = (left + right) / 2;//求出中间值的小标
		if (arr[mid]>k)//这个判断说明k的下标是在中间值的左边
		{
			left = mid + 1; 
	  }
		else if(arr[mid]<k)//这个判断说明k的下标是在中间值的右边
		{
			right = mid - 1;
		}
		else {   //这个判断说明左下标==右下标了  返回k的下标
			return mid;
		}
		
	}
	return -1;  //上诉找不到k的值下标  就返回-1
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };  //设置一个有序数组
	int k = 5;//设置在数组中要查找的值
	int size = sizeof(arr) / sizeof(arr[0]);//设置数组的元素个数
	int ret = LOOK(arr, k, size);//设置函数及实参
	
	if (ret == -1)//判断
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是%d\n",ret);
	}

	return 0;
}

