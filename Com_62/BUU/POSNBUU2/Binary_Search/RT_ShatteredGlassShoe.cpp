/*
    TASK: Shattered Glass Show
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100],b[100100];
int main(){
    long long n,m,i,j,l=0,r=1e9,k,mid,sum=0,shoe,left;
    scanf("%lld",&n);
    for(i=1;i<=n;i++) scanf("%lld",&a[i]);
    for(i=1;i<=n;i++) scanf("%lld",&b[i]);
    scanf("%lld",&m);
    while(l<r){
      mid=(l+r+1)/2;
      sum=0;
      for(i=1;i<=n;i++){
        sum+=max(0ll,(a[i]*mid)-b[i]);
      }
      if(sum<=m) l=mid;
      else r=mid-1;
    }
    printf("%lld",l);
    return 0;
}
/*
4
5 2 3 1
9 9 9 9
25
*/
