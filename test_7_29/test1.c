#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����

typedef struct stu {     //�����ṹ������
	char name[10];
	char gender[5];
	int age;
}ssr;       //typedef ��struct stu������Ϊ ssr   �������ض���

 struct stu1 {     //�����ṹ������
	char name[10];
	char gender[5];
	int age;
}a,b,c;    //�����ṹ�������������ȫ�ֱ���

 //�ṹ�ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ�塣

 struct stu2 {
	 char name[10];
	 struct stu1 k;
	 char* pc;

 };



int main()
{
	struct stu s = {"С��","Ů",19};  //�����ṹ�����(�ֲ�)����ʼ��
	ssr k= { "С��","��",23 }; //typedef ��struct stu������Ϊ ssr   �������ض���

	char arr[] = "hahaha";
	struct stu2 first = { "hello",{"hi","Ů",20},arr}; 
	printf("%s\n", first.name);  //���ʶ����ýṹ�������.����
	printf("%d\n", first.k.age);
	printf("%s\n", first.pc);


	return 0;
}