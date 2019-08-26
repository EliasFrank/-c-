#include<stdio.h>
int main()
{
    int a,i;
    a=1;
    for(i=9;i>0;i--)
    {
        a=2*(a+1);
    }
    printf("第一天摘了%d个桃子\n",a);
}
