#include <stdio.h>
int main ()
{
    int cisu;
    float high;
    high=0.0001;
    for(cisu=0 ;high<=8848; cisu++)
    {
        high=2*high;
    }
    printf("折叠了%d次，高度为%lf",cisu,high);
}
