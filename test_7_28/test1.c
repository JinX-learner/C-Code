#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void CSH(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
	
}

int DY(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void REVERSE(int arr2[],int s)
{
	int left = 0;  //Ԫ�����±�
	int right = s - 1; //Ԫ�����±�
	int tmp = 0;
	while(left<right)
	{ 
		tmp = arr2[left];
		arr2[left] = arr2[right];
		arr2[right] = tmp;
		left++;
		right--;
	}

}

int main()
{
	//��Ŀ��
	/*
	1.��������exec((a1,a2),(a3,a4),a5,a6);��ʵ���м�����
	 ʵ����4�����ֱ���a2,a4,a5,a6  ���������Ƕ��ű��ʽ�������һ��ֵΪ׼
	2.������Ʋ��ܹ���ʹ��ȫ�ֱ�����Ҫʹ�þֲ����������Һ����Ĳ���ҲҪ���׹���
	3.main����������һ��Դ�ļ���λ�ÿ�������
	4.
	
	
	*/
	
	int arr[10] = { 0};
	int size = sizeof(arr) / sizeof(arr[0]);
	//CSH(arr,size);  //ʵ������Ԫ�صĳ�ʼ��Ϊ0
	


	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int s= sizeof(arr2) / sizeof(arr2[0]);
    REVERSE(arr2,s);  //��������������(�Ӻ���ǰ)��ӡ
    DY(arr2, s);  //��ӡ������



	/*  ���������������ֵ����
	int a[]={1,2,3,4};
	int b[]={5,6,7,8};
	int s= sizeof(a) / sizeof(a]);
	int i=0;
	for(i=0;i<s;i++)
{
     int tmp=0;
	 tmp=a[i];
	 a[i]=b[i];
	 b[i]=tmp;

	}


	*/

	return 0;
	
}