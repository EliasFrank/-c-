#include<stdio.h>
#include<math.h>
int main()
{
	printf("������һ��С��1000������:  \n");
	int a;
	scanf("%d",&a);
	if(a<1000) 
	{
		a=sqrt (a);
		printf("%d\n",a);
	}
	else printf("����������һ��1000���ڵ���\n");
} 