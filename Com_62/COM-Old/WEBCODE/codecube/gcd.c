#include<stdio.h>
int x,y;
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int main()
{
    scanf("%d %d",&x,&y);
    printf("%d",gcd(x,y));
    return 0;
}
