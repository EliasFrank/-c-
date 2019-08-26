#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,k,n=3;
    FILE *fp;
    char str[3][10];
    printf("enter string:\n");
    for(i=0;i<n;i++)
    gets(str[i]);
    if((fp=fopen("C:\\test\\haha.txt","w"))==NULL)
    {
        printf("cannot open file!\n");
        exit(0);
    }
    printf("\nthe sequence:\n");
    for(i=0;i<n;i++)
    {
        fputs(str[i],fp);
        fputs("\n",fp);
        printf("%s\n",str[i]);
    }
    return 0;
}
