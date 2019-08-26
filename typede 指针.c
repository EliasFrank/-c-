#include<stdio.h>
typedef int(*POINTER)();
int fun()
{
    printf("hl2333333");
}
int main()
{
    POINTER pointer;
    pointer=fun;
    (pointer)()  ;
}
