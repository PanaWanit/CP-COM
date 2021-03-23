#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
x=x%360;
if(x<0)
    x+=360;

if(x==180||x==0)
    printf("x-axis");
else if(x==90||x==270)
    printf("y-axis");
else if(x<=89&&x>=0)
    printf("1");
else if(x<=179&&x>90)
    printf("2");
else if(x<=269&&x>180)
    printf("3");
else if(x<=359&&x>270)
    printf("4");

return 0;
}
