#include<stdio.h>
int main()
{
	printf("������һ������  ");
	double x,y;
	scanf("%lf",&x);
	if(x<1)
	{
		y=x;
	}
	if(x>=1&&x<10)
	 {
		y=2*x-1;
	 }
    if(x>=10) 
	{
	  y=3*x-11;
	}
	printf("%lf\n",y);
} 