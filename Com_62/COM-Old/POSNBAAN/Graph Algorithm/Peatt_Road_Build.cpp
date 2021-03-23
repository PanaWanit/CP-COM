/*
    TASK: Peatt_RoadBuild
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  int v,w,k;
  bool operator < (const A&o) const{
    return w>o.w;
  }
};
priority_queue<A> he;
vector<A> g[1100];
int dis[2][1100],a[5500][3];
int main(){
    int l,r,n,m,k,i,j,mid,ans,u,v,w,ch;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++)
      scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    l=0,r=m+1;

    for(i=0;i<=1;i++)
      for(j=1;j<=n;j++)
        dis[i][j]=1<<30;
    for(i=1;i<=m;i++){
      g[a[i][0]].push_back({a[i][1],a[i][2]});
      g[a[i][1]].push_back({a[i][0],a[i][2]});
    }
    dis[1][1]=0;
    he.push({1,0,1});
    while(!he.empty()){
      u=he.top().v,w=he.top().w,k=he.top().k;
      //printf("%d %d %d]\n",u,w,k);
      he.pop();
      for(auto x: g[u]){
        if(dis[(k+1)%2][x.v]>dis[k][u]+x.w){
          dis[(k+1)%2][x.v]=dis[k][u]+x.w;
          he.push({x.v,dis[(k+1)%2][x.v],(k+1)%2});
        }
      }
    }
    ch=dis[0][n];
    for(i=1;i<=n;i++)
    g[i].clear();


    while(l<r){
      mid=(l+r)/2;
      for(i=0;i<=1;i++)
        for(j=1;j<=n;j++)
          dis[i][j]=1<<30;
      for(i=1;i<=mid;i++){
        g[a[i][0]].push_back({a[i][1],a[i][2]});
        g[a[i][1]].push_back({a[i][0],a[i][2]});
      }
      dis[1][1]=0;
      he.push({1,0,1});
      while(!he.empty()){
        u=he.top().v,w=he.top().w,k=he.top().k;
        he.pop();
        for(auto x: g[u]){
          if(dis[k^1][x.v]>dis[k][u]+x.w){
            dis[k^1][x.v]=dis[k][u]+x.w;
            he.push({x.v,dis[k^1][x.v],k^1});
          }
        }
    }
    for(i=1;i<=n;i++)
    g[i].clear();
  //  printf("%d %d %d %d\n",l,r,mid,dis[0][n]);
    if(dis[0][n]!=ch) l=mid+1;
    else r=mid;


 }
   printf("%d %d",l,ch);
   return 0;
}
/*
5 10
4 5 7
3 2 1
3 5 5
5 2 5
1 4 6
2 1 1
4 3 7
1 3 7
4 2 4
1 5 8
*/
