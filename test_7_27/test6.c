#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//����ָ�룺���һ��ָ������ĵ�ַ
	int a = 10;
	int *p = &a; //һ��ָ��
	int* *ppa = &p; //����ָ��

	**ppa = 20; //�Զ���ָ�������
	printf("%d\n", a); //���20


	//ָ�����飺�������ŵ���ָ��
	int x = 10;
	int y = 20;
	int z = 30;
	int i = 0;
	int* arr[3] = {&x,&y,&z};  //ָ������
	for (i = 0; i < 3; i++)
	{
		//arr[0] ��һ��Ԫ��   ��һ��Ԫ����洢����x�ĵ�ַ
		printf("%d\n", *(arr[i])); // 10  20   30

	}

	return 0;
}

