#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int ch= 0;
	//getchar()  ��ȡ�Ӽ����������һ���ַ�  EOF �ļ�������־  ֵΪ-1
	while ((ch=getchar())!= EOF)
	{
		putchar(ch); //���������ʹ��  ͬ��printf("%c\n",ch) 
	}

	//���ó���ֹͣ  ctrl+z

	return 0;
}

