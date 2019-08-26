#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct vote
{
	char name[20];
	int count;
}people[3] = {"elias",0,"frank",0,"alice",0};

int main()
{
	int i=0,flag;
	char votion[20];
	for (flag = 0; flag < 5; flag++) {
		printf("请输入你投票的名字：");
		gets(votion);
		if (strcmp(votion, people[0].name) == 0)  people[0].count++;
		if (strcmp(votion, people[1].name) == 0)  people[1].count++;
		if (strcmp(votion, people[2].name) == 0)  people[2].count++;
	}
	for (i = 0; i < 3; i++)
	{
		printf("name: %s\ncount : %d\n", people[i].name, people[i].count);
	}
	system("pause");
}