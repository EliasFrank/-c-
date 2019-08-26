#include<stdio.h>
#include<stdlib.h>
int main()
{
#if 0
	int i;
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
	for (i = 0; i < 10; i++)
		printf("%d ",a[i]);
# endif
	int i;
	int *p;
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
	p = &a[0];
	for (p=a; p<(a+10); p++)
		printf("%d  ", *p );
	putchar('\n');
	system("pause");
#if 0
	int i;
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
	for (i = 0; i < 10; i++)
		printf("%d ", *(a + i));
	putchar('\n');
	system("pause");
#endif
}