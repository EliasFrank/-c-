#include<Stdio.h>
#include<stdlib.h>
int main()
{
	struct student
	{
		int num;
		char *name;
		char sex;
		float score;
	}boy1, boy2 = { 102,"jane",'M',98.5 };
	boy1 = boy2;
	printf("number = %d\nname = %s\nscore = %d\n", boy1.num, boy1.name, boy1.score);
	printf("\n");
	printf("number = %d\nname = %s\nscore = %d\n", boy2.num, boy2.name, boy2.score);
	system("pause");
}