#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int i ;
	for (i = 0; i < 5; i++)  //ʹ��ǰ�պ󿪵�д��   0~4   ����һ����<  ����<=
	{
		printf("%d\n", arr[i]);
	}

	/*
	for( ; ; )     forѭ���ĳ�ʼ���������жϡ��ۼӵ�������д�Ļ����ǿ��Ե�
	{               ���� ��������жϲ�д�Ļ����Ǿ��Ǻ�Ϊ��  ����ѭ��  һֱ���
	printf("hehe\n");
	}
	*/

	return 0;
}
