#include <stdio.h>  //编译预处理命令：包括   标准输入输出头部文件 
 

int main()     //程序入口函数并且只能有一个main函数 
			  //main前面的int表示main函数调用返回一个整型值 
{
	char x = 'a'; //定义一个变量x为字符型   char类型只能用单引号且只能有一个字母，如果多个字符会取最后一个字母 
	printf("%c\n",x); //  %c表示打印字符格式的数据   \n为换行 

	int y = 20;  //定义一个变量y为整型   
	printf("%d\n",y);  // %d表示打印整型十进制格式的数据


	return 0;  //返回整数0 

	//ctrl+fn+f5  编译运行
}




