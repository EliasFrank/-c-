#include<stdio.h>
int main()
{
    int sum=0,i,j,num[3][3];
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
        scanf("%d",&num[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        if(i!=1&&j!=1)
            sum=sum+num[i][j];
    }
    sum=sum+num[1][1];
    printf("%d",sum);
}
