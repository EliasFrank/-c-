#include<stdio.h>
int main()
{
    int a[10];
    int i,j,k;
    printf("please input ten numbers:\n");
    for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
          if(a[j]>a[j+1])
          {
            k=a[j+1];
            a[j+1]=a[j];
            a[j]=k;
          }
        }
    }
    for(i=0;i<10;i++)
     printf("%d\t",a[i]);
}
