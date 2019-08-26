#include<stdio.h>
int main()
{
   float power(float a,float b);
   float a,b,c;
   scanf("%f%f",&a,&b);
   c=power(a,b);
   printf("%f\n",c);
   return 0;
}
float power(float a,float b)
{
    float x,i;
    x=1;
    for (i=1;i<=b;i++)
    {x=x*a;}
    return (x);
}
