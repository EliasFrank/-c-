#include<stdio.h>
int main()
{
   int i,k;
   char num[20];
   printf("������һ�����֣� ");
   for(i=0;i<20;i++)
   {
     scanf("%c",&num[i]);
     switch(num[i])//��һ��
     {
        case '1': printf("  ** ");break;
        case '0': printf(" *** ");break;
        case '2': printf(" *** ");break;
        case '3': printf(" *** ");break;
        case '4': printf(" * * ");break;
        case '5': printf(" *** ");break;
        case '6': printf(" *** ");break;
        case '7': printf(" *** ");break;
        case '8': printf(" *** ");break;
        case '9': printf(" *** ");break;
        default : break;
     }
     if(num[i]=='\n'){k=i;break;}
   }printf("\n");
   for(i=0;i<k;i++)
      {switch(num[i])//�ڶ���
     {
        case '1': printf("   * ");break;
        case '0': printf(" * * ");break;
        case '2': printf("   * ");break;
        case '3': printf("   * ");break;
        case '4': printf(" * * ");break;
        case '5': printf(" *   ");break;
        case '6': printf(" *   ");break;
        case '7': printf("   * ");break;
        case '8': printf(" * * ");break;
        case '9': printf(" * * ");break;
        default : break;
     }

      }printf("\n");
       for(i=0;i<k;i++)
       {
      switch(num[i])//������
     {
        case '1': printf("   * ");break;
        case '0': printf(" * * ");break;
        case '2': printf(" *** ");break;
        case '3': printf(" *** ");break;
        case '4': printf(" ****");break;
        case '5': printf(" *** ");break;
        case '6': printf(" *** ");break;
        case '7': printf("   * ");break;
        case '8': printf(" *** ");break;
        case '9': printf(" *** ");break;
        default : break;
     }

     }printf("\n");
      for(i=0;i<k;i++){
      switch(num[i])//������
     {
        case '1': printf("   * ");break;
        case '0': printf(" * * ");break;
        case '2': printf(" *   ");break;
        case '3': printf("   * ");break;
        case '4': printf("   * ");break;
        case '5': printf("   * ");break;
        case '6': printf(" * * ");break;
        case '7': printf("   * ");break;
        case '8': printf(" * * ");break;
        case '9': printf("   * ");break;
        default :  break;
     }

     }printf("\n");
      for(i=0;i<k;i++){
      switch(num[i])//������
     {
        case '1': printf(" ****");break;
        case '0': printf(" *** ");break;
        case '2': printf(" *** ");break;
        case '3': printf(" *** ");break;
        case '4': printf("   * ");break;
        case '5': printf(" *** ");break;
        case '6': printf(" *** ");break;
        case '7': printf("   * ");break;
        case '8': printf(" *** ");break;
        case '9': printf(" *** ");break;
        default : break;
     }

      }printf("\n");
}
