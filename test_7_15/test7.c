#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1.static �ؼ���  ���ξֲ��������ֲ��������������ڱ䳤
//2.static �ؼ���  ����ȫ�ֱ������ı���ȫ�ֱ�����������
//3.static �ؼ���  ���κ�����Ҳ�ı��˺�����������   

void test()  //void ������   test���� �޲�������   ����������ı����Ǿֲ�����  �ֲ���������������{ }
{
   static int b = 1;   //b��һ����̬�ľֲ�����
	b++;
	printf("b=%d\n", b); //������a=2  4 3 4 5 6   ��Ϊ������static�ı����������ڣ�����ԭ�ȵ�ֵ�����򲻼�static�ͻ�
	                                  //���b=2 2 2 2 2
}

int main()

{
	int a = 0;
	while (a < 5)
	{
		test();//����test���� ����û�в������ݣ�������һһ��Ӧ
		a++;
	}

	return 0;
}






