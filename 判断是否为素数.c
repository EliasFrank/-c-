#include<stdio.h>
int main()
{  int a,b,i, z;
   aa: printf("������һ������ ");
   scanf("%d",&a);
   for(i=2;i<a;i++)
   {
     b=a%i;
     if (b==0) break;
   }
    if(b==0)
     {
         printf("%d����һ������\n",a);
     }
     else printf("%d��һ������\n",a);
     printf("Ҫ�������������밴1�������������밴2\n");
     scanf("%d",&z);
     if(z==1) goto aa; //���������ж�
     else if(z==2) printf("�ڴ��´��������\n");
     else printf("������س��ƣ��ټ�\n");
}
