#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//二级指针：存放一级指针变量的地址
	int a = 10;
	int *p = &a; //一级指针
	int* *ppa = &p; //二级指针

	**ppa = 20; //对二级指针解引用
	printf("%d\n", a); //输出20


	//指针数组：数组里存放的是指针
	int x = 10;
	int y = 20;
	int z = 30;
	int i = 0;
	int* arr[3] = {&x,&y,&z};  //指针数组
	for (i = 0; i < 3; i++)
	{
		//arr[0] 第一个元素   第一个元素里存储的是x的地址
		printf("%d\n", *(arr[i])); // 10  20   30

	}

	return 0;
}

