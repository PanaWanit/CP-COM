#include<bits/stdc++.h>
using namespace std;
long long a[100010],b[100010];
int main()
{
    long long n,i;
    long long ans=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
        scanf("%lld",&b[i]);
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++)
    {

        ans+=a[i]*b[i];
    }
    printf("%lld",ans);
    return 0;
}
