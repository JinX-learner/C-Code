#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//�������ֳ�����������1�ʹ����������⣬�޷���������Ȼ����������
	//��100~200֮�������
	int i = 0;
	int count = 0;
	for(i=100;i<=200;i++)
	{ 
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			break;
		}
	}
	if (j==i)
	{
		printf("%d\n",i);
		count++;
	}

	printf("count=%d\n", count);

	}
	return 0;
}



