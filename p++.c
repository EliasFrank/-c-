#include<Stdio.h>
#include<stdlib.h>
int main()
{
	int *p, i, a[10];
	
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	putchar('\n');
    p = a;
	for (i = 0; i < 10; i++, p++)
		printf("%d ", *p);
	system("pause");
}
