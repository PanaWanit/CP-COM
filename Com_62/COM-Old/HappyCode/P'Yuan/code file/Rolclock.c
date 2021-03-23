#include<stdio.h>
int main(){
int x,n;
scanf("%d",&x);
x=x%360;
if(x<=15)
    printf("6");
else if(x<=45)
    printf("7");
else if(x<=75)
    printf("8");
else if(x<=105)
    printf("9");
else if(x<=135)
    printf("10");
else if(x<=165)
    printf("11");
else if(x<=195)
    printf("12");
else if(x<=225)
    printf("1");
else if(x<=255)
    printf("2");
else if(x<=285)
    printf("3");
else if(x<=315)
    printf("4");
else if(x<=345)
    printf("5");
else if(x<=360)
    printf("6");

}
