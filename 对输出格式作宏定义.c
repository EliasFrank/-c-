#include<stdio.h>
#include<stdlib.h>
#define P printf
#define D "%d\n"
#define F "%f\n"

int main()
{
	int a = 5;
	float b = 3.8;
	P(D F, a, b);
	system("pause");
}