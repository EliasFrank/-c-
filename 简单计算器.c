/*这是一个简单的计算器*/ 
#include<stdio.h>
int main()
{
	float a,b,i;
	char c;
	printf("please input a+(-,*,/)\n");
    scanf("%f%c%f",&a,&c,&b);
    switch(c)
    {
	case '+':i=a+b;break;
    case '-':i=a-b;break;
    case '*':i=a*b;break;
    case '/':i=a/b;break;
    default:printf("error\n");
    }
    printf("%f\n",i);
}