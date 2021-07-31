#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//算术操作符：  + - * / %
	int x = 5 / 2;  //除法输出商   因为是int类型，除数和被除数都是整型，所以输出整数2
	printf("%d\n", x);
    double a = 5 / 2.0; //要输出小数类型，要保证首先是double类型，除数和被除数有一个是小数
	printf("%lf\n", a);

	int y = 5 % 2;  //取模(取余数)只能对int类型操作，不能浮点型。
	printf("%d\n", y);

	//



	return 0;
}