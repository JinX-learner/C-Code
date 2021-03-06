#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//二维数组的创建
	int arr1[3][4];   //创建3行4列的数组
	//二维数组的初始化:几个一维数组决定行，一维数组里面的几个数决定列
	int arr2[3][4] = { 1,2,3,4,5 };  //第一行为1234  第二行的第一个为5   剩下的为0
	int arr3[3][4] = { {1,2,3},{5} }; //第一行为 1230  第二行为5000   第三行为0000
	//二维数组的大小：行可以省略，列一定不能省略
	int arr4[][4] = { {1,2,3,4},{5,6,7,8} };
	//二维数组的访问：行和列的下标都是从0开始的

	int a[2][3] = { {1,2},{3,4,5} };
	/*          
	*            行下标  0 1 2
	               列  0 1 2 0
	             下标  1 3 4 5
	*/
	int i = 0;
	for (i = 0; i < 2; i++)   //行
	{
		int j = 0;
		for (j = 0; j < 3; j++) //列
		{
			printf("%d ",a[i][j]);  //访问二维数组的每个元素
			printf("&a[%d][%d]=%p\n",i,j, &a[i][j]); //访问二维数组的每个地址
		}
		printf("\n");
	}

	//二维数组在内存中的存储:数组在内存中也是连续存放的，由低地址向高地址，每个地址相差固定的字节
	//如果要访问二维数组a的第二行的第三个元素，为a[1][2]

	return 0;
}