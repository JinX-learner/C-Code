#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//��һ����n�Ľ׳�
	
	int i;
	int n;
	int jc=1;
	printf("�����һ�������������������Ľ׳�:>");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		jc = jc * i;
	}
	printf("jc=%d\n",jc);

	return 0;
}