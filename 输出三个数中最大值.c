#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("请输入三个整数:  "); 
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		i=a;
		a=b;
		b=i;
	}
	if(a<c)
	{
		i=a;
		a=c;
		c=i;
	} 
	printf("max=%d\n",a);
} 