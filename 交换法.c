#include<stdio.h>
#include<stdlib.h>
#define n 5
int main()
{
	int f[n];
	int j, i, t, max;
	printf("please input %d numbers:\n",n);
	for (i = 0; i < n; i++)
		scanf("%d", &f[i]);
	for (j = 0; j <n; j++)
	{
		max = j;
		for (i = j + 1; i < n; i++)
		{
			if (f[max] < f[i])
	   {	t = f[max]; f[max] = f[i]; f[i] = t;}
		  }
		
    }
	 for(i=0;i<n;i++)
        printf("%d\n", f[i]);
        system("pause");
}
