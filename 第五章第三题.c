#include <stdio.h>
int main()
{
    int m,n,min,a;
    aa:printf("������������������ ");
    scanf("%d%d",&m,&n);
    if(m>0&&n>0)
    {
        for(a=1;a<=m*n;a++)
        {
            if(0==a%m&&0==a%n)
            {
                printf("%d��%d����С������Ϊ%d\n",m,n,a);
                break;
            }
        }
        if(m<n) min=m;
        else min=n;
        for(a=min;a>1;a--)
        {
         if(m%a==0&&n%a==0)
          {
            printf("%d��%d�����Լ��Ϊ%d\n",m,n,a);
            break;
          }
        }
    if(1==a) printf("��������û�����Լ��\n");
    }
    else
    {
        printf("��������������һ������������\n");
        goto aa;
    }
}
