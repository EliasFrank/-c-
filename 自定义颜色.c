#include<stdio.h>
#include<stdlib.h>
enum Color
{
    black,blue,green,lake_blue,red,purple,yellow,
    white,gray,light_yellow
};
void set_color(unsigned short text_color=0,unsigned short back_color=7)
{
    char command[9]="color 07";
    command[6]='0'+back_color;
    command[7]='0'+text_color;
    system(command);
}
int main()
{
    int i,j;
    printf("0代表黑色，1代表蓝色，2代表绿色\n");
    printf("3代表淡蓝色，4代表红色，5代表紫色\n");
    printf("6代表黄色，7代表白色，8代表灰色，9代表淡黄色\n");
    aa: printf("请输入想要的背景颜色（请输入数字）：");
    scanf("%d",&i);
    if(i<0||i>9){
    printf("输入有误\n");
    goto aa;
    }
    bb: printf("请输入想要的文字颜色（请输入数字）：");
    scanf("%d",&j);
    if(j<0||j>9){
    printf("输入有误\n");
    goto bb;
    }
    set_color(j,i);
    printf("1653563103");
    //for(i=0;i<10000;i++)
    
}
