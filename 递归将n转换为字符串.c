#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f(int num);
	int num;
	printf("please input a number:");
	scanf_s("%d", &num);
	if (num < 0) {
		printf("-");
		num = -num;
	}
	f(num);
	putchar('\n');
	system("pause");
	return 0;
}
int f(int num)
{
	int i;
	if ((i = num / 10) != 0) f(i);
	putchar(num%10 + '0');
}