#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//������һ�����Ľ׳�
int JC1(int x)
{
	int s = 0;
	int k = 1;
	for (s = 1; s <= x; s++)
	{
		k *= s;
	}
	return k;
}
//�ݹ���һ�����Ľ׳�   
//f(x){   x<=1    1
//        x>1     x*f(x-1)  }
int JC2(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else
	{
		return x * JC2(x - 1);
	}
}


int main()
{
	
	int i = 0;
	printf("������Ҫ��׳˵�����:>");
	scanf("%d", &i);
	int ret = JC2(i);
	printf("%d\n", ret);

	return 0;
}
