#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	// ��Ŀ��������sizeof �����������ͳ��ȣ���λΪ�ֽڣ�
	 int a=10;
	 int b = 0;
	 printf("%d\n",sizeof(a));   //���Ϊ4   Ҳ�������int������ռ�ڴ�ĳ���
	 printf("%d\n",sizeof a );   //���Ϊ4   �������ſɲ�д
	 printf("%d\n",sizeof(int));  //���Ϊ4

	 int arr[10] = { 0 }; //10������Ԫ�ص�����
	 printf("%d\n", sizeof(arr)); // 10*sizeof(int)=40  ������ܴ�СΪ40���ֽ�
	 //���������Ԫ�ظ���=�����ܴ�С/ÿ��Ԫ�صĴ�С
	 b = sizeof(arr) / sizeof(arr[0]);
	 printf("%d\n", b);  // b=40/4   Ϊ10

	 //EOF  end  of file  �ļ�������־  ֵΪ-1



	return 0;
}



