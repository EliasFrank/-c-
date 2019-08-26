#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[10] = { 1,2,3,4,-1,-2,-3,-4,2,3 };
	int i;
	for (i = 0; i < 10; i++)
	{
		test(a[i]);
	}
	printf("\n");
	system("pause");
}
int test(int v)
{
	if (v > 0)
	{
		printf("%d ", v);
	}
	else
	{
		printf("%d ", 0);
	}
}