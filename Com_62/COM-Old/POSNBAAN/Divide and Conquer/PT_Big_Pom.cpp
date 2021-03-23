/*
    TASK: PT_Big Pom
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
struct A{int n,e;};
int c,rrr,s,a[100100];
A find(int l,int r){
  A ll,rr,now;

  if(l==r) {
    if(mp[l]) return {mp[l],s*mp[l]};
    return {0,rrr};
  }
  int mid=(l+r)/2;
  ll=find(l,mid);
  rr=find(mid+1,r);
  now.e=ll.e+rr.e;
  now.n=ll.n+rr.n;

  if(!now.n)
  return {now.n,rrr};
    return {now.n,min(now.e,s*now.n*(r-l+1))};
}
int main(){
    int q,n,i;
    scanf("%d",&q);
    while(q--){
      scanf("%d %d %d %d",&n,&c,&rrr,&s);
      for(i=1;i<=c;i++){
        scanf("%d",&a[i]);
        mp[a[i]]++;
      }

      printf("%d\n",find(1,(1<<n)).e);
      memset(a,0,sizeof a);
      mp.clear();
    }
    return 0;
}

/*
3
2 2 1 2
1 3
3 2 1 2
1 7
2 1 10 1
1
*/
