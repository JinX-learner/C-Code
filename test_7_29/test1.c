#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构的每个成员可以是不同类型的变量。

typedef struct stu {     //创建结构体类型
	char name[10];
	char gender[5];
	int age;
}ssr;       //typedef 改struct stu类型名为 ssr   类型名重定义

 struct stu1 {     //创建结构体类型
	char name[10];
	char gender[5];
	int age;
}a,b,c;    //创建结构体类型里的三个全局变量

 //结构的成员可以是标量、数组、指针，甚至是其他结构体。

 struct stu2 {
	 char name[10];
	 struct stu1 k;
	 char* pc;

 };



int main()
{
	struct stu s = {"小葵","女",19};  //创建结构体变量(局部)并初始化
	ssr k= { "小蔡","男",23 }; //typedef 改struct stu类型名为 ssr   类型名重定义

	char arr[] = "hahaha";
	struct stu2 first = { "hello",{"hi","女",20},arr}; 
	printf("%s\n", first.name);  //访问都是用结构体变量名.访问
	printf("%d\n", first.k.age);
	printf("%s\n", first.pc);


	return 0;
}