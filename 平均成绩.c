#include<stdio.h>
int main ()
{
    int i,j;
    float average,v[3],sum=0;
    int a[5][3]={{80,75,92},{61,65,71},{59,63,70},{85,87,90},{76,77,85}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
         {
          sum+=a[j][i];
         }
        v[i]=sum/5;
        sum=0;
    }
    average=(v[0]+v[1]+v[2])/3;
    printf("math:%f\nc:%f\nfoxpro:%f\n",v[0],v[1],v[2]);
    printf("total:%f\n",average);
}
