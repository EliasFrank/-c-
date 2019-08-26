#include"stdio.h"
#include"stdlib.h"
int main()
{
	int digui(int n);
	printf("age = %d\n", digui(5));
	system("pause");
}
int digui(int n)
{
	int c;
	if (n == 1) c = 10;
	else c = digui(--n) + 2;
	return c;
}