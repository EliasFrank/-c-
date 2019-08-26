#include<stdio.h>
int main()
{
    float h,s,i;
    h=s=100;
    for(i=1;i<=10;i++)
    {
        h=(1.0/2)*h;
        s=s+2*h;
    }
    printf("共经过%f米，第十次反弹高度为%f\n",s,h);
}
