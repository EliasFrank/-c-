#include<stdio.h>
#include<stdlib.h>
#include"vary.h"
#include"check.h"
int main()
{
	int want,place,num[10],min = 0,max = 9;
	int check(int a[10], int key, int max, int min);
	void vary(int a[]);
	printf("������ʮ������\n");
	for (int i = 0; i < 10; i++) 
			scanf_s("%d", &num[i]);
	vary(num);
	printf("����������Ҫ���ҵ�����");
	scanf_s("%d", &want);
	place = check(num, want, max, min) ;
	if (place==0) printf("û�ҵ������\n");
	else printf("������ǵ�%d����\n", place + 1);
	system("pause");
}