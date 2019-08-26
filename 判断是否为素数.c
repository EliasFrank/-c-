#include<stdio.h>
int main()
{  int a,b,i, z;
   aa: printf("请输入一个数： ");
   scanf("%d",&a);
   for(i=2;i<a;i++)
   {
     b=a%i;
     if (b==0) break;
   }
    if(b==0)
     {
         printf("%d不是一个素数\n",a);
     }
     else printf("%d是一个素数\n",a);
     printf("要继续输入素数请按1，不继续输入请按2\n");
     scanf("%d",&z);
     if(z==1) goto aa; //继续进行判断
     else if(z==2) printf("期待下次与你相见\n");
     else printf("不按规矩出牌，再见\n");
}
