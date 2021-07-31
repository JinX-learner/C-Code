#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

typedef struct stu {     //创建结构体类型并重命名为ssr
	char name[10];
	char gender[5];
	int age;
}ssr;


void PRINT(ssr p)
{
	printf("%s\n", p.name);
	printf("%s\n", p.gender);
	printf("%d\n", p.age);
}


void PRINT2(ssr* h) {
	printf("%s\n", h->name);
	printf("%s\n", h->gender);
	printf("%d\n", h->age);
}

int main()
{
     //输出结构体变量的数据
	ssr k = {"张三","男",22};
	PRINT(k);    //函数传值调用

	PRINT2(&k);  //传址调用  利用指针

	/*
	首选print2函数。
	原因：函数传参的时候，参数是需要压栈的。
	形参是实参的一份临时拷贝。如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
	所以结构体传参的时候，要传结构体的地址。减小内存的消耗空间。
	*/


	return 0;
}