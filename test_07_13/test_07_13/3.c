#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define max 10  //3.#define ����ı�ʶ������   max����10 ���治��;

enum  Color {   //4.ö�ٳ��� enum����  �����е�red yellow blue��ö�ٳ���  ���ܸ�����ֵ
	red,    //ֵΪ0
	yellow,  //ֵΪ1
	blue   //ֵΪ2
};

int main()
{
	//�����ı�ʾ������4��
	3;  //1.���泣��  ֻ��ֵ
	3.14;

	const int a = 5; //2.const--������   ���ε�Ϊ������  aΪ����   ����const�ͱ���˳������������¸�ֵ���������ϻ��Ǳ���

	int arr[max] = { 0 };  //��������ĸ�����ֵҪΪ����   �ж�max�Ƿ�Ϊ����

	printf("%d\n", max);


	enum Color  s = red;  //ʹ��ö�ٳ���  s���������ֵ���Ը���Ϊ����������ɫ
	printf("%d\n", s);

	return 0;
}






