#include<stdio.h>
int main()
{
   printf("������һ����ĸ��  ");
   char a;
   a=getchar();
   if(65<=a&&a<=90)
       {
        printf("%c\n",a);
       }
        else if(97<=a&&a<=122)
        {
          a=a-32 ;
          printf("%c\n",a);
        }
    else printf("�ⲻ��һ����ĸ\n");
}
