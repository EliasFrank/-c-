#include<stdio.h>
int main()
{
    int i,a,flag;
    int num[5]={1,23,4,5,7};
    scanf("%d",&a);
    for(i=0;i<5;i++){
        if(num[i]==a) {
        flag=i;
        break;
         }
    }
    for(i=flag;i<5;i++){
        num[i]=num[i+1];
    }
    for(i=0;i<4;i++)
    {printf("%d ",num[i]);}
}
