/*
    TASK: 48_bicycle
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
struct A{
  int u,v,w;
    bool operator < (const A&o) const{
      return w>o.w;
    }
};
A b[70500];
int a[50500],p[50500];
int fr(int i){
  if(p[i]==i) return i;
  return p[i]=fr(p[i]);
}
int main(){
    int q,n,m,i,j,u,v,w,ans=0;
    scanf("%d",&q);
    while(q--){
      ans=0;
      scanf("%d %d",&n,&m);
      for(i=1;i<=n;i++)
        scanf("%d",&a[i]),mp[a[i]]=i;
      for(i=1;i<=n;i++) p[i]=i;

      for(i=1;i<=m;i++){
        scanf("%d %d %d",&b[i].u,&b[i].v,&b[i].w);
      }
      sort(b+1,b+m+1);
      for(i=1;i<=m;i++){
        if(fr(mp[b[i].u])!=fr(mp[b[i].v])){
          p[fr(mp[b[i].u])]=fr(mp[b[i].v]);
        }
        else ans+=b[i].w;

      }
      printf("%d\n",ans);
      mp.clear();
    }
    return 0;
}
/*
2
8 10
1 2 3 4 5 6 7 8
1 2 3
1 5 5
2 3 4
2 6 3
3 4 2
3 7 5
4 8 5
5 6 2
6 7 7
7 8 3
14 18
5 11 13 0 3 8 6 2 12 14 1 9 10 4
5 0 2
5 6 7
5 10 7
11 6 5
11 10 9
11 12 4
13 14 3
13 8 5
13 12 6
0 1 7
3 2 7
3 8 1
3 4 1
8 9 1
6 1 7
2 1 9
14 9 1
9 4 3
*/
