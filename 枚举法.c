#include<stdio.h>
void main()
{
    enum weekday{sun,mon,tue,wed,thu,fri,sat}a,b,c;
    a=sun;//a=1是不行的
    b=mon;
    c=tue;
    printf("%d  %d  %d\n",a,b,c);
}
