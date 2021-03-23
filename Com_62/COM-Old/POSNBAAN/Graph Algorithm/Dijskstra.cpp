/*
    TASK: Dijskstra
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  int v,w;
  bool operator<(const A&o) const{
    return w>o.w;
  }
};
priority_queue <A> he;
vector<A> g[100100];
int dis[100100];
int main(){
    int n,m,i,s,e,u,v,w;
    scanf("%d %d %d %d",&n,&m,&s,&e);
    while(m--){
      scanf("%d %d %d",&u,&v,&w);
      g[u].push_back({v,w});
    }
    for(i=1;i<=n;i++) dis[i]=1<<30;
    dis[s]=0;
    he.push({s,0});
    while(!he.empty()){
      u=he.top().v,w=he.top().w;
      he.pop();
      for(auto x: g[u]){
        if(dis[x.v]>dis[u]+x.w){
          dis[x.v]=dis[u]+x.w;
          he.push({x.v,dis[x.v]});
        }

      }
    }
    printf("%d",dis[e]);
    return 0;
}
