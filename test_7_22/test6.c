#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//дһ��������ʵ��һ��������������Ķ��ֲ��������е�ĳ��ֵ
//1.��һ�����������  2.����ĳ����   3.�ҵ��˷����±꣬�Ҳ�������-1


int LOOK(int arr[], int k,int size )//�����β�
{
	int left = 0;//���±꿪ʼ
	int right = size - 1;//���±�
	

	while (left <= right)//ѭ������Ϊ  ���±�С�ڻ�������±�
	{
		int mid = (left + right) / 2;//����м�ֵ��С��
		if (arr[mid]>k)//����ж�˵��k���±������м�ֵ�����
		{
			left = mid + 1; 
	  }
		else if(arr[mid]<k)//����ж�˵��k���±������м�ֵ���ұ�
		{
			right = mid - 1;
		}
		else {   //����ж�˵�����±�==���±���  ����k���±�
			return mid;
		}
		
	}
	return -1;  //�����Ҳ���k��ֵ�±�  �ͷ���-1
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };  //����һ����������
	int k = 5;//������������Ҫ���ҵ�ֵ
	int size = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
	int ret = LOOK(arr, k, size);//���ú�����ʵ��
	
	if (ret == -1)//�ж�
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n",ret);
	}

	return 0;
}

