#include<stdio.h>
#include<math.h>
int main()
{
	float s,area,a,b,c;
	printf("�����������ε����߳�\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(1.0/2)*(a+b+c);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("�����ε����Ϊ��%f",area);
} 