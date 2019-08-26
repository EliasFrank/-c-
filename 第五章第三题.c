#include <stdio.h>
int main()
{
    int m,n,min,a;
    aa:printf("请输入两个正整数： ");
    scanf("%d%d",&m,&n);
    if(m>0&&n>0)
    {
        for(a=1;a<=m*n;a++)
        {
            if(0==a%m&&0==a%n)
            {
                printf("%d和%d的最小公倍数为%d\n",m,n,a);
                break;
            }
        }
        if(m<n) min=m;
        else min=n;
        for(a=min;a>1;a--)
        {
         if(m%a==0&&n%a==0)
          {
            printf("%d和%d的最大公约数为%d\n",m,n,a);
            break;
          }
        }
    if(1==a) printf("这两个数没有最大公约数\n");
    }
    else
    {
        printf("这两个数至少有一个不是正整数\n");
        goto aa;
    }
}
