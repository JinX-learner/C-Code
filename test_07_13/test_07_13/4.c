#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>   //ʹ��strlen()Ҫ����

int main()
{
	//�ַ������͵�ʹ��  �洢��������  \0��Ϊ�ַ����Ľ�����־��
	char arr1[] = "abc";//  ��"abc"�����ַ�����
	//"abc"---'a','b','c','\0'   '\0'��ֵΪ0  ���ַ����Ľ�����־�������ַ�������
	printf("%s\n",arr1);  //%s��ӡ�ַ�����ʽ������


	
	char arr2[] = { 'a','b','c','\0'};  //������ֵ�Ļ�Ҫ�ֶ����һ��'\0'������־��ֻ������'\0'�Ż��������������
	printf("%s\n", arr2);

	char arr3[] = "abc";
	printf("%d\n", strlen(arr3));  //strlen --string length  �ַ�������  ���Ϊ3

	char arr4[] = { 'a','b','c' };
	printf("%d\n", strlen(arr4)); //���Ϊһ�����ֵ����Ϊû����ӽ�����־

	//���ĺ�Ϊ����     �ɼ�'\0'����Ҫ��
	char arr5[] = { 'a','b','c','\0'};
	printf("%d\n", strlen(arr5));

	return 0;
}


