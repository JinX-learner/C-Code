#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//在有序数组中找到数字6，并输出它的下标

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int a;
	int size=sizeof(arr)/sizeof(arr[0]);  //求数组元素的个数 
	
	for (a=0;a<size;a++)
	{
		if (6==arr[a])
		{
			printf("找到了~下标为：%d\n", a);
			break;
		}
	}
	if (a == size)
	{
		printf("数组中找不到");
	}
	

	return 0;
}
