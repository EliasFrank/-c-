#pragma warning (disable : 4996)
#include<stdio.h>
#include<stdlib.h>
#define N 5
//����һ���ṹ������
struct student
{
	int num;//ѧ��
	char name[20];//����
	float chinese;//���ĳɼ�
	float math;//��ѧ�ɼ�
	float english;//Ӣ��ɼ�
	float ave;//ƽ����
}stu[N];
FILE *fp;//ȫ�ֵ��ļ�ָ�����
int main()
{
	void mysave(struct student *);
	void myscanf();//��������ṹ��
	myscanf();//���ṹ�������Ա��ֵ
	mysave(stu);//�����������������
	system("pause");
}
void myscanf()
{
	printf("������ѧ�ţ����������ųɼ�\n");
	//ѭ���������ѧ���ĸ�����Ϣ
	for (int i = 0; i < N; i++) {
		scanf("%d", &stu[i].num);
		scanf("%s", &stu[i].name);
		//�����gets����Ҫ���в��ܽ�������
		scanf("%f%f%f",&stu[i].chinese, &stu[i].math, &stu[i].english);
		stu[i].ave = (stu[i].chinese + stu[i].math + stu[i].english)/3;
	}
}
void mysave(struct student *stu)
{
	if ((fp = fopen("C:\\test\\student.txt", "w")) == NULL) {
		printf("error\n");
		exit(0);
	}
	//���ı���ʽ���ļ�д��һ������
	for (int i = 0; i < N; i++) {
		fprintf(fp, "%d   %s  %5.1f %5.1f %5.1f %5.1f\n", stu[i].num
		, stu[i].name, stu[i].chinese, stu[i].math, 
			stu[i].english, stu[i].ave);
	}
	fclose(fp);
}