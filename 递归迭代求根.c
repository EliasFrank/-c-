#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a, b, c, d;
	float result;
	float qiugen( int, int, int,int );
	printf("ÇëÒÀ´ÎÊäÈëa,b,c,d\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	result = qiugen(a, b, c, d);
	printf("%f\n", result);
	system("pause");
}
float qiugen( int a, int b, int c, int d)
{
	float  x=1, fx, fx0, x0;
	do{
	x0 = x;
	fx = (a*x0*x0*x0 + b * x0*x0 + c * x0 + d);
	fx0 = (3 * a*x0*x0 + 2 * b*x0 + c);
	x = x0 - fx / fx0; }
	while(fabs(x - x0) >= 1e-3) ;
	return x;
}
