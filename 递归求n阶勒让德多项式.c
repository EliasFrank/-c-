#include<stdio.h>
#include<stdlib.h>
int main()
{
	float f(int, int);
	int x,  n;
	float result;
	printf("please  input  x=");
	scanf_s("%d", &x);
	printf("please  input  n=");
	scanf_s("%d", &n);
	result = f(n, x);
	printf("%.2f\n", result);
	system("pause");
}
float f(int n, int x)
{
	if (n == 0) return 1;
	else if (n == 1) return x;
	else return(2*n - 1)*x * f( n-1, x) - (n - 1)*f((n-2),x) / n;
}