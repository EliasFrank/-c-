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
    printf("�۵���%d�Σ��߶�Ϊ%lf",cisu,high);
}
