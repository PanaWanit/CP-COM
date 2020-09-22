#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 5e5+10;
ll a[mxN],b[mxN];
int main(){
  int n;
  scanf("%lld",&n);
  for(int i=0;i<n;i++)
     scanf("%lld",&a[i]);
  sort(a,a+n);
  for(int i=0;i<n;i++)
     scanf("%lld",&b[i]),b[i]*=-1;
  sort(b,b+n);
  for(int i=0;i<n;i++)
     a[i] -= b[i];
  sort(a,a+n);
  ll ans = 0;
  for(int i=1;i<n;i++)
     ans += a[i] - a[i-1];
  printf("%lld\n",ans);  
  return 0;
}
