/*
    TASK: PT_Rope Climb
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  int v,w,k;
  bool operator <(const A&o) const{
    return w>o.w;
  }
};
priority_queue<A> he;
vector<A> g[100100];
int dis[7][100100];
int main(){
  int q,n,m,u,v,k,w,i,j,kk,ans;
  scanf("%d",&q);
  while(q--){
    ans=1<<22;
    scanf("%d %d %d",&n,&m,&k);
    while(m--){
      scanf("%d %d %d",&u,&v,&w);
      g[u].push_back({v,w});
    }
    for(i=0;i<=k;i++)
      for(j=1;j<=n;j++)
        dis[i][j]=1<<23;
    dis[0][1]=0;
    he.push({1,0,0});
    while(!he.empty()){
      u=he.top().v,w=he.top().w,kk=he.top().k;
      he.pop();
      for(auto x: g[u]){
        if(x.w>0&&dis[kk][x.v] > dis[kk][u]+x.w){
          dis[kk][x.v]=dis[kk][u]+x.w;
          he.push({x.v,dis[kk][x.v],kk});
        }

        if(x.w>=-100&&x.w<0&&dis[kk][x.v]>dis[kk][u]){
          dis[kk][x.v]=dis[kk][u];
          he.push({x.v,dis[kk][x.v],kk});
        }

        else if(dis[kk+1][x.v] > dis[kk][u]&&x.w<-100){
          if(kk<k){
          dis[kk+1][x.v] = dis[kk][u];
          he.push({x.v,dis[kk+1][x.v],kk+1});
          }
        }

      }
    }
    for(i=0;i<=k;i++){
      ans=min(ans,dis[i][n]);
    }
    if(ans==1<<22) printf("-1\n");
    else printf("%d\n",ans);

    for(i=1;i<=n;i++)
      g[i].clear();
  }
    return 0;
}
/*
2
5 6 0
1 2 1
2 3 -1
1 3 5
3 4 2
4 5 -200
3 5 4

5 6 1
1 2 1
2 3 -200
1 3 5
3 4 2
4 5 -200
3 5 4

1
5 6 0
1 2 -200
2 3 -200
1 3 -200
3 4 -200
4 5 -200
3 5 -200

*/
