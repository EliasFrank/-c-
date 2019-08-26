#include<stdio.h>
int main ()
{
  int a,b;
  printf("please input a sorce: ");
  scanf("%d",&a);
  b=a/10;
  switch(b)
  {
    case 10:
    case 9: printf("A\n");break;
    case 8: printf("B\n");break;
    case 7: printf("C\n");break;
    case 6: printf("D\n");break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:printf("E\n");break;
    default :printf("这不是一个数字\n");
  }
}
