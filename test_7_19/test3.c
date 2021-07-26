#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//使用for循环打印1~10之间的数字
	int a;
	for (a = 1; a <=10; a++)   //初始化   条件判断   条件累加调整
	{
		if (5 == a)
		{
			break;  //for循环里的break和while循环的一致
			//continue;  会输出1~10之间的数字(除了5)   
			//while循环代码是先输出后累加  条件累加位置的不同导致会产生死循环  把累加放在if语句前即可
		}
		printf("%d\n",a);
	}


	return 0;
}