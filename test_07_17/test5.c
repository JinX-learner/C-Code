#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	/*
	if (12)  //��0Ϊ��   if(�߼����ʽ)   
	{
		printf("hehe");  //���hehe
	}
	*/
	
	//while (12)  //��0Ϊ��     while(�߼����ʽ)
	//{
		//printf("haha\n");   //һֱѭ�����haha    ������Ϊ��   Ϊ��ѭ��
	//}

	int a = 0;
	while (a <=10)
	{
		a++;
		if (5 == a)
		{
			continue; //continue����ֹ����ѭ���к���Ĵ��룬����Ĵ��벻ִ�У���ת��ѭ�����жϴ���,�ж��Ƿ���һ��ѭ�������ı�a++λ�û���ѭ��
			         //����break�Ļ�  �����1234����ѭ��
		}
		printf("%d\n",a);
		
	}
	/*
	while�е�break������������ֹѭ���ġ�
	continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
	����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�
	
	*/


	return 0;
}


