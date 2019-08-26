#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define A 1000
enum Color
{
    black,blue,green,lake_blue,red,purple,yellow,
    white,gray,light_yellow
};
void set_color(unsigned short text_color,unsigned short back_color)
{
    char command[9]="color 07";
    command[6]='0'+back_color;
    command[7]='0'+text_color;
    system(command);
}
int main()
{
    int i=0;
    char s[A],c,a;
    FILE *fp;
    AA: if((fp=fopen("C:\\test\\hello.txt","r"))==NULL)
    {
        printf("error\n");
        exit(0);
    }
     while(!feof(fp))
    {

        fgets(s,A,fp);
        printf("%s",s);
    }

    while(1){
        i++;
        Sleep(10);
        if(i==60)
        {
            set_color(2,1);
            Sleep(100);
            set_color(1,2);
            set_color(2,1);
            Sleep(100);
            set_color(1,2);
            set_color(2,1);
            Sleep(100);
            set_color(1,2);
            system("cls");
            for(i=0;i<70;i++)
                putchar('*');
            putchar('\n');
            printf("你已阅读了一个小时，休息一下吧\n");
            printf("关闭请按a，继续阅读请按b\n");
            c=getch();
            a=getch();
            if(c=='a') return 0;
            else  {
            printf("好的，加载中\n");
            i=0;  goto AA;
            }
        }
       fclose(fp);
    }
}
