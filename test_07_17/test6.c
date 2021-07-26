#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int ch= 0;
	//getchar()  获取从键盘上输入的一个字符  EOF 文件结束标志  值为-1
	while ((ch=getchar())!= EOF)
	{
		putchar(ch); //与上面搭配使用  同理printf("%c\n",ch) 
	}

	//想让程序停止  ctrl+z

	return 0;
}

