/*
    TASK: Logistic TOI4
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  int v,w,k,f;
  bool operator < (const A&o) const{
    return w>o.w;
  }
};
priority_queue<A> he;
vector<A> g[110];
int dis[2][110][110],f[110];
int main(){

  int n,m,i,j,s,e,c,u,v,w,k,free;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    scanf("%d",&f[i]);
  scanf("%d %d %d",&s,&e,&c);
  scanf("%d",&m);
  while(m--){
    scanf("%d %d %d",&u,&v,&w);
    g[u].push_back({v,w});
    g[v].push_back({u,w});
  }
for(k=0;k<=1;k++)
  for(i=0;i<=c;i++)
    for(j=1;j<=n;j++)
      dis[k][i][j]=1<<25;

      dis[0][0][s]=0;
      he.push({s,0,0,0});

      while(!he.empty()){
        u=he.top().v,w=he.top().w,k=he.top().k,free=he.top().f;
        he.pop();

        for(i=1;i<=c;i++){
          if(i+k<=c && dis[free][i+k][u]>dis[free][k][u]+(f[u]*i) ){
            dis[free][i+k][u]=dis[free][k][u]+(f[u]*i);
            he.push({u,dis[free][i+k][u],i+k,free});
          }
        }

        if(!free){
        for(i=1;i<=c;i++)
          if(i+k<=c&&dis[free+1][i+k][u]>dis[free][k][u]){
            dis[free+1][i+k][u]=dis[free][k][u];
            he.push({u,dis[free+1][i+k][u],i+k,free+1});
          }
        }

        for(auto x:g[u]){
          if(k-x.w>=0 && dis[free][k-x.w][x.v] > dis[free][k][u] ){
            dis[free][k-x.w][x.v] = dis[free][k][u];
            he.push({x.v,dis[free][k-x.w][x.v],k-x.w,free});
          }
          if(!free){
            if(k-x.w>=0 && dis[free+1][k-x.w][x.v] > dis[free][k][u] ){
              dis[free+1][k-x.w][x.v] = dis[free][k][u];
              he.push({x.v,dis[free+1][k-x.w][x.v],k-x.w,free+1});
            }
          }
        }

      }

    printf("%d",dis[free+1][c][e]);

    return 0;
}
/*
4
7 1 8 10
1 4 100
5
1 2 60
1 3 50
1 4 90
2 4 30
3 4 20
*/
