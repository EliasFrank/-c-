#include<stdio.h>
#include<stdio.h>
struct student
{
	int num;
	float score;
	struct student *next;
};
int main()
{
	struct student a, b, c, *head;
	a.num = 001;
	b.num = 002;
	c.num = 003;
	a.score = 97.8;
	b.score = 90.5;
	c.score = 76.0;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	do {
		printf("%ld  %5.1f\n", head->num, head->score);
		head = head->next;
	} while (head);
	system("pause");
}