#define _CRT_SECURE_NO_WARNINGS 1  //�����������ڽ��scanf����������������ȫ   
#include <stdio.h>

int bb = 100;  //����һ��ȫ�ֱ���   �ڴ����{}������ 

int main()
{
	float z = 5.0;
	//printf("%f\n",z);  //%f��ʾ��ӡ���������ݵĸ�ʽ   ��ʾ���С���������6λ�����Զ��5��0 
	double  k = 3.14;
	//printf("%lf\n",k); //%lf��ʾ��ӡ˫���ȸ��������ݵĸ�ʽ
	char  a = 'j';
	//printf("%c\n",a);

	//�鿴��������ռ�õ��ڴ�ռ��С(��λΪbyte�ֽ�   һ���ֽڵ���8������λ) 
	/*
	printf("%d\n",sizeof(char));    //���Ϊ1
	printf("%d\n",sizeof(int));     //4
	printf("%d\n",sizeof(short));   //2  ��ʾ2���ֽ�  16����λ   ��СΪ2��16�η���1
	printf("%d\n",sizeof(long));    //4
	printf("%d\n",sizeof(long long));  //8
	printf("%d\n",sizeof(float));   //4
	printf("%d\n",sizeof(double));  //8
	*/

	//��������ķ�ʽ������  ������=ֵ 
	int age = 20;  //��ʾ���ڴ�������4���ֽ�=32λ  ���洢20 
	float weight = 55.5f;  //55.5��double˫��������  ���Ҫʹ��float���ͣ������ֵҪ��f�����������ֵ����ȷ 
	//printf("%f\n",weight);

	int bb = 10;  // ����һ���ֲ�����   �ڴ����{}������ 
	//printf("%d\n",bb);  //���ֲ�������ȫ�ֱ���ͬ��������ʹ�þֲ����� 

	//�����������ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;    //C�����﷨�涨�� ����Ҫ�����ڵ�ǰ��������ǰ�� 
	scanf("%d%d", &num1, &num2);  //scanfΪ���뺯��  %d%d��������int����    &��ȡ��ַ����  ��������num1��num2 �ĵ�ַ 
	sum = num1 + num2;
	printf("sum=%d\n", sum);


	return 0;
}






