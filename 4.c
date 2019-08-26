#include<stdio.h>
int main()
{
    int a,i,j;
    int num[5]={1,4,6,8,12};
    int b[6];
    printf("请输入一个数：");
    scanf("%d",&a);
    for(i=0;i<6;i++)
    {
        if(num[i]>a) {break;}
        else b[i]=num[i];
    }
    b[i]=a;
    for(;i<6;i++)
        b[i+1]=num[i];
    for(i=0;i<6;i++)
        printf("%d\t",b[i]);
}
