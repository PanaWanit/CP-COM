/*
    TASK:
    AUTHOR: PeaTT~
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
int main()
{
    double d,vr,vt,vf;
    scanf("%lf %lf %lf %lf",&d,&vr,&vt,&vf);
    printf("%.2lf",vf*(d/(vt-vr)));

    return 0;
}
