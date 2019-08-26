#include<stdio.h>
int main()
{
   int a,g,i;
   printf("请输入一个不多于五位数的正整数： ");
   scanf("%d",&a);
   for(i=0;a!=0;i++)
   {
      g=a%10;
      a=a/10;
      printf("%d",g);
   }
   printf("\n这个数是%d位数。\n",i);
}
