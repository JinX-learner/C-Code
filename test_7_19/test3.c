#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//ʹ��forѭ����ӡ1~10֮�������
	int a;
	for (a = 1; a <=10; a++)   //��ʼ��   �����ж�   �����ۼӵ���
	{
		if (5 == a)
		{
			break;  //forѭ�����break��whileѭ����һ��
			//continue;  �����1~10֮�������(����5)   
			//whileѭ����������������ۼ�  �����ۼ�λ�õĲ�ͬ���»������ѭ��  ���ۼӷ���if���ǰ����
		}
		printf("%d\n",a);
	}


	return 0;
}