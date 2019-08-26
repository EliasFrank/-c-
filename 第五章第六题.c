#include<stdio.h>
int main()
{
    long int i,j,n,s=0;
    for(n=1;n<20;n++)
    {
        j=n;
        for(i=1;i<n;i++)
        {
            j=j*i;
        }
        s=s+j;
    }
    printf("×ÜºÍÎª%ld\n",s);
}
