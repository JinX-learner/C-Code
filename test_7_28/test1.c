#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void CSH(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
	
}

int DY(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void REVERSE(int arr2[],int s)
{
	int left = 0;  //元素左下标
	int right = s - 1; //元素右下标
	int tmp = 0;
	while(left<right)
	{ 
		tmp = arr2[left];
		arr2[left] = arr2[right];
		arr2[right] = tmp;
		left++;
		right--;
	}

}

int main()
{
	//题目：
	/*
	1.函数调用exec((a1,a2),(a3,a4),a5,a6);的实参有几个？
	 实参有4个，分别是a2,a4,a5,a6  括号里面是逗号表达式，以最后一个值为准
	2.函数设计不能过多使用全局变量，要使用局部变量。而且函数的参数也要不易过多
	3.main（）函数在一个源文件的位置可以任意
	4.
	
	
	*/
	
	int arr[10] = { 0};
	int size = sizeof(arr) / sizeof(arr[0]);
	//CSH(arr,size);  //实现数组元素的初始化为0
	


	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int s= sizeof(arr2) / sizeof(arr2[0]);
    REVERSE(arr2,s);  //让数组内容逆序(从后往前)打印
    DY(arr2, s);  //打印输出结果



	/*  让两个数组里面的值交换
	int a[]={1,2,3,4};
	int b[]={5,6,7,8};
	int s= sizeof(a) / sizeof(a]);
	int i=0;
	for(i=0;i<s;i++)
{
     int tmp=0;
	 tmp=a[i];
	 a[i]=b[i];
	 b[i]=tmp;

	}


	*/

	return 0;
	
}