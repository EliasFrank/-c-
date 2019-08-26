#include<stdio.h>
#include<stdlib.h>
#define PIN1 char*
typedef char* PIN2;
int main()
{
	PIN1 x, y;//char *x,y;
	PIN2 a, b;//char *a,*b;
	printf("%d\t%d\n", sizeof(x), sizeof(y));
	printf("%d\t%d\n", sizeof(a), sizeof(b));
	system("pause");
}