#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

typedef struct stu {     //�����ṹ�����Ͳ�������Ϊssr
	char name[10];
	char gender[5];
	int age;
}ssr;


void PRINT(ssr p)
{
	printf("%s\n", p.name);
	printf("%s\n", p.gender);
	printf("%d\n", p.age);
}


void PRINT2(ssr* h) {
	printf("%s\n", h->name);
	printf("%s\n", h->gender);
	printf("%d\n", h->age);
}

int main()
{
     //����ṹ�����������
	ssr k = {"����","��",22};
	PRINT(k);    //������ֵ����

	PRINT2(&k);  //��ַ����  ����ָ��

	/*
	��ѡprint2������
	ԭ�򣺺������ε�ʱ�򣬲�������Ҫѹջ�ġ�
	�β���ʵ�ε�һ����ʱ�������������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
	���Խṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ����С�ڴ�����Ŀռ䡣
	*/


	return 0;
}