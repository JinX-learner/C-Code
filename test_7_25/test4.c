#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//��ֵ����� =
	//���ϸ�ֵ��   +=  -=  *= ...
	int v = 10;
	v = v + 2;
	v += 2;   //���ֱ�ʾһ��

	//��Ŀ������:  1. !�߼�������   C�����б�ʾ�� 0 - ��   1 - ��
	  int a = 0;
	  int b = 10;  //��0Ϊ��-1
      printf("%d\n",!a);  //���Ϊ1
	  printf("%d\n", !b);  //���Ϊ0

		// 
		// -��ֵ  +��ֵ
		 int h=-2;
		 int b=2;
		//2. & ȡ��ַ
		// 
		//3. sizeof �����������ͳ��ȣ���λΪ�ֽڣ�
		// int a=10;
		// char b='A';
		// char* p=&b;
		// int arr[10]={0};
		// printf("%d\n",sizeof(a));   ���Ϊ4   Ҳ�������int������ռ�ڴ�ĳ���
		// printf("%d\n",sizeof a );   ���Ϊ4   �������ſɲ�д
		// printf("%d\n",sizeof(int));  ���Ϊ4
		// 
		// printf("%d\n",sizeof(p));  ���Ϊ4   ��Ϊָ������Ĵ�СΪ4�ֽ�   64λ��Ϊ8�ֽ�
		 //printf("%d\n",sizeof(int [10]));  ��� 40 ��ͬ�� arr�Ĵ�С

		 short cc = 0;
		 int xx = 5;
		 printf("%d\n", sizeof(cc=xx+10));   //���2  ���յĽ������cc�����;�����������ֽ�
		 printf("%d\n",sizeof(cc));  //���0  �����Ǹ����������ֻ��һ�����ʽ


	return 0;
}

