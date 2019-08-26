#include<stdio.h>
#include <stdlib.h>
int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;
}
void main()
{
	extern int A,B;
	printf("%d\n", max(A, B));
	system("pause");
}
int A = 13, B = -8;
