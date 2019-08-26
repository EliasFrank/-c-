#include<stdio.h>
int main()
{
	float a,b,c,max,min;
	scanf("%f%f%f",&a,&b,&c);
	{
	if (a>b) 
	max=a,min=b;
	else max=b,min=a;
	}
	{
		if(max<c) max=c;
        else if(min>c) min=c;
	}
	printf("max=%f,min=%f\n",max,min);
	return 0;
}