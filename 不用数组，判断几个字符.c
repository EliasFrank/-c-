#include<stdio.h>
int main()
{
    char c,i,j,k,l;
    i=j=k=l=0;
    printf("请输入一行字符:\n");
    while(1)
    {
        scanf("%c",&c);
        if(64<c&&c<91||96<c&&c<123) i++;
        else if (c==32) j++;
        else if(47<c&&c<58) k++;

        else l++;
        if(c=='\n') break;
    }
    printf("其中有%d个字符，%d个空格，%d个数字，%d个其他字符\n",i,j,k,l-1);
}
