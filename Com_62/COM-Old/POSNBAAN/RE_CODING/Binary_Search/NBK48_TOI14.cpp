/*
    TASK: NBK48s
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long qs[100100];
int main(){
    long long l,i,n,q,m;
    scanf("%lld %lld",&n,&q);
    for(i=1;i<=n;i++){
       scanf("%lld",&l);
       qs[i]=qs[i-1]+l;
     }
    for(i=n-1;i>0;i--){
      qs[i-1]=min(qs[i],qs[i-1]);
    }

    while(q--){
      scanf("%lld",&m);
      l=upper_bound(qs+1,qs+n+1,m)-qs;
      printf("%lld\n",l-1);
    }
    return 0;
}
/*
5 3
10 20 -10 30 60
31
52
9

5 3
10 30 20 -10 60
31
50
9

10 40 60 50 110

10 20 100 -200
*/
