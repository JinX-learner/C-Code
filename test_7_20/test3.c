#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//�������������ҵ�����6������������±�

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int a;
	int size=sizeof(arr)/sizeof(arr[0]);  //������Ԫ�صĸ��� 
	
	for (a=0;a<size;a++)
	{
		if (6==arr[a])
		{
			printf("�ҵ���~�±�Ϊ��%d\n", a);
			break;
		}
	}
	if (a == size)
	{
		printf("�������Ҳ���");
	}
	

	return 0;
}
