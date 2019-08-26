#include<stdio.h>
int main()
{
    int i,j,k;
    int num[10][10];
    for(i=0;i<10;i++)
    num[i][0]=1;
    for (i=0;i<10;i++)
    num[i][i]=1;
    for(i=2;i<10;i++)
        for(j=1;j<i;j++)
            num[i][j]=num[i-1][j]+num[i-1][j-1];
    for(i=0;i<10;i++)
    {
        for(k=10-i;k>0;k--)
            printf("  ");
        for(j=0;j<=i;j++)
        {
            printf("%4d ",num[i][j]);
        }
    printf("\n");
    }

}
