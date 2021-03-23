/*
    TASK: Swift_Wood Cut
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[1000100];
int main(){
    long long n,m,i;
    scanf("%lld %lld",&n,&m);
    long long mid,l=0,r=1e17;
    for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
    while(l<r){
      long long ans=0;
      mid=(l+r+1)/2;
      for(i=1;i<=n;i++){
        long long k=a[i]-mid;
        if(k>=0) ans+=k;
      }
      if(ans>=m) l=mid;
      else r=mid-1;
    }
    printf("%lld",l);
    return 0;
}
/*
4 7
20 15 10 17

5 20
4 42 40 26 46
*/
