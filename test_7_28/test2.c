#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	/*
	��Ŀ��
	1.int i=1;
	  int ret=(++i)+(++i)+(++i);
	  printf("%d\n", ret);   ��ȷ�ı������ǳ������   ��ͬ�������ı�������һ��
	   
	*/
	//2.
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr; //��arr����ǿ��ת����short*���� ����ָ�����p�� pֻ�ܷ���arr�е������ֽ�
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;  //short���͵�ָ��ֻ�ܷ��������ֽڣ����ѭ������4�Σ���ǰ���������ֵ���0
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);  //��� 0 0 3 4 5
	}

	//3.

	int a = 0x11223344; //a��ʮ�����Ƶ�����ռ�ĸ��ֽ�   �ڴ��д洢Ϊ44332211
	char* pa = (char*)&a;//pa��char���ͣ�ֻ�ܷ���a��һ���ֽڣ�ֻ�ܷ���44
	*pa = 0;   //��44��Ϊ00
	printf("%x\n", a);  //��� 11223300

	//4.

	int x, y, z;
	x = 5;
	z = ++x;
	y = ++z, z++, ++x, x++;  //���ű���ʽ�������㣬���ȡ�������һ������ʽ��ֵ
	//����=��ֵ����ʽ�����ȼ����ڶ��ű���ʽ����һ�����ű���ʽ�Ǹ�ֵ����y��ʣ�µĶ��ű���ʽ������
	y += x++ + z;
	printf("x=%d y=%d z=%d", x, y, z); //x=9 y=23 z=8

	
	return 0;
}