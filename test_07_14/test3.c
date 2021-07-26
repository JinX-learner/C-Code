#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//while  循环
	printf("今天你学习了没?\n");

	int study = 0;
	while (study<5) 
	{
		printf("努力努力再努力:%d\n",study);
		study++;
	}

	if (study >= 5) 
	{
		printf("你现在吃的苦将来都会笑着说出来");
	}
	


	return 0;
}

