#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sqrt(int arr[], int size)
{
	//ȷ��ð�����������Ϊ����-1
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
	int flag = 1; //������һ�˵�Ҫ����������Ѿ��Ź���

		int j = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])  //�����������Ԫ��������(>)���ǽ���(<)
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 0; //���¸�ֵ��ʾ������鱾�����������飬�Ѿ�����������
			}
		}
	if (flag == 1)//˵��������鲻��Ҫ���򣬱��������������
	{
		break;   //break��ʹ������ֹѭ������switch  �����break����������forѭ��
     }

	}

}

int main()
{
	//��������Ϊ��������,ʵ����ֻ�ǰ��������Ԫ�صĵ�ַ���ݹ�ȥ�ˡ� arr==&arr[0]
	//ð������(����)����:ͨ�����������������Ƚϣ�һ�������������� 

	int arr[] = {9,8,7,6,4,3,2,5,1,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sqrt(arr, size);  //���鳤��Ҫ����main()����������ٴ�����

	for (i = 0; i < size; i++)//������Ľ���������
	{
		printf("%d", arr[i]);
	}

	return 0;
}