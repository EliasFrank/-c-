#include<stdio.h>
int main()
{
    int max(int x,int y);
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=max(a,b);//ʵ�ʲ���
    printf("max is %d\n",c);
}
int max(int x,int y)//��ʽ����
{
    int z;
    z=x>y?x:y;
    return z;
}
