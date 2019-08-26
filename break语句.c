#include<stdio.h>
int main()
{
	int r,area;
	float pi=3.14159;
	for(r=1;r<=10;r++)
	{
		area=pi*r*r;
		if(area>100)
		{
			break;
		}
	printf("r=%d,area=%f\n",r,area);
	}
} 