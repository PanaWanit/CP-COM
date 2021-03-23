#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
if(x>360||x<-360)
    x=x%360;
if(x<0)
    x=360+x;
if(x%180==0)
    printf("x-axis");
else if(x%90==0)
    printf("y-axis");
else if(x%270>0&&x>270)
    printf("4");
else if(x%180>0&&x>180)
    printf("3");
else if(x%90>0&&x>90)
    printf("2");
else
    printf("1");



}
