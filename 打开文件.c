#include<stdio.h>
#include<stdlib.h>
#define LEN 10000
int main()
{
    FILE *fp;
    char read[LEN];
    if((fp=fopen("C:\\test\\hello.txt","r+"))==NULL)
    {
        printf("error\n");
        exit(0);
    }
    while(!feof(fp))
    {
    fgets(read,LEN,fp);
    printf("%s",read);
    }
    fclose(fp);
}

