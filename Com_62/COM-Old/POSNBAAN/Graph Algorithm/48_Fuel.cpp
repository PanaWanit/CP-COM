/*
    TASK: 48 Fuel
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct  A{
  int v,w,k;
  bool operator < (const A&o) const{
    return w>o.w;
  }
};
priority_queue<A> he;
vector<A> g[1010];
int f[1010],dis[110][1010];
int main(){
  int q,i,j,n,m,u,v,w,c,s,e,ans,k,it;
  scanf("%d",&q);
  while(q--){
    int ch=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
      scanf("%d",&f[i]);

      while(m--){
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
      }

        scanf("%d %d %d",&c,&s,&e);
        for(i=0;i<=c;i++)
          for(j=0;j<n;j++)
            dis[i][j]=1<<23;


        dis[0][s]=0;
        he.push({s,0,0});

        while(!he.empty()){
          u=he.top().v,w=he.top().w,k=he.top().k;
          he.pop();

          if(u==e){ ans=dis[0][e]; break;}


            if(k+1<=c&&dis[k+1][u]>dis[k][u]+(f[u])){
            dis[k+1][u]=dis[k][u]+(f[u]);
            he.push({u,dis[k+1][u],k+1});
          }
          for(auto x: g[u]){
            if(k-x.w>=0&&dis[k-x.w][x.v]>dis[k][u]){
              dis[k-x.w][x.v]=dis[k][u];
              he.push({x.v,dis[k-x.w][x.v],k-x.w});
            }
          }
        }

        while(!he.empty()) he.pop();

        if(dis[0][e]==1<<23) printf("-99\n");
        else printf("%d\n",ans);


      for(i=0;i<n;i++)
        g[i].clear();
  }
    return 0;
}
/*
2
5 5
10 10 20 12 13
0 1 9
0 2 8
1 2 1
1 3 11
2 3 7
10 0 3
5 5
10 10 20 12 13
0 1 9
0 2 8
1 2 1
1 3 11
2 3 7
20 1 4
*/
