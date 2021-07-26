#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//switch 多分支语句的使用  用于确定的int类型的值

	int day = 0;
	printf("请输入1~5之间的一个数:>");
	scanf("%d",&day);

	switch (day)  //switch (int类型的数字)  否则报错
	{
	case 1:    //case 后面是int类型常量表达式或int类型的常量值 :
		printf("星期一");
		break;  //用于跳出实现分支,没有的话会执行后面的语句
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	default:   //以上都不匹配的话，进入default执行里面的命令 给出提示  
		        //如不需要提示，default里面只写break也可或者直接不加default   
		printf("输入错误");
		break;
	}
	/*
	case 后面的break不一定都要有

	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	     printf("工作日");   //不管输入1~5之间的哪一个都会输出工作日
		 break;
    }
	
	
	*/

	return 0;
}

