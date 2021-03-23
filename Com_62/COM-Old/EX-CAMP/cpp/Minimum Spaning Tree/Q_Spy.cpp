/*
    TASK: Q_Spy
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  long long u,v,w;
  bool operator < (const A&o) const{
      return w<o.w;
  }
};

int p[1550];
A a[1005000];

int fr(int i){
  if(p[i]==i) return i;
  return p[i]=fr(p[i]);
}

int main(){
  long long n,i,j,ans=0;
    scanf("%lld",&n);
    for(i=0;i<=n;i++)  p[i]=i;

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        scanf("%lld",&a[n*i+j].w);
        a[n*i+j].u=i;
        a[n*i+j].v=j;
      }
    }

    for(i=0;i<n;i++){
      scanf("%lld",&a[n*n+i].w);
      a[i+n*n].u=i;
      a[i+n*n].v=n;
    }

    sort(a,a+n*n+n);

 for(i=1;i<n*n+n;i++){
      if(fr(a[i].u)!=fr(a[i].v)){
        ans += a[i].w;
        p[fr(a[i].u)] = fr(a[i].v);
      }
    }
    printf("%lld",ans);

    return 0;
}
/*
3
0 6 9
6 0 4
9 4 0
7 7 7

3 0 6 9 6 0 4 9 4 0 7 7 7

5 0 3 12 15 11 3 0 14 3 20 12 14 0 11 7 15 3 11 0 15 11 20 7 15 0 5 10 10 10 10


*/
