#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y;
    scanf("%lld %lld",&x,&y);

    printf("%lld",x*y/__gcd(x,y));

    return 0;
}
