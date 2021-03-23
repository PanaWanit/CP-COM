#include<bits/stdc++.h>
using namespace std;
#define pq priority_queue
#define pii pair<int,int>
#define piib pair<int,pair<int,int>>
#define mk make_pair
const int mxN = 1e5+1;
pq<piib,vector<piib>,greater<piib>> he;
vector<pii> g[mxN];
bool mark[2][mxN];
int dis[2][mxN];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,m,k,t;
   cin >> n >> m >> k >> t;
   memset(dis,0x3f,sizeof dis);
   while(m--){
      int u,v,w;
      cin >> u >> v >> w;
      g[u].emplace_back(v,w);
      g[v].emplace_back(u,w);
   }
   dis[0][1] = 0;
   he.emplace(0,mk(1,0));
   while(!he.empty()){
      int u = he.top().second.first , on = he.top().second.second;
      he.pop();
      if(mark[on][u]) continue;
      mark[on][u] = 1;
      for(pii x:g[u]){
         if(!on && dis[1][x.first] > dis[0][u] + k){
            dis[1][x.first] = dis[0][u] + k;
            he.emplace(dis[1][x.first],mk(x.first,1));
         }
         if(dis[on][x.first] > dis[on][u] + x.second){
            dis[on][x.first] = dis[on][u] + x.second;
            he.emplace(dis[on][x.first],mk(x.first,on));
         }
      }
   }
   int mn = min(dis[0][n],dis[1][n]);
   if(mn > t) cout << "No Honey TT\n";
   else cout << "Happy Winnie the Pooh :3\n" << mn << "\n";
   return 0;
}
