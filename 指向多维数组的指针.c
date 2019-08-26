#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j; int(*p)[4];
	 int a[3][4]={ 0, 1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	p = a;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%3d", *(*(p + i) + j));
		putchar('\n');
	}
	system("pause");
}