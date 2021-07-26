#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define max 10  //3.#define 定义的标识符常量   max等于10 后面不加;

enum  Color {   //4.枚举常量 enum定义  括号中的red yellow blue是枚举常量  不能更改其值
	red,    //值为0
	yellow,  //值为1
	blue   //值为2
};

int main()
{
	//常量的表示方法有4种
	3;  //1.字面常量  只有值
	3.14;

	const int a = 5; //2.const--常属性   修饰的为常变量  a为变量   加了const就变成了常量，不能重新赋值，但本质上还是变量

	int arr[max] = { 0 };  //创建数组的个数的值要为常量   判断max是否为常量

	printf("%d\n", max);


	enum Color  s = red;  //使用枚举常量  s这个变量的值可以更改为其他两个颜色
	printf("%d\n", s);

	return 0;
}






