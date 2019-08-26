              #include<stdio.h>

int main()
{
   int i;
   int a[20]={1,1};
   printf("1\t1\t");
   for(i=2;i<=19;i++)
    {
       a[i]=a[i-1]+a[i-2];
       printf("%d\t",a[i]);
    }
}

