#include<stdio.h>
int main()
{
    void cs(char *from,char *to);
     char *a="hl are very intellgent";
     char *b="i am beautiful";
     cs(a,b);
     printf("%s\n%s\n",a,b);
}

void cs(char *from,char *to)
{
     for( ; *from!='\0';from++,to++)
           *to=*from;
     *to='\0';
}
