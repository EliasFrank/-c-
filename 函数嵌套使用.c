#include<stdio.h>
int square(int x);//ʵ��ƽ��
int factorial(int y);//ʵ�ֽ׳�
int main()
{
    int x,sum;
    x=2;
    sum=factorial(x);
    printf("sum=%d\n",sum);
}
int factorial(int x)
{
    int i,y;
    int square(int x);
    x=square(x);
    y=x;
    for(i=1;i<y;i++)
    {
        x=x*i;
    }
    return x;
}
int square(int x)
{
    x=x*x;
    return x;
}
