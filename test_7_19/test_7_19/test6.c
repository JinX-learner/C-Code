#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	// do while ѭ����ʹ��  ѭ�����������ִ��1��  ���ж�
	int i=1;
	do
	{
		if (5 == i)
			continue;   //��� 1 2 3 4 ��ѭ��
		printf("%d\n",i);
		i++;
	} while (i<=10);

	return 0;
}