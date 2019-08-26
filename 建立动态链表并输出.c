#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
	int num;
	float score;
	struct student *next;
};
int n = 0;
struct student *creat()
{
	struct student *p1, *p2, *head;
	p1 = p2 = (struct student *)malloc(LEN);
	printf("请输入学号，分数: ");
	scanf_s("%d%f", &p1->num, &p2->score);
	head = NULL;
	while (p1->num) {
		n++;
		if (n == 1) head = p1;
		else p2->next = p1;
		p2 = p1;
		p1 = (struct student *)malloc(LEN);
		printf("请输入学号，分数: ");
		scanf_s("%d%f", &p1->num, &p1->score);
	}
		p2->next = NULL;
		return head;
}
void print(struct student *head)
{
	struct student *p;
	p = head;
	if (head != NULL)
		do {
			printf("%d\t%.1f\n", p->num, p->score);
			p = p->next;
		}while (p != NULL);
}
int main()
{
	struct student *head;
	head = creat();
	print(head);
	system("pause");
}