#include<stdio.h>
int main()
{
	char a ;
	printf("please input a sign: ");
	//scanf("%c",&a);
	a=getchar();
	a=(64<a&&a<91)?a+32:a;
	printf("%c\n",a);
}