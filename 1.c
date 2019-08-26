#include<stdio.h>
int main()
{
    int a,i,j;
    int num[100];
    for(i=0;i<100;i++)
    num[i]=i+1;
    printf("100以内的素数有： 1\t2\t");
    for(i=2;i<100;i++)
    {
        for(j=2;j<i+1;j++)
        {if(num[i]%j==0)
           break;
        }
        if(j==i+1)
        printf("%d\t",num[i]);
    }
}
