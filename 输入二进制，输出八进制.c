#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j;
    i=0;
    j=0;
    printf("请输入一个二进制数\n");
    scanf("%d",&a);
    do
    {
       b=a%10;
       a=a/10;
       j=j+b*pow(2,i);
       i++;
    }while(a>=1);
    printf("%o\n",j);
}
