#include<stdio.h>
int main()
{
    char a[20];
    int b,i,j,k,l;
    printf("请输入一串字符： ");
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
    printf("有%d个英文字母，有%d个空格，有%d个数字，有%d个其他字符\n",i,j,k,l-1);
}

