#include<stdio.h>
#define PI 3.14159
int main()
{
   double c,s1,s2,v1,v2;
   float r,h;
   r=1.5;
   h=3;
   c=2*PI*r;
   s1=2*PI*r*r;
   s2=4*PI*r*r;
   v1=4.0/3*PI*r*r;
   v2=s1*h;
   printf("Բ�ܳ�=%.2lf\nԲ���=%.2lf\nԲ������=%.2lf\nԲ���=%.2lf\nԲ�����=%.2lf\n",c,s1,s2,v1,v2);
   return 0;
   }
