#include<stdio.h>
int main()
{
    float h,s,i;
    h=s=100;
    for(i=1;i<=10;i++)
    {
        h=(1.0/2)*h;
        s=s+2*h;
    }
    printf("������%f�ף���ʮ�η����߶�Ϊ%f\n",s,h);
}
