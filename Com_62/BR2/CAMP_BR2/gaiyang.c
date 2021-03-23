#include<stdio.h>
#include<math.h>
int main()
{
    double  r,b,h;
    scanf("%lf %lf %lf",&r,&b,&h);
    printf("%.3lf\n",0.5*b*h);
    printf("%.3lf\n",M_PI*r*r);
    printf("%.3lf\n",M_PI*r*2);
    printf("%.3lf\n",(M_PI*4*r*r*r)/3);
    printf("%.3lf\n",(M_PI*r*r*4));

return 0;
}
