#include<stdio.h>
#include<stdlib.h>
#define PI 3.1415926
#define S PI*r*r
void main()
{
	double s;
	int r;
	printf("please input the radius: ");
	scanf_s("%d", &r);
	s = S;
	printf("\nthe area of the roundness = %f\n", s);
}