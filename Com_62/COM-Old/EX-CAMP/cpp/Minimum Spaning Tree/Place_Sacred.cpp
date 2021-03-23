/*
    TASK: Places Sacred
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[200500];
int fr(int i){
  if(p[i]==i) return i;
  return p[i]=fr(p[i]);
}

struct A{
  long long u,v,w;
  bool operator < (const A&o) const{
    return w>o.w;
  }
};
A a[1001000];
int main()
{
    long long ans=0;
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) p[i]=i;
    for(i=0;i<m;i++){
      scanf("%lld %lld %lld",&a[i].u,&a[i].v,&a[i].w);
      a[i].w-=1;
    }
    sort(a,a+m);
    for(i=0;i<m;i++){
      if(fr(a[i].u)!=fr(a[i].v)){
        ans += a[i].w;
        p[fr(a[i].u)] = fr(a[i].v);
      }
    }
    printf("%lld\n",ans);

    return 0;
}
/*
4 6
1 2 1
3 4 1
1 3 2
4 1 3
2 3 2
3 1 1
*/
