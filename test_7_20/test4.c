#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h> //strlen��ͷ�ļ�
#include <Windows.h>  //Sleep��ͷ�ļ�
#include <stdlib.h>   //system��ͷ�ļ�

int main()
{
	//��д���룬��ʾ����ַ��������ƶ������м��ۡ�

	char arr1[] = "welcome to world!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;  //��ȡ���һ���ַ�������  strlen���ַ�������    ��  sizeof(arr1)/sizeof(arr[0])-2  
	                               //-2���Ǹ��ַ���������ַ�������Ƿ���   
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000); //��Ϣ��ͣ1��
		system("cls"); //systemִ��ϵͳ�����һ������    cls-�����Ļ
		left++;
		right--;
	}

	printf("%s\n", arr2);

	return 0;
}