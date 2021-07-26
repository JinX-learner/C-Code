#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//%c 字符格式  %d整型格式   %s字符串格式   %f浮点型  %lf双精度浮点型  %p地址格式


//结构体--复杂对象——我们自己创造出来的一种类型

struct  Book  //创建一个结构体类型    struct 结构体关键字   Book 结构体名
{
	char name[20];
	short price;
};   //分号不可缺少

int main()

{    
	struct Book  s = {"C语言程序设计",20};   //利用结构体类型—创建一个该类型的结构体变量
	struct Book* k = &s;   //利用指针创建结构体变量

	printf("书名：%s\n",s.name);      //访问结构体的成员
	printf("价格：%d元\n", s.price);
	s.price = 15;                 //修改结构体的变量成员 可直接修改
	printf("修改后的价格：%d元\n", s.price);
	strcpy(s.name, "C++");  //  凡是变量成员是字符串的修改，都需要strcpy  并引用头文件
	//strcpy-string copy 字符串拷贝  要应用string.h头文件
	printf("%s\n",s.name);

	//利用指针访问结构体的成员
	printf("%s\n", (*k).name);
	printf("%d\n", (*k).price);

	printf("%s\n",k->name);
	printf("%d\n", k->price);

	/*
	  .      结构体变量.成员
	  ->     结构体指针->成员
	*/


	return 0;
}

