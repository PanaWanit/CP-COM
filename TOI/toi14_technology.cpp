#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define pq priority_queue
#define ff first
#define ss second
const int mxN = 1e5+10;
vector<int> g[mxN] , rt;
pq<pii,vector<pii>,greater<pii>> he;
bool mark[mxN];
int in[mxN] , lv[10010],node_order[mxN];
int lvT[mxN];
int dfs(int u){
  if(mark[u]) return node_order[u];
  mark[u] = 1;
  for(const int& x:g[u]){
      node_order[u] = min(node_order[u] , dfs(x));
  } 
   return node_order[u];
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,k,t;
   cin >> n >> k >> t;
   for(int i=1,m;i<=n;i++){
      cin >> lv[i] >> m;
      lvT[lv[i]]++;
      node_order[i] = lv[i];
      in[i] = m;
      if(!m) rt.push_back(i);
      while(m--){
         int x;cin >> x;
         g[x].push_back(i);
      }
   }
   for(int x:rt) dfs(x);
   for(int x:rt) he.emplace(node_order[x],x);
   while(!he.empty()){
      int u = he.top().ss;
      t--;
      lvT[lv[u]]--;
      if(t==0) break;
      he.pop();
      for(const int& x:g[u]){
         in[x]--;
         if(!in[x]) he.emplace(node_order[x],x);
      }
   } int ans = -1,i;
   for(i=1;i<=k;i++){
      if(lvT[i]) {
         ans=i-1;break;
      }
   }if(i==k+1) ans = k;
   cout << (!ans?-1:ans) << "\n";
   return 0;
}
