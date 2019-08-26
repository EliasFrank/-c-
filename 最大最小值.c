
#include<stdio.h>
#include<stdlib.h>
int max_min(int *p, int n);//求最大最小值的函数
int min, max;
int main()
{
	int num[10];
	int i, *p;
	p = &num;
	max = min = num[0];
	printf("please input 10 numbers:\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &num[i]);
	max_min(p, 10);
	printf("max=%d,min=%d", max, min);
	system("pause");
	return 0;
}

int max_min(int *p, int n)
{
	max = *p; min = *p;
	for (int i=0; i < 10; i++)
		if (max < *(p + i))
			max = *(p + i);
	for (int i=0; i < 10; i++)
		if (min > *(p + i))
			min = *(p + i);
	return max;
}