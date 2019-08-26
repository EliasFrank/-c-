#include<stdio.h>
int main()
{
    int a;
    int b,i;
    int sqrt();
    scanf("%d",&a);
    b=sqrt(a);
    printf("%d\n",b);
}
int sqrt(int a)
{
    int i,b;
    for(i=1;i<a;i++)
    {
        b=a/i;
        if(b==i) break;
    }
    return b;
}
