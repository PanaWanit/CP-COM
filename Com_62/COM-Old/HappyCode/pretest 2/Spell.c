#include<stdio.h>
#include<stdlib.h>
int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int main()
{
    int m,n,l,md1,md2;
    scanf("%d %d %d",&m,&n,&l);
    md1 = l%m;
    md2 = l%n;
    if(l%n==0||l%m==0){

      printf("Yes\n");


    }

    else
        printf("No\n");



    return 0;
}
