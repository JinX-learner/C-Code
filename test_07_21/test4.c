#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	//10����  �����е����ֵ
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	int max = arr[0];  //��max��ֵΪ���ֵĵ�һ��ֵ��Ϊ�˱����������Ϊ����
	int size=sizeof(arr)/sizeof(arr[0]);
	for (i = 1; i < size; i++) //������ĵڶ�������ʼ�ж�
	{
		if (arr[i] >max) //����������ֵ����������ĵ�һ��ֵ���бȽ�
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);


	return 0;
}