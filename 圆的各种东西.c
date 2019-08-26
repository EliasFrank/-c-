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
   printf("圆周长=%.2lf\n圆面积=%.2lf\n圆球表面积=%.2lf\n圆体积=%.2lf\n圆柱体积=%.2lf\n",c,s1,s2,v1,v2);
   return 0;
   }
