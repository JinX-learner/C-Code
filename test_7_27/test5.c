#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//ָ�������
	int arr[10] = { 0 };
	printf("%p\n",arr);     //����ĵ�һ��Ԫ�صĵ�ַ
	printf("%p\n", arr+1);  //����ĵ�һ��Ԫ�صĵ�ַ��1  ��4���ֽ� ���ʵڶ���Ԫ�صĵ�ַ

	printf("%p\n", &arr[0]);  //Ҳ������ĵ�һ��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]+1); //����ĵ�һ��Ԫ�صĵ�ַ��1  ��4���ֽ� ���ʵڶ���Ԫ�صĵ�ַ

	printf("%p\n", &arr);   //��������ĵ�ַ
	printf("%p\n", &arr+1); //��������ĵ�ַ��1   �ټ�һ������ 40���ֽ�

	//ͨ��ָ�������������е�Ԫ�صĵ�ַ

	int arr2[10] = { 0 };
	int* cs = arr2;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//printf("%p======%p\n", cs+i,&arr2[i]);  //������ַ��ֵ����ȵ�
	}
	//ͨ��ָ���������е�Ԫ�ظ�ֵ
	for (i = 0; i < 10; i++)
	{
		*(cs + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n",arr2[i]);   //������ַ��ָ��Ķ����ֵ����ȵ�
		printf("%d\n", *(cs + i));
	}


	return 0;
}