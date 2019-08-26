#include<stdio.h>
int main()
{
   int i,j,b[3][2];
   int a[2][3]={{1,2,3},{4,5,6}};
   for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            b[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("%d\t%d\n",b[0][0],b[0][1]);
    printf("%d\t%d\n",b[1][0],b[1][1]);
    printf("%d\t%d\n ",b[2][0],b[2][1]);
}
