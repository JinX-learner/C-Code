#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int STRLEN(char* arr)
{
	char* start = arr;
	char* end = arr;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;

}


int main()
{
	//ʹ��ָ��-ָ��ʵ�����ַ����ĳ���
	char arr[10] = "abcd";
	int a = STRLEN(arr);
	printf("%d\n", a);


	return 0;
}

/*
int SS(char* i,int sum)
{
	while (*i != '\0')
	{
		*i++;
		sum++;

	}
	return sum;
}

int main()
{
	//strlen ���ַ�������
	char a[10] = "ahjklj";
	int sum = 0;
	int i = SS(a, sum);
	printf("%d\n", i);

	return 0;

}
*/