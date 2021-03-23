#include<bits/stdc++.h>
long long a[100100100],b,i;
int n;
using namespace std;
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a, a+n);
    for(i=0;i<n;i++)
    {

        b+=a[i]*2;
    }
    b+=n+a[n-1]+a[0];


   for(i=0;i<n-1;i++)
    {
        b+=a[i+1]-a[i];
    }

    printf("%lld",b);
}
/*
7 4 6 2 4 3 5 4
*/
