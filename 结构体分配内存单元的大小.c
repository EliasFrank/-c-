#include<Stdio.h>
#include<stdlib.h>
int main()
{
	struct student
	{
		int num;
		char name[20];
		char sex;
		int age;
		float score;
		char sddr[30];
	}; 
	printf("%d\n", sizeof(struct student));
	system("pause");
}