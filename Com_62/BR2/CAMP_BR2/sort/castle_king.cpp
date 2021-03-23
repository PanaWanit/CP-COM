#include<bits/stdc++.h>
using namespace std;
long long a[100100100],ans=0;
int main()
{
    long long n,i;
    scanf("%lld",&n);

    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        ans+=2*a[i];
    }
    ans+=(n+a[0]);
    for(i=0;i<n;i++)
    {
        ans+=abs(a[i]-a[i+1]);
    }
    printf("%lld",ans);

    return 0;
}
/*
7
4 6 2 4 3 5 4
*/
