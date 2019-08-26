#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int *p1, *p2;
	int p;
	p1 = &a[3];
	p2 = &a[6];
	p = *p1 - *p2;
	printf("%d\n", p);
	system("pause");
}