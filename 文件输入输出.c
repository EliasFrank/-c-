#include<stdio.h>
#include<stdlib.h>
#define SIZE 2
struct student
{
    int num;
    char name[20];
    float score;
}stu[SIZE];
int main()
{
    FILE *fp;
    int i,j,k,l;
    if((fp=fopen("C:\\test\\student","wb+"))==NULL){
       printf("error\n");
       exit (0);
    }
    for(i=0;i<SIZE;i++)
    {
      printf("��%d��ѧ��\n",i+1);
      printf("������ѧ�ţ�");
      scanf("%d",&stu[i].num);
      printf("������������");
      scanf("%s",&stu[i].name);
      printf("�����������");
      scanf("%f",&stu[i].score);
    }

     for(i=0;i<SIZE;i++)
    {
        fwrite(&stu[i],sizeof(struct student ),1,fp);
    }
    fp=fopen("C:\\test\\student","wb+") ;
    for(i=0;i<SIZE;i++)
    {
        fread(&stu[i],sizeof(struct student ),1,fp);
        printf("%d  %s  %.2f\n",stu[i].num,stu[i].name,stu[i].score);
    }
    fclose(fp);
}
