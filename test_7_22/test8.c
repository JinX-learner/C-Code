#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//������Ƕ�׵��ã���һ�������е�����һ������   ����   
	//��������ʽ���ʣ���һ�������ķ���ֵ��Ϊ����һ�������Ĳ�����
	int a = 13;
	printf("%d\n", a);
	printf("%d\n", 13); //��ʽ���� ���������һ��  

	//һ��printf�Ǵ�ӡ����ֵ�����printf Ƕ���������ӡ���ַ��ĸ���
	printf("%d", printf("%d", printf("%d", 43)));  //���4321  
		

	
	return 0;
}

