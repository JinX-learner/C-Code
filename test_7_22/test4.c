#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����������1��������������0
int is_prime(int n)
{
	//2->n-1
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)  //ż��������������
			return 0;
	}
	return 1;

}


int main()
{
	//дһ�������ж�100-200֮�������
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}
	return 0;
}



/*
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
		if (i % j == 0)  //ż��������������
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

*/