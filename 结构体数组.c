#include<Stdio.h>
#include<stdlib.h>
#define NUM 3
struct person
{
	char name[20];
	char phone[10];
};

void main()
{
	struct person man[NUM];
	int i;
	for (i = 0; i < NUM; i++)
	{
		printf("input name:\n");
		gets(man[i]. name);
		printf("input phone numbers:\n");
		gets(man[i]. phone);
	}
	printf("\tname\t\t\t\tphone\n");
	for (i = 0; i < NUM; i++)
	{
		printf("\t%-20s\n\t\t\t\t\t%-20s\n", man[i].name, man[i].phone);
	}
	system("pause");
}