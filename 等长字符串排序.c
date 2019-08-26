#include<stdio.h>
#include"stdlib.h"
int main()
{
	void myscanf(char(*str)[20]);
	void maopao(char(*str)[20]);
	void myprintf(char(*str)[20]);
	char str[10][20];
	myscanf(str);
	maopao(str);
	myprintf(str);
	system("pause");
}
void myscanf(char (*str)[20])
{
	int i;
	for (i=0 ; i<10; i++, str++) {
		gets(*str);
		if (i != 0) {
			while (strlen(*str) != strlen(*(str - 1))) {
				printf("输入有误，请重新输入\n");
				gets(*str);
			}
		}
	}
}
void maopao(char (*str)[20])
{
	char temp[20];
	int i, j, flag;
	for (i = 0; i < 10; i++) {
		flag = i;
		for (j = i; j < 10; j++) {
			if (strcmp(*(str + j),*(str + flag) )>0) flag = j;
		}
		strcpy(temp, *(str + i));
		strcpy(*(str + i), *(str + flag));
		strcpy(*(str + flag), temp);
	}
}
void myprintf(char (*str)[20])
{
	int i;
	printf("\n\n");
	for (i = 0; i < 10; i++, str++) {
		printf("%s\n",*str);
	}
}