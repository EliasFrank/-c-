#include<stdio.h>
int main()
{
   int a,g,i;
   printf("������һ����������λ������������ ");
   scanf("%d",&a);
   for(i=0;a!=0;i++)
   {
      g=a%10;
      a=a/10;
      printf("%d",g);
   }
   printf("\n�������%dλ����\n",i);
}
