#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define piii pair<int,pii>
int p[3001];
vector<piii> ed;
vector<pii> pkg , mn;
bool cmp(const pii& a , const pii& b){
   if(a.first != b.first) return a.first > b.first;
   return a.second < b.second;
}
int fr(int i){
   if(p[i] == i) return i;
   return p[i] = fr(p[i]);
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,m,sum=0,mm;
   cin >> n >> m;
   iota(p,p+n,0);
   while(m--){
      int u,v,w,r;
      cin >> u >> v >> w >> r;
      if(!r) ed.emplace_back(w,pii(u,v));
      else p[fr(u)] = fr(v);
   }sort(ed.begin(),ed.end());
   cin >> mm;
   for(int i=0;i<mm;i++){
      int l,w;cin >> l >> w;
      pkg.emplace_back(l,w);
   }
   sort(pkg.begin() , pkg.end() , cmp);
   mn.push_back(pkg[0]);
   for(int i=1;i<mm;i++){
      if(pkg[i-1].second >= pkg[i].second) mn.push_back(pkg[i]);
      else pkg[i] = pkg[i-1];
   }
   sort(mn.begin(),mn.end());
   for(int i=0;i<ed.size();i++){
      int u = fr(ed[i].second.first) , v = fr(ed[i].second.second) , w = ed[i].first;
      if(u!=v) {
        p[u] = v;
        sum += lower_bound(mn.begin(),mn.end(),pii(w,INT_MIN))->second; 
      }
   }
   cout << sum << "\n";
   return 0;
}
