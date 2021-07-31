#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//赋值运算符 =
	//复合赋值符   +=  -=  *= ...
	int v = 10;
	v = v + 2;
	v += 2;   //两种表示一样

	//单目操作符:  1. !逻辑反操作   C语言中表示： 0 - 假   1 - 真
	  int a = 0;
	  int b = 10;  //非0为真-1
      printf("%d\n",!a);  //输出为1
	  printf("%d\n", !b);  //输出为0

		// 
		// -负值  +正值
		 int h=-2;
		 int b=2;
		//2. & 取地址
		// 
		//3. sizeof 操作数的类型长度（单位为字节）
		// int a=10;
		// char b='A';
		// char* p=&b;
		// int arr[10]={0};
		// printf("%d\n",sizeof(a));   输出为4   也就是输出int类型所占内存的长度
		// printf("%d\n",sizeof a );   输出为4   变量括号可不写
		// printf("%d\n",sizeof(int));  输出为4
		// 
		// printf("%d\n",sizeof(p));  输出为4   因为指针变量的大小为4字节   64位的为8字节
		 //printf("%d\n",sizeof(int [10]));  输出 40 等同于 arr的大小

		 short cc = 0;
		 int xx = 5;
		 printf("%d\n", sizeof(cc=xx+10));   //输出2  最终的结果都是cc的类型决定输出多少字节
		 printf("%d\n",sizeof(cc));  //输出0  上面那个不参与计算只是一个表达式


	return 0;
}

