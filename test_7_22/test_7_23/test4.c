#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
//ģ��strlen������ʵ������ַ����ĳ���
int LENGTH(char* str)  //��ȡ�����һ��Ԫ�صĵ�ַ
{
	int count = 0;
	while (*str != '\0')//����������ĵ�һ��Ԫ�ؽ���ѭ���жϲ������ֽ������
	{
		count++; //�����ۼ�����
		*str++;  //�����һ��Ԫ�������ƶ��ۼӣ�ֱ���������ֽ������
	}
	return count;
}

*/

//ʹ�õݹ���ã���������ʱ����ʵ���ַ�������
// LENGTH("hello") ������ĵ�һ��Ԫ�ص�ֵ��ʼ�ж��Ƿ���\0
//1+ LENGTH("ello")
//1+1 1LENGTH("llo")
//1+1+1 LENGTH("lo")
//1+1+1+1LENGTH("o")
//1+1+1+1+1 LENGTH("\0")
//5

int LENGTH(char* str)
{
	if (*str != '\0') 
	{
		return 1 + LENGTH(str + 1);  //str+1 ��һ��Ԫ�صĵ�ַ��1 ��ɵڶ���
	}
	else    //��������ĵ�һ������Ԫ�صĵ�ַ����\0  
	{
		return 0;
	}
}


int main()
{
	
	char arr[] = "hello";
	int len = LENGTH(arr);  //������Ϊʵ�δ��ݵ��βεĻ���ʵ���Ǵ��ݵ������һ��Ԫ�صĵ�ַ
	printf("%d\n", len);

	return 0;
}


