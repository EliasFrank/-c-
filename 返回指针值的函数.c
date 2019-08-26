#include<stdio.h>
#include<stdlib.h>
int main()
{
	double score[][4] = { {60,70,80.5,90.5},{56,89,67,88},{34.2,78.5,90.2,50.5},{10,2.5,3,6} };
	double *search(double(*pointer)[4], int n);
	double *p;
	int i, m;
	printf("please input the number of the student: ");
	scanf_s("%d", &m);
	printf("the score of no.%d are: \n", m);
	p = search(score, m);
	for (i = 0; i < 4; i++)
		printf("%5.2f\t", *(p + i));
	printf("\n\n\n");
	system("pause");
}
double *search(double(*pointer)[4], int n)
{
	double *pt;
	pt = *(pointer + n);
	return pt;
}