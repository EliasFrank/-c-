#include"stdio.h"
#include"stdlib.h"
#define LEN sizeof(struct student)
struct student
{
	int num;
	char name[20];
	float score;
	struct student *next;
};
int n = 0;//n��Ϊһ��ȫ�ֱ�������¼�����ж��ٸ�����
struct student *creat()
{
	struct student *p1, *p2, *head;
	p1 = p2 = (struct student *)malloc(LEN);
	printf("������ѧ�ţ�����: ");
	scanf_s("%d%f", &p1->num, &p2->score);
	head = NULL;
	while (p1->num) {
		n++;
		if (n == 1) head = p1;
		else p2->next = p1;
		p2 = p1;
		p1 = (struct student *)malloc(LEN);
		printf("������ѧ�ţ�����: ");
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
		} while (p != NULL);
}
struct student *delete(struct student *head)
{
	int a;
	printf("����������ɾ���ĸ����ѧ�ţ�");
	scanf_s("%d", &a);
	struct student *p1, *p2;
	if (head == NULL) {
		printf("�ձ�\n");
		goto end;
	}
	p1 = head;
	p2 = p1;
	while ( a != p1->num && p1->next != NULL) {
		p2 = p1; p1 = p1->next;
	}
	if (p1->num == a) {
		if (p1 == head) head = p1->next;
		else p2->next = p1->next;
		printf("����ɾ��...\n");
		n = n - 1;
	}
	else printf("û���ҵ�ѧ��Ϊ%d��ѧ��\n",a);
	print(head);
end:return 0;
}

int main()
{
	struct student *head;
	head = creat();
	print(head);
	head=delete(head);
	system("pause");
}