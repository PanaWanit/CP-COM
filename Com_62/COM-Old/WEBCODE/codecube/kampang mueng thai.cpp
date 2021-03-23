#include<bits/stdc++.h>
using namespace std;
long long ar[100100];
long long c,k,cnt;
int gcd(long long a,long long b)
{
    if(a==0)
        return b;
     gcd(b%a,a);
}
int main()
{
    int i,n;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
       scanf("%lld",&ar[i]);
       int ngcd=gcd(ar[0],ar[1]);


    for(i=0;i<n-1;i++)
    {
        cnt+=ar[i]/c;
    }
    printf("%lld",cnt+l/c);

return 0;
}

