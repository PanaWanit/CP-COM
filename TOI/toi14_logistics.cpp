#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 110;

struct A{
   int v,w,f,free;
   bool operator < (const A&o) const{
      return w > o.w;
   }
};
priority_queue<A> he;
vector<A> g[mxN];
int fuel[mxN];
int dis[2][mxN][mxN];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin >> n;
   for(int i=1;i<=n;i++)
      cin >> fuel[i];
   int s,e,f;
   cin >> s >> e >> f;
   int m;
   for(cin >> m;m--;){
      int u,v,w;
      cin >> u >> v >> w;
      g[u].push_back({v,w});
      g[v].push_back({u,w});
   }
   memset(dis,0x3f,sizeof dis);
   dis[0][0][s] = 0;
   he.push({s,0,0});
   while(!he.empty()){
      int u = he.top().v , nf = he.top().f ,free = he.top().free, y ; 
      he.pop();
      if(f > nf && dis[free][nf+1][u] > dis[free][nf][u] + fuel[u]){
         y = dis[free][nf+1][u] = dis[free][nf][u] + fuel[u];
         he.push({u,y,nf+1,free});
      }
      if( !free && dis[1][f][u] > dis[0][nf][u]){
            y = dis[1][f][u] = dis[0][nf][u];
            he.push({u,y,f,1});
       }
      for(A x : g[u]){
         if(nf - x.w >=0 && dis[free][nf - x.w][x.v] > dis[free][nf][u]){
            y = dis[free][nf-x.w][x.v] = dis[free][nf][u];
            he.push({x.v,y,nf - x.w,free});
         }
      }
   }
   cout << dis[1][f][e] << "\n";
   return 0;
}
