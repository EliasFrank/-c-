#include<stdio.h>
int main()
{
    int i,j,max,row,colum;
    int a[3][4]={{1,3,5,2},{0,8,34,14},{4,6,9,7}};
    max=a[0][0];
    for(i=0;i<3;i++)
    {
       for(j=0;j<4;j++)
       if(a[i][j]>max)
       {
          max=a[i][j];
          row=i;
          colum=j;
       }
    }
    printf("%d\n",max);
    printf("%d\t%d\n",row,colum);
}
