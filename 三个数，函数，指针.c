#include<stdio.h>
#include<stdlib.h>
int swap(int *p1, int *p2);
int exchange(int *p1, int *p2, int *p3);
int main()
{
	int a, b, c;
	int *p1, *p2, *p3;
	printf("please input three numbers: ");
	scanf_s("%d%d%d", &a, &b, &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	exchange(p1, p2, p3)
	
	printf("%d > %d > %d\n",a,b,c);
	printf("%d > %d  > %d\n", *p1, *p2, *p3);
	system("pause");
}
int exchange(int *pointer_1, int *pointeer_2, int *pointer_3)
{
	if (a < b) swap(p1, p2);
	if (a < c) swap(p1, p3);
	if (b < c) swap(p2, p3);
}
int swap(int *pointer_1, int *pointer_2)
{
	int temp;
	temp = *pointer_1;
	*pointer_1 = *pointer_2;
	*pointer_2 = temp;
}