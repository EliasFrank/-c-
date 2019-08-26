#include<stdio.h>
#include<stdlib.h>
struct student
{
	int num;
	char name[20];
	float score[3];
};
//void print(struct student);
void print(strut student *p);
int main()
{
	struct student stu;
	stu.num = 8;
	strcpy(stu.name, "hello world!");
	stu.score[0] = 98.5;
	stu.score[1] = 99.0;
	stu.score[2] = 99.5;
	//print(stu);
	print(&stu);
	system("pause");
}
void print(struct student *p)
//void print(struct student stu)
{
	int i;
	printf("\tname: %s\n", stu->name);
	printf("\tnum: %d\n", stu->num);
	for (i = 0; i < 3; i++) {
		printf("\tscore: %.2f\n", stu->score[i]);
	}
}