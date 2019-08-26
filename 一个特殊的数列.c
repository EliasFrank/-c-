#include<stdio.h>

int main()
{
   int a,b,i,n;
   a=1,b=1,i=0;
   printf("1\n1\n");
   for(n=3;n<=40;n++)
    {
      i=a+b;
      b=a;
      a=i;
      printf("%d\n",i);
    }
}
