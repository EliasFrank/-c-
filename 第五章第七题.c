#include<stdio.h>
int main()
{
    float s1,s2,s3,s,k;
    s1=s2=s3=s=0;
    for(k=1;k<=10;k++)
    {
        s1=s1+k;
    }
    for(k=1;k<=50;k++)
    {
        s2=s2+k*k;
    }
    for(k=1;k<=10;k++)
    {
        s3=s3+1/k;
    }
    s=s1+s2+s3;
    printf("%f",s);
}
