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
	for (int i = 2;; i++) {
		if (!(num%i)) {
			flag = 1; break;
		}
	}
	if (falg) printf("�ⲻ��һ������\n");
	if (!falg) printf("����һ������\n");
	system("pause");
}