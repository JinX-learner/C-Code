#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>
#include <string.h>

int main()
{
	//ifѡ�����

	int s = 0;
	printf("�����ǽ���Ҫѡ�������\n");
	printf("��������ȥ��(1/0)>:");
    scanf("%d", &s);  //ע�� ʹ��scanf���뺯����ʱ��Ҫ\n

	if(s == 1) //==��ʾ�ж�
	{
		printf("����ϰ�����ҵ���offer");
	}
		
	else
	{
		printf("ֻ�ܽ����ϰ�Ķ�һ��");
	}
	
		
	return 0;
}





