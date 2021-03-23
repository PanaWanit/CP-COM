/*
    TASK: Taep Nitrous
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{int v,w,k;
  bool operator < (const A&o) const{
    return w>o.w;
  }
};
priority_queue<A> he;
vector<A> g[5050];
int dis[110][5050];
int main(){
  int n,m,u,v,w,k,kk,i,j,ans=1<<30,ch=0;
  scanf("%d %d %d",&n,&m,&k);
  while(m--){
    scanf("%d %d %d",&u,&v,&w);
    g[u].push_back({v,w});
    g[v].push_back({u,w});
  }
  for(i=0;i<=k;i++)
    for(j=1;j<=n;j++)
      dis[i][j]=1<<30;
  dis[0][1]=0;
  he.push({1,0,0});
  while(!he.empty()){
    u=he.top().v,w=he.top().w,kk=he.top().k;
    he.pop();
    if(u==n&&!ch) {ch=1,ans=dis[kk][n];}
    if(!kk&&u==n) break;
    for(auto x : g[u]){
      if(dis[kk][x.v]>dis[kk][u]+x.w){
        dis[kk][x.v]=dis[kk][u]+x.w;
        he.push({x.v,dis[kk][x.v],kk});
      }
      if( kk<k && dis[kk+1][x.v]>dis[kk][u]+x.w/2){
        dis[kk+1][x.v]=dis[kk][u]+x.w/2;
        he.push({x.v,dis[kk+1][x.v],kk+1});
      }
    }
  }

  printf("%d\n%d\n%d",dis[0][n],ans,dis[0][n]-ans);
    return 0;
}
/*
6 8 1
1 2 4
1 4 2
2 3 4
2 4 6
3 6 6
4 3 12
4 5 10
5 6 4
*/
