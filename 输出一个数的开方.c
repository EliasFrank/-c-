#include<stdio.h>
#include<math.h>
int main()
{
	printf("请输入一个小于1000的正数:  \n");
	int a;
	scanf("%d",&a);
	if(a<1000) 
	{
		a=sqrt (a);
		printf("%d\n",a);
	}
	else printf("请重新输入一个1000以内的数\n");
} 