#include<stdio.h>
int main()
{
    int max(int x,int y);
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=max(a,b);//实际参数
    printf("max is %d\n",c);
}
int max(int x,int y)//形式参数
{
    int z;
    z=x>y?x:y;
    return z;
}
