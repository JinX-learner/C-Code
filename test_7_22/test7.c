#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//дһ��������ÿ����һ�����������num��ֵ������1   ʹ�ô�ַ���ú���

void ADD(int* p)
{
	(*p)++;   //ָ������ۼ�++  Ҫʹ�����Ű�Χ  ���ȼ�


}



int main()
{
	int num = 0;
	ADD(&num);
	printf("num=%d\n", num);
	ADD(&num);
	printf("num=%d\n", num);
	ADD(&num);
	printf("num=%d\n", num);
	return 0;
}




