#include<stdio.h>
int main()
{
    int num[10]={0,1,2,3,4,5,6,7,8,9};
    int a,i;
    printf("please input  a number: ");
    scanf("%d",&a);
    for(i=0;i<10;i++)
    {
        if(a==num[i]) break;
    }
    if(10==i)
    printf("there is no such number\n");
    else
    printf("this number is the %dth \n",i+1);
}
