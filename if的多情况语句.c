#include<stdio.h>
int main()
{
	int score;
	printf("please input a score: "); 
	scanf("%d",&score);
	if (score<0||score>100)
	{
		printf("the score is error\n");
	}
	else if(score<60)
	{
		printf("E\n");
	}	
	else if(60<=score&&score<70)
	{
		printf("D\n");
	}
	else if(70<=score&&score<80)
	{
		printf("C\n");
	}
	else if(80<=score&&score<90)
	{
		printf("B\n");
	}
	else 	printf("A\n");
}