#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,ans,b,sum=0;
    scanf("%d %d",&n,&ans);
    sum+=ans;
    for(int i=0;i<n-1;i++)
    {
        scanf("%lld",&b);
        if(b==0) continue;
        ans = __gcd(ans,b);
        sum+=b;
    }
    printf("%lld",sum/ans);

}
