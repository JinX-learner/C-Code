#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//һά�������ڴ��еĴ洢:�������ڴ�����������ŵģ��ɵ͵�ַ��ߵ�ַ��ÿ����ַ���̶����ֽ�
	int i = 0;
	int arr2[] = { 1,2,3,4,5 };
	int size = sizeof(arr2) / sizeof(arr2[0]);
	for (i = 0; i < size; i++)
	{
		printf("&arr2[%d]=%p\n",i, &arr2[i]);  //��ַ��ʮ�����ƴ洢  0~9  A~F  int������������4���ֽ�
	}



	 

	return 0;
}