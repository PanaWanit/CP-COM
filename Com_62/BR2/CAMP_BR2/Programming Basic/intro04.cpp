/*
    TASK:
    AUTHOR: PeaTT~
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    double vr,vt,vf,d;
    scanf("%lf %lf %lf %lf",&d,&vr,&vt,&vf);
    double t=d/(vt-vr);
    printf("%.2lf",t*vf);
    return 0;
    return 0;
}
