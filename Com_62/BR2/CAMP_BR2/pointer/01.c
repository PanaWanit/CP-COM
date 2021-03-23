#include "stdio.h"
int main()
{
    int a;
    int *p;
    a=5;
    p=&a;
    printf("%d  %d  %d",&a,p,*p);
    return 0;
}
