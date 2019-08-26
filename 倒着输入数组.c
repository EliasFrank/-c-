#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int *p, i;
	p = &a[9];
	for ( ; p>=a;  p--)
		scanf_s("%d", p);
	for (i=0; i<10; i++)
		printf("%d ", a[i]);
	system("pause");
}