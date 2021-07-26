#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>





int main()
{
	extern int ADD(int ,int);

	int k = 0;
	k = ADD(5, 6);
	printf("%d\n",k);
	return 0;
}




