#include<stdio.h>
int main()
{
    int i,j,k; char c;
    i = j = k = 0;
    while((c=getchar())!=EOF)
    {
        if('0'<=c&&c<='9')
          i++;
        else if(c=='\t'||c=='\n'||c==' ')
         j++;
        else k++;
    }
    printf("有%d个数字，%d个空白符，%d个其他字符\n");
}
