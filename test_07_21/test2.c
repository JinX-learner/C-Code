#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{
	//1~100֮��������г����˶��ٸ�����9

	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9) //���λ
		{
			count++;
			printf("%d\n", i);
		}
		if (i / 10 == 9) //��ʮλ
		{
			count++;
			printf("%d\n", i);
		}
		
	}
	
	printf("%d\n",count);
	return 0;
}