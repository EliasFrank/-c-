#include<stdio.h>
#include<stdlib.h>
int swap(int *p1, int *p2);
int main()
{
	int *pointer_1, *pointer_2;
	int a, b;
	scanf_s("%d%d", &a, &b);
	pointer_1 = &a;
	pointer_2 = &b;
	if(a<b)
	 swap(pointer_1, pointer_2);//½»»»
	printf("%d > %d", a, b);
	system("pause");
}
int swap(int *p1,int  *p2)
{
	printf("please waiting...\n");
	int temp;
	temp = * p1;
	*p1 = * p2;
	*p2 = temp;

}