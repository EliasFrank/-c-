#include<stdio.h>
#include<stdlib.h>
int flagrow, flagcol;
int main()
{
	int num[][3] = { 1,3,2,5,6,3 };
	int search(int *num);
	int max;
	int(*p)[3];
	p = num;
	max = search(p);
	printf("�������%d���ڵ�%d�У���%d��", max, flagrow, flagcol);
	system("pause");
}
int search(int(*num)[3])
{
	int max = **num;
	int i, j;
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			if (max < *(*(num + i) + j)) {
				max = *(*(num + i) + j);
				flagrow = i + 1;
				flagcol = j + 1;
			}
	return max;
}