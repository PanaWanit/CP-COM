#include<stdio.h>
int main()
{
    long long n,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
        if(n%i==0)
        printf("%lld ",i);
    return 0;
}
