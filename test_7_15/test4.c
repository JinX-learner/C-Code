#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	// 单目操作符：sizeof 操作数的类型长度（单位为字节）
	 int a=10;
	 int b = 0;
	 printf("%d\n",sizeof(a));   //输出为4   也就是输出int类型所占内存的长度
	 printf("%d\n",sizeof a );   //输出为4   变量括号可不写
	 printf("%d\n",sizeof(int));  //输出为4

	 int arr[10] = { 0 }; //10个整型元素的数组
	 printf("%d\n", sizeof(arr)); // 10*sizeof(int)=40  数组的总大小为40个字节
	 //计算数组的元素个数=数组总大小/每个元素的大小
	 b = sizeof(arr) / sizeof(arr[0]);
	 printf("%d\n", b);  // b=40/4   为10

	 //EOF  end  of file  文件结束标志  值为-1



	return 0;
}



