#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//getchar��ʹ��  ֻ��������ַ�
	int a = 0;
	while ((a = getchar()) != EOF)
	{
		if (a<'0'||a>'9')//����ķ�Χ 0<a<9   ����ascll��ֻ��������ַ�
		{
			continue;
		}
		putchar(a);
	}

	return 0;
}