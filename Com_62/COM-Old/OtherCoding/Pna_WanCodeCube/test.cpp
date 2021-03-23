/*
  TASK: Test file
  AUTHOR: Pna_Wan
  LANG: C++
  SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct A{
  int v,w;
  bool operator <(const A&o) const{
    return w > o.w;
  }
};
int dis[100100];
vector<A> g[100100];
priority_queue<A> he;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,m,e;
  cin >> n >> m >> e;
  while(m--){
    int u,v,w;
    cin >> u >> v >> w;
    g[u].push_back({v,w});
  }
  for(i=0;i<=n;i++) dis[i] = 1 << 30;
  he.push({0,0});
  while(!he.empty()){
    int u = he.top().v, w = he.top().w;
    he.pop();
    for(A x: g[u]){
       if(dis[x.v] < dis[u]+x.w){
          dis[x.v] = dis[u]+x.w;
          he.push({x.v,dis[x.v]});
       }
    }
  }
  cout << dis[e];
  return 0;
}
