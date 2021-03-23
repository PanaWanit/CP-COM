/*
    TASK: RT_Keychain
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
long long b[100100],qs[100100];
using namespace std;
int main(){
  long long n,k,cnt,ans=0,now,l,z;
  scanf("%lld %lld",&n ,&k);
  long long i,j,u,run;
  for(i=1;i<=n;i++){
    scanf("%lld",&u);
    if(i==1) run=u;
    b[u]=i;
  }

  for(i=1;i<=n+1;i++){
    l=i%n;
    if(i%n==0) {
      l=n;
    }
    z=b[l]-b[run];
    if(z<0) z=n+z;
    qs[i]+=qs[i-1]+z;
    run=l;
  }
  int mul,sum;
  mul=(k-1)/n;
  sum=(k-1)%n;
  ans=(qs[n+1]-qs[1])*mul;
  ans+=qs[1];
  ans+=qs[sum+1]-qs[1];
  printf("%lld",ans);
  return 0;
}
/*
4 6
4
2
1
3
*/
