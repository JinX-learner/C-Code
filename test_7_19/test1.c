#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>  //�������������� scanf getchar  printf putchar 

int main()
{
	//getchar()��ʹ��
	int a ;
	int s;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s",password); //�������벢������password������
	/*
	���ݻ�������
	�������룺 123  ABC  \n(�ٻس�)
	
	
	*/
	while ((a=getchar()) !='\n')//�ж����getchar()�������ĩβ�Ļس�����������ѭ�������ǵĻ���һֱѭ��,ֱ�����ݻ�������\n��
		                          //���ݻ�����Ϊ�գ�����һ��getchar�����µ�����
	{
		;
	}
	printf("��ȷ���Ƿ��յ�(Y/N):>");
	s = getchar(); //��ȡ���ݻ��������ַ�Y��N
	if ('Y' == s)
	{
		printf("OK");
	}
	else
	{
		printf("����");
	}


	return 0;
}
