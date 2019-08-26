#include"stdio.h"
#include"stdlib.h"
typedef struct student
{
	int num;
	char name[20];
	float score;
	struct student *next;
}s;
int main()
{
	s *head, *p1, *p2;
	head = (s *)malloc(sizeof(s));
	p1 = p2 = head;
	while (p2->num!=0) {
		printf("请输入学号，姓名，成绩：");
		scanf("%d%s%f", &p1->num, p1->name,&p1->score);
		p2 = p1;
       	p1 = (s*)malloc(sizeof(s));
		p2->next = p1;
	}
	p1 = head;
	while(p1->num){
        printf("%d  %s  %.1f\n",p1->num,p1->name,p1->score);
        p1 = p1->next;
    }
}
