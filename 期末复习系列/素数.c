#include<stdio.h>
#include"stdlib.h"
int main()
{
	int num, flag = 0;
	printf("please input a number: ");
	scanf_s("%d", &num);
	while (num < 3) {
		printf("error\nplease input again: ");
		scanf_s("%d", num);
	}
	for (int i = 2; i < num; i++) {
		if ((num%i)==0) {
			flag = 1; break;
		}
	}
	if (flag) printf("这不是一个素数\n");
	if (!flag) printf("这是一个素数\n");
	system("pause");
}