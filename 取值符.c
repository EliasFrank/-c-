#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[3][4]= { 0,1,2,3,4,5,6,7,8,9,10,11 };
	int (*p)[4], i, j;
	aa: printf("请输入行i= ");
	scanf("%d", &i);
	if (i < 0 || i>2) goto aa;
	bb: printf("请输入列j= ");
	scanf("%d", &j);
	if (j < 0 || j > 3) goto bb;
	p = num;
	putchar('\n');
	printf("%d \n", * (* ( p + i) + j ));
	system("pause");
}
