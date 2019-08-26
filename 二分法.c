 #define m 10
 #include<stdio.h>
 int main()
 {
    int a[m]={-12,0,6,16,23,56,80,100,110,115};
    int low,high,found,i;
    printf("input a number to be searched: ");
    scanf("%d",&i);
    low=0;
    high=9;
        do{
         found=(low+high)/2;
         if(i>a[found])
         {
            low=found+1;
         }
         if(i<a[found])
         {
            high=found-1;
         }
         if(low>high) goto aa;
      }while(a[found]!=i);
      printf("这个数是第%d个\n",found+1);
      aa: printf("数列中不存在这个数！\n");
 }
