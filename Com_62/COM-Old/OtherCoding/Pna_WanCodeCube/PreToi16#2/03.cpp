#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct A{
  int v,w,on;
  bool operator < (const A&o) const{
    return w > o.w;
  }
};
const int mxN = 1e5+10;
vector<A> g[mxN];
int dis[2][mxN];
priority_queue<A> he;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,m,k,t;
  cin >> n >> m >> k >> t;
  memset(dis,0x3f,sizeof dis);
  while(m--){
    int u,v,w;
    cin >> u >> v >> w;
    g[u].push_back({v,w});
    g[v].push_back({u,w});
  }
  he.push({1,0,0});
  dis[0][1] = 0;
  while(!he.empty()){
    int u = he.top().v , on = he.top().on;
    he.pop();
    for(A x:g[u]){
      if(on == 0 && dis[1][x.v] > dis[0][u]+k){
        dis[1][x.v] = dis[0][u] + k;
        he.push({x.v , dis[1][x.v] , 1});
      }
      if(dis[on][x.v] > dis[on][u] + x.w){
        dis[on][x.v]  = dis[on][u]+x.w;
        he.push({x.v,dis[on][x.v],on});
      }
    }
  }
  int mn = min(dis[1][n],dis[0][n]);
  if(mn > t){
    cout << "No Honey TT\n";
  } 
  else {
    cout << "Happy Winnie the Pooh :3\n" << mn << "\n";
  }
  return 0;
}
