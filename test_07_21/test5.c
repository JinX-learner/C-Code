#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//����˷��ھ���

	int i = 0;
	int j = 0;
	
	for (i = 1; i <=9; i++) //��   ��9��
	{
		for (j = 1; j <= i; j++)  //��
		{ 
			printf("%d*%d=%-2d ",i,j,i*j);  //%-2d  -2������λ����  2-����
		 }
		printf("\n"); //����
	}



	return 0;
}