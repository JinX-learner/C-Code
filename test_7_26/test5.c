#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct  Book  //����һ���ṹ������    struct �ṹ��ؼ���   Book �ṹ����
{
	char name[20];
	short price;
};   //�ֺŲ���ȱ��

int main()

{
	//[ ] �±����ò����� 
     int arr[10];//�������� 
	 arr[9] = 10;//ʵ���±����ò������� ������Ϊ������arr ������ֵ9
	//( ) �������ò����� ����һ�����߶������������һ���������Ǻ�������ʣ��Ĳ��������Ǵ��ݸ������Ĳ�����������һ��������

	//����һ���ṹ�ĳ�Ա. �ṹ��.��Ա��-> �ṹ��ָ��->��Ա��

	//�ṹ��--���Ӷ��󡪡������Լ����������һ������

		struct Book  s = { "C���Գ������",20 };   //���ýṹ�����͡�����һ�������͵Ľṹ�����
		struct Book* k = &s;   //����ָ�봴���ṹ�����

		printf("������%s\n", s.name);      //���ʽṹ��ĳ�Ա
		printf("�۸�%dԪ\n", s.price);
		s.price = 15;                 //�޸Ľṹ��ı�����Ա ��ֱ���޸�
		printf("�޸ĺ�ļ۸�%dԪ\n", s.price);
		strcpy(s.name, "C++");  //  ���Ǳ�����Ա���ַ������޸ģ�����Ҫstrcpy  ������ͷ�ļ�
		//strcpy-string copy �ַ�������  ҪӦ��string.hͷ�ļ�
		printf("%s\n", s.name);

		//����ָ����ʽṹ��ĳ�Ա
		printf("%s\n", (*k).name);
		printf("%d\n", (*k).price);

		printf("%s\n", k->name);
		printf("%d\n", k->price);

		/*
		  .      �ṹ�����.��Ա
		  ->     �ṹ��ָ��->��Ա
		*/

	return 0;
}