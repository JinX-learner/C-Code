#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//ǰ�á�����++     ǰ�á�����--

	int a = 10;
	//printf("%d\n", ++a); // 11
	printf("%d\n", a++);  // 10
	printf("%d\n", a);    //11



	int s = 5;
	int p = s++;  //����++  ��ʹ��(�Ȱ�s��ֵ��p)����++ (���s�ټ�1)  
	int m = ++s;   //ǰ��++   ��++����ʹ��

	printf("s=%d p=%d\n", s, p); //s=6  p=5
	printf("s=%d m=%d\n", s, m); //s=6  m=6

	//ǿ������ת��
	int a = (int)3.14;  //��3.14ǿ��ת��Ϊint����

	
	return 0;
}
