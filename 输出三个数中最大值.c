#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("��������������:  "); 
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