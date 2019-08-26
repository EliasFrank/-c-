#include<stdio.h>
int main()
{
  float  a,b,i;
  printf("请输入两个数：  ");
  scanf("%f%f",&a,&b);
  if(a<b)
  {
    i=a;
    a=b;
    b=i;
  }
  printf("%f<%f\n",b,a);
}
