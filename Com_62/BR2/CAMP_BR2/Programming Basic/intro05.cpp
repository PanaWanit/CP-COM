/*
    TASK:
    AUTHOR: PeaTT~
    SCHOOL: CRU
    LANG: C
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double x1,x2,x3,y1,y2,y3,k;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&k);
    double a =sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    double b =sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    double c =sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    double s=(a+b+c)/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2lf\n",area);
    printf("%.2lf",M_PI*k*k+(a*k)+(b*k)+(c*k));
    return 0;
}
