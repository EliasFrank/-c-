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
		printf("��������룺");
		scanf("%d", &person[i].num);
		printf("������������");
		scanf("%s",&person[i].name);
		q=getchar();
		printf("�������Ա�");
	   person[i].sex=getchar();
		printf("������ְҵ(ѧ��������s����ʦ������t)��");
		q=getchar();
		scanf("%c", &person[i].job);
		q=getchar();
		if (person[i].job == 's') {
			printf("������༶��");
			scanf("%d", &person[i].jo.class);
		}
		else if (person[i].job == 't') {
			printf("������ְλ��");
			gets( person[i].jo.position);
		}
		else  printf("ְҵ��������\n"); 
	}
	for (i = 0; i < 2; i++) {
		printf("���룺%d\n", person[i].num);
		printf("������%s\n", person[i].name);
		printf("�Ա�%c\n", person[i].sex);
		printf("ְҵ��%s\n", person[i].job);
		if (person[i].job == 's') 
			printf("�༶��%d\n", person[i].jo.class);
		if (person[i].job == 't') 
			printf("ְλ��%s", person[i].jo.position);
	}
	system("pause");
}
