#define _CRT_SECURE_NO_WARNINGS 1  //放在首行用于解决scanf等其他函数报错不安全   
#include <stdio.h>

int bb = 100;  //定义一个全局变量   在代码块{}的外面 

int main()
{
	float z = 5.0;
	//printf("%f\n",z);  //%f表示打印浮点型数据的格式   显示结果小数点后面有6位，所以多加5个0 
	double  k = 3.14;
	//printf("%lf\n",k); //%lf表示打印双精度浮点型数据的格式
	char  a = 'j';
	//printf("%c\n",a);

	//查看各个类型占用的内存空间大小(单位为byte字节   一个字节等于8个比特位) 
	/*
	printf("%d\n",sizeof(char));    //输出为1
	printf("%d\n",sizeof(int));     //4
	printf("%d\n",sizeof(short));   //2  表示2个字节  16比特位   大小为2的16次方减1
	printf("%d\n",sizeof(long));    //4
	printf("%d\n",sizeof(long long));  //8
	printf("%d\n",sizeof(float));   //4
	printf("%d\n",sizeof(double));  //8
	*/

	//定义变量的方式：类型  变量名=值 
	int age = 20;  //表示向内存来申请4个字节=32位  来存储20 
	float weight = 55.5f;  //55.5是double双精度类型  如果要使用float类型，后面的值要加f，这样输出的值才正确 
	//printf("%f\n",weight);

	int bb = 10;  // 定义一个局部变量   在代码块{}的里面 
	//printf("%d\n",bb);  //当局部变量和全局变量同名，优先使用局部变量 

	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;    //C语言语法规定， 变量要定义在当前代码块的最前面 
	scanf("%d%d", &num1, &num2);  //scanf为输入函数  %d%d输入两个int的数    &是取地址符号  将数放在num1和num2 的地址 
	sum = num1 + num2;
	printf("sum=%d\n", sum);


	return 0;
}






