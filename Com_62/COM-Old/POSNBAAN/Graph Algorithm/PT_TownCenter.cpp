/*
    TASK: PT_TownCenter
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  int u,v,w;
  bool operator <(const A&o) const{
      return w<o.w;
  }
};
A a[1000000];
int p[1010],u[1010];
int fr(int i){
  if(p[i]==i) return i;
  return p[i]=fr(p[i]);
}
int main(){
    int q,n,i,j,k,node,ans=-2e9;
    scanf("%d",&q);
    while(q--){
      int cnt=0;
      scanf("%d",&n);
      for(i=1;i<=n;i++) p[i]=i;

      for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
          scanf("%d",&a[n*(i-1)+j].w);
          a[n*(i-1)+j].u=i,a[n*(i-1)+j].v=j;
        }
      }
      sort(a,a+(n*n));
      for(i=1;i<=n*n;i++){
        if(fr(a[i].u)!=fr(a[i].v)){
          p[fr(a[i].u)]=fr(a[i].v);
          u[a[i].u]++,u[a[i].v]++;
        }
      }
      for(i=1;i<=n;i++){
        if(u[i]>ans){
          ans=u[i];
          node=i;
        }
      }
      printf("%d %d",node,ans);
    }
    return 0;
}
/*
1
4
0 7 12 8
7 0 5 1
12 5 0 6
8 1 6 0
*/
