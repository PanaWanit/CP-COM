/*
    TASK: BUU NET
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[200];
int main(){
    long long l=1e9,r=1e8,mid,n,m,i,box,sum;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=m;i++){
      scanf("%lld",&a[i]);
      l=min(l,a[i]);
      }
    while(l<r){
      sum=0;
      mid=(l+r)/2;
    //  printf("%lld %lld %lld\n",l,r,mid);
      for(i=1,box=1;i<=m;i++){
        if(sum+a[i] > mid){
          box++;sum=a[i];
        }
        else {
          sum+=a[i];
        }
      }
      if(box>n) l=mid+1;
      else r=mid;
    }
    printf("%lld",l);
    return 0;
}
/*
3 6
800
800
800
800
800
800

3 4
800
400
400
700
*/
