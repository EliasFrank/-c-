#include<stdio.h>
#include<stdlib.h>
void swap(int*p1, int*p2);
int main()
{
	int a, b;
	int *pointer_1, *pointer_2;
	printf("please input a and b: ");
	scanf_s("%d%d", &a, &b);
	pointer_1 = &a;
	pointer_2 = &b;
	if (a < b) swap(pointer_1, pointer_2);
	printf("max=%d,min=%d\n", a, b);
	system("pause");
	return 0;
}
void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}