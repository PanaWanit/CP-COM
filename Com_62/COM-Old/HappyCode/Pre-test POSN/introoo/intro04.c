#include<stdio.h>
int main(){
    double d,vr,vt,vf;
    scanf("%lf %lf %lf %lf",&d,&vr,&vt,&vf);
    double t=d/(vt-vr);
    printf("%.2lf",vf*t);


return 0;
}
