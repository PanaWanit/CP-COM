/*
    TASK: PN_Lucky
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
   int v,w,l;
};
priority_queue<A> he;
vector<A> g[50100];
int dis[40][50100],luck[50100];
void solve(){
  int n,m,l,s,t;
  memset(dis,0x3f,sizeof dis);
  cin >> n >> m >> l >> s >> t;
  for(int i=1;i<=n;i++) cin >> luck[i];
  while(m--){
    int u,v,w;
    cin >> u >> v >> w;
    g[u].push_back({v,w});
  }
  he.push({s,0,0});
  while(!he.empty()){
    int u = he.top().v , w = he.top().w , ll = he.top().l;
    he.pop();
    for(A x: g[u]){
      if(ll+1 == luck[u] && dis[ll+1][x.v] > dis[ll][u] + x.w){
        dis[ll+1][x.v] = dis[ll][u] + x.w;
        he.push({x.v,dis[ll+1][x.v],ll+1});
      }
      else if(dis[ll][x.v] > dis[ll][u] + x.w){
        dis[ll][x.v] = dis[ll][u] + x.w;
        he.push({x.v,dis[ll][x.v],ll});
      }
    }
  }
  for(int i=0;i<=n;i++) g[i].clear();
  if(dis[l][t] > 1e9) cout << -1;
  else cout << dis[l][t];
  cout << "\n";
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}
