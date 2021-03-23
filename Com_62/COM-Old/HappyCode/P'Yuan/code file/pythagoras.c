#include<stdio.h>
#include<math.h>
int main(){
double k,a,b,c;
scanf("%lf %lf %lf",&a,&b,&c);
if(a==0.00){
    k=sqrt((c*c)-(b*b));
    printf("%.2lf",k);
}
else if(b==0.00){
    k=sqrt((c*c)-(a*a));
    printf("%.2lf",k);
}
else if(c==0.00){
    k=sqrt((b*b)+(a*a));
    printf("%.2lf",k);
}
}
