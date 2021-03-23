/*
    TASK: AP_Barchart
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long l[100100],r[100100],a[100100];
int main(){
    long long q,i,j,n,k,mx;
    scanf("%lld",&q);
    while(q--){
      mx=-1e15;
      scanf("%lld",&n);
      for(i=1;i<=n;i++) scanf("%lld",&a[i]);

      for(i=1;i<=n;i++){
        l[i]=i-1;
        while(l[i]>0&&a[i]<=a[l[i]])
        l[i]=l[l[i]];
      }
      for(i=n;i>=1;i--){
        r[i]=i+1;
        while(r[i]<=n&&a[i]<=a[r[i]]){
          r[i]=r[r[i]];
        }
      }
      for(i=1;i<=n;i++)
        mx=max(mx,(r[i]-l[i]-1)*a[i]);
      printf("%lld\n",mx);
      memset(l,0,sizeof l);
      memset(r,0,sizeof r);
      memset(a,0,sizeof a);
    }
    return 0;
}
/*
2
6
2 1 5 6 2 3
3
100 100 100
*/
