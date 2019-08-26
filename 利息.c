#include<stdio.h>
#include<math.h>
#define a 1000
int main ()
{
	double r0,r1,r2,r3,r5,p1,p2,p3,p4,p5;
	r0=0.0035,r1=0.015,r2=0.021;
	r3=0.0275,r5=0.03;
	p1=a*(1+5*r5);//一次存五年 
	p2=a*(1+2*r2)*(1+3*r3);//先两年后三年 
	p3=a*(1+3*r3)*(1+2*r2);//先三年后两年 
	p4=a*pow(1+r1,5);//连续五次一年 
	p5=a*pow(1+r0/4,4*5);//活期 
	printf("p1=%f\np2=%f\np3=%f\np4=%f\np5=%f\n",p1,p2,p3,p4,p5);
	getchar();
	return 0;
} 