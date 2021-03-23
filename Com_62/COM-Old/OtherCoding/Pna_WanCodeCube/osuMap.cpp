#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 1e4 +10;
struct A{
  ll v,w,t;
  bool operator < (const A&o) const{
    return w > o.w;
  }
};
priority_queue<A> he;
vector<A> g[mxN];
ll dis[10][mxN];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  for(int i=0;i<=9;i++)
    for(int j=0;j<=int(1e4+1);j++) 
      dis[i][j] = 1e17;
  ll n,m,x,y,t;
  cout << setprecision(0) << fixed;
  cin >> n >> m >> t >> x >> y;
  while(m--){
    ll u,v,w;
    cin >> u >> v >> w;
    g[u].push_back({v,w});
  }
  dis[1%t][x] = 0;
  he.push({x,0,1%t});
  while(!he.empty()){
    ll u = he.top().v, now = he.top().t % t;
    he.pop();
    for(A x:g[u]){
      if(dis[(now+1)%t][x.v] > dis[now][u] + x.w){
        dis[(now+1)%t][x.v] = dis[now][u] + x.w;
        he.push({x.v,dis[(now+1)%t][x.v],(now+1)%t});
      }
    }
  }
  if(dis[0][y] == 1e17) cout << "-1\n";
  else cout << dis[0][y] << "\n";
  return 0;
}
