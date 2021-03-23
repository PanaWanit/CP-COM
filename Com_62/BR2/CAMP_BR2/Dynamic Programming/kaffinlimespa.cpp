#include<bits/stdc++.h>
using namespace std;
long long a[10001],b[10001];
int main()
{
    long long n,i;
    long long ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
        scanf("%lld",&b[i]);
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++)
    {

        ans+=a[i]*b[n-i-1];
    }
    printf("%lld",ans);
    return 0;
}
