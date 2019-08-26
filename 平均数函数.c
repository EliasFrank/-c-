#include<stdio.h>
#include<stdlib.h>
float average(float a[10]);
int main()
{
	float sum, ave;
	float a[10] ={ 90,88,45,98,34,68,71,85,86,100 };
	ave = average(a);
	printf("%.2f", ave);
	system("pause");
}
float average( float a[10] )
{
	int i;
	float sum=0;
	for (i = 0; i < 10; i++)
	{
		sum = sum + a[i];
	}
	sum /= 10;
	return sum;
}
