#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};  //����һ�����10���������ֵ�����
	printf("%d\n", arr[4]);  //�������ͨ���±����ĳ��Ԫ�أ��±��0��ʼ

	int s = 0;       //ͨ��ѭ���������������Ԫ��     fn+f10���Խ��е���
	while (s < 10)
	{
		printf("%d\n", arr[s]);
		s++;
	}

	return 0;
}




