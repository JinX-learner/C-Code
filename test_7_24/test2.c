#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	// ������ʹ���±������ʵģ��±��Ǵ�0��ʼ    []-�±����ò�����
	char arr[] = "abcdef";
	int i = 0;
	for (i = 0; i <6; i++)  //for (i = 0; i <strlen(arr); i++)   ֻ���ַ����������
	{
		printf("%c\n", arr[i]);
	}

	//����Ĵ�С����ͨ������õ�  �����ַ����ͻ����\0  ������sizeof���С
	int arr2[] = {1,2,3,4,5};
	int size = sizeof(arr2) / sizeof(arr2[0]);
	for (i = 0; i < size; i++)  
	{
		printf("%c\n", arr2[i]);
	}


	return 0;

}