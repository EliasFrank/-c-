#include<stdio.h>
int main()
{
  float b;
  int a,i;
  printf("please input the profit: \n");
  scanf("%d",&i);
  a=i/1e5;
    switch(a)
    {
      case 0: b=0.1*i;break;
      case 1: b=0.1*1e5+(i-1e5)*0.075;break;
      case 2:
      case 3: b=0.1*1e5+0.075*1e5+(i-2e5)*0.05;break;
      case 4:
      case 5: b=0.1*1e5+0.075*1e5+2e5*0.05+(i-4e5)*0.03;break;
      case 6:
      case 7:
      case 8:
      case 9: b=0.1*1e5+0.075*1e5+0.05*2e5+0.03*2e5+(i-6e5)*0.015;break;
      default : b=0.1*1e5+0.075*1e5+0.05*2e5+0.03*2e5+4e5*0.015+(i-1e6);
      }
      printf("应发奖金总数为%f\n",b);
}
