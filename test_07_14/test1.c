#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//转义字符的使用  字符0的ASCII值为48  继续递增   A 65   a 97  大小写字母相差32

	printf("%d\n", strlen("abcdef"));

	//   \t 和 \32被解析成一个转义字符   
	/*
	      \后面是数字就是八进制（八进制是0~7之间的数字组成）
	      \32  是2个八进制的数字   
	       32作为八进制代表的那个十进制数字，作为ASCII码值对应的字符
	       32八进制转为十进制是26     ASCII码值26对应的字符为 ->
	*/

	printf("%d\n", strlen("c:\test\32\test.c"));  //输出结果为  13
	printf("%c\n",'\32');

	/*
	      \x61 为一个转义字符
		  \x后面是数字就是十六进制
		  \x61  61是2个十六进制的数字
		    61十六进制转为十进制是97     ASCII码值97对应的字符为a
	*/


	printf("%c\n",'\x61');



	//注释的快捷键：  Ctrl+k+c   注释    Ctrl+k+u 取消注释


	return 0;
}





