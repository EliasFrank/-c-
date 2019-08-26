#include<stdio.h>
#include<stdlib.h>
struct people
{
	int num;
	char name[20]; 
	char sex;
	char job;
	union stu
	{
		int class;
		char position;
	}jo;
}person[10];
int main()
{
    int i;
    char q;
	for ( i = 0; i < 2; i++) {
		printf("请输入号码：");
		scanf("%d", &person[i].num);
		printf("请输入姓名：");
		scanf("%s",&person[i].name);
		q=getchar();
		printf("请输入性别：");
	   person[i].sex=getchar();
		printf("请输入职业(学生请输入s，教师请输入t)：");
		q=getchar();
		scanf("%c", &person[i].job);
		q=getchar();
		if (person[i].job == 's') {
			printf("请输入班级：");
			scanf("%d", &person[i].jo.class);
		}
		else if (person[i].job == 't') {
			printf("请输入职位：");
			gets( person[i].jo.position);
		}
		else  printf("职业输入有误\n"); 
	}
	for (i = 0; i < 2; i++) {
		printf("号码：%d\n", person[i].num);
		printf("姓名：%s\n", person[i].name);
		printf("性别：%c\n", person[i].sex);
		printf("职业：%s\n", person[i].job);
		if (person[i].job == 's') 
			printf("班级：%d\n", person[i].jo.class);
		if (person[i].job == 't') 
			printf("职位：%s", person[i].jo.position);
	}
	system("pause");
}
