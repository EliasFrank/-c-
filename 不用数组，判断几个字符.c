#include<stdio.h>
int main()
{
    char c,i,j,k,l;
    i=j=k=l=0;
    printf("������һ���ַ�:\n");
    while(1)
    {
        scanf("%c",&c);
        if(64<c&&c<91||96<c&&c<123) i++;
        else if (c==32) j++;
        else if(47<c&&c<58) k++;

        else l++;
        if(c=='\n') break;
    }
    printf("������%d���ַ���%d���ո�%d�����֣�%d�������ַ�\n",i,j,k,l-1);
}
