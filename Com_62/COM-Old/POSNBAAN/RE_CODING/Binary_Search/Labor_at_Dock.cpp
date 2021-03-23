/*
    TASK: Labor at Dock
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100];
int main(){
  long long l=0,r=1e17,mid,i,q,m,ans;
  scanf("%lld %lld",&q,&m);
  for(i=1;i<=q;i++) scanf("%lld",&a[i]);
  while(l<r){
    ans=0;
    mid=(l+r)/2;
    for(i=1;i<=q;i++)
      ans+= mid/a[i];
    if(ans>=m) r=mid;
    else l=mid+1;
  }
  printf("%lld",l);
    return 0;
}
/*
2 5
7
12

3 3
6
13
2

*/
