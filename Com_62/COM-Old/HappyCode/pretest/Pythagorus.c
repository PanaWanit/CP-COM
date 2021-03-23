#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0)
    {
       s= sqrt(pow(c,2)-pow(b,2));
    }
    else if(b==0)
    {
        s=sqrt(pow(c,2)-pow(a,2));
    }
    else if(c==0)
    {
        s=sqrt(pow(b,2)+pow(a,2));
    }
    printf("%.2lf",s);
    return 0;
}
