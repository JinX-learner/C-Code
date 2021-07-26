#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>
#include <string.h>

int main()
{
	//if选择语句

	int s = 0;
	printf("以下是金欣要选择的问题\n");
	printf("你想坚持下去吗？(1/0)>:");
    scanf("%d", &s);  //注意 使用scanf输入函数的时候不要\n

	if(s == 1) //==表示判断
	{
		printf("你会上岸你会找到好offer");
	}
		
	else
	{
		printf("只能进厂上班荒度一生");
	}
	
		
	return 0;
}





