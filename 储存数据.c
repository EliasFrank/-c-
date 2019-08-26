#pragma warning (disable : 4996)
#include<stdio.h>
#include<stdlib.h>
#define N 5
//定义一个结构体数组
struct student
{
	int num;//学号
	char name[20];//姓名
	float chinese;//语文成绩
	float math;//数学成绩
	float english;//英语成绩
	float ave;//平均分
}stu[N];
FILE *fp;//全局的文件指针变量
int main()
{
	void mysave(struct student *);
	void myscanf();//用于输入结构体
	myscanf();//给结构体各个成员赋值
	mysave(stu);//将数组输出到磁盘中
	system("pause");
}
void myscanf()
{
	printf("请输入学号，姓名，三门成绩\n");
	//循环输入五个学生的各项信息
	for (int i = 0; i < N; i++) {
		scanf("%d", &stu[i].num);
		scanf("%s", &stu[i].name);
		//如果用gets则需要换行才能结束输入
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
	//用文本方式向文件写入一组数据
	for (int i = 0; i < N; i++) {
		fprintf(fp, "%d   %s  %5.1f %5.1f %5.1f %5.1f\n", stu[i].num
		, stu[i].name, stu[i].chinese, stu[i].math, 
			stu[i].english, stu[i].ave);
	}
	fclose(fp);
}