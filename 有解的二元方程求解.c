#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,c,q,p,x1,x2,;
	printf("«Î ‰»Îa,b,cµƒ÷µ\n");
	scanf("%f%f%f",&a,&b,&c);
	q=sqrt(b*b-4*a*c)/(2*a);
	p=-b/(2*a);
	x1=q+p;
	x2=q-p;
	printf("x1=%f,x2=%f",x1,x2); 
} 