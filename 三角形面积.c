#include<stdio.h>
#include<math.h>
int main()
{
	float s,area,a,b,c;
	printf("请输入三角形的三边长\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(1.0/2)*(a+b+c);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形的面积为：%f",area);
} 