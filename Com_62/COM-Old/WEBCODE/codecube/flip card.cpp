#include<bits/stdc++.h>
using namespace std;
long long a[100100],b[100100],c[100100];

int main()
{
    long long n,m,k;
    int i;
    scanf("%lld %lld",&n,&m);
    for(i=0;i<n;i++)
    scanf("%lld %lld",&a[i],&b[i]);
    for(i=0;i<m;i++)
       scanf("%lld",&c[i]);

    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        if(a[i]<=c[j])
            k=a[i],a[i]=b[i],b[i]=k;
    }
    for(i=0;i<n;i++)
    printf("%lld\n",a[i]);
    return 0;
}
