#include<stdio.h>
#include<stdlib.h>
struct student
{
	int num;
	float score;
	struct student *next;
}a,b,c,*p,*head;
int main()
{
	a.num = 001; b.num = 002; c.num = 003;
	a.score = 99.8; b.score = 95.5; c.score = 67.5;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p=head;
	while (p!=NULL)
	{
		printf("num: %d\tscore:%.2f\n", p->num, p->score);
		p = p->next;
	}
	system("pause");
}
