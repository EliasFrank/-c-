#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    for (a=1;a<=4;a++)
    {
        for(b=4-a;b>=1;b--)
        {printf(" ");}
        for(c=1;c<=2*a-1;c++)
        {printf("*");}
        printf("\n");
    }
    for (a=3;a>=1;a--)
    {
        for(b=4-a;b>=1;b--)
        {printf(" ");}
        for(c=1;c<=2*a-1;c++)
        {printf("*");}
        printf("\n");
    }
}
