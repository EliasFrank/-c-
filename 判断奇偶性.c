#include<stdio.h>
int main()
{
   int a,b ;
   printf("请输入一个整数：   ");
   scanf("%d",&a);
   b=a%2;
   if(b==0)  printf("%d是偶数\n",a);
   else printf("%d是奇数",a);
}
