#include<stdio.h>
int main()
{
    char a[20];
    int b,i,j,k,l;
    printf("������һ���ַ��� ");
    gets(a) ;
    i=j=k=l=0;
    for(b=0;b<20;b++)
    {
        if(64<a[b]&&a[b]<91||96<a[b]&&a[b]<123) i++;
        else if (a[b]==32) j++;
        else if(47<a[b]&&a[b]<58) k++;

        else l++;
        if(a[b]=='\0') break;
    }
    printf("��%d��Ӣ����ĸ����%d���ո���%d�����֣���%d�������ַ�\n",i,j,k,l-1);
}

