#include<stdio.h>
long long gcd(long long a,long long b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
int main()
{
    long long n,a,b,ans;
    scanf("%lld %lld",&n,&ans);
        for(int i=0;i<n-1;i++)
        {
            scanf("%lld",&b);
            ans=(ans*b)/gcd(ans,b);
        }
        printf("%lld",ans);

}

