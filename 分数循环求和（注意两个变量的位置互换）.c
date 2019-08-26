#include<stdio.h>
int main()
{
    int i;
    float a,b,c,t,sum;
    a=1;
    b=2;
    sum=0;
    for(i=1;i<=20;i++)
    {
        c=b/a;
        t=b;
        b=a+b;
        a=t;
        sum=sum+c;
    }
    printf("sum=%f\n",sum);
}
