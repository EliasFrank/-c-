#include<stdio.h>
int main()
{
    int a ,b,c,i,j;
    printf(" 请输入两个整数使其做乘法：   ");
    scanf("%d%d",&a,&b);
    c=a*b;
    do
    {
        i=c%10;
        c=c/10;
        printf("%d",i);
    }  while(c>0);
}
