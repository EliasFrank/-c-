#include<stdio.h>
#include<stdlib.h>
#define SAY(y) (y)
int  main()
{
	int i = 0;
	char say[] = "hello world";
	while (say[i])
	{
		say[i] = SAY(say[i] * 1 + 1 - 1);
		i + + ;
	}
	printf("%s\n",say);
}