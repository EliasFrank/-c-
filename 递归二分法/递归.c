#include<stdio.h>
#include<stdlib.h>
#include"vary.h"
#include"check.h"
int main()
{
	int want,place,num[10],min = 0,max = 9;
	int check(int a[10], int key, int max, int min);
	void vary(int a[]);
	printf("请输入十个数：\n");
	for (int i = 0; i < 10; i++) 
			scanf_s("%d", &num[i]);
	vary(num);
	printf("请输入你想要查找的数：");
	scanf_s("%d", &want);
	place = check(num, want, max, min) ;
	if (place==0) printf("没找到这个数\n");
	else printf("这个数是第%d个数\n", place + 1);
	system("pause");
}