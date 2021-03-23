/*
  TASK: PN_Node sort BUU 16
  AUTHOR: pnawn_
  LANG: C++14
  SCHOOL: N/a
  EDITOR: Gvim
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pq priority_queue
#define lpq(x) priority_queue<x,vector<x>,greater<x>>
#define omap unordered_map
#define oset unordered_set
#define all(x) (a).begin(),(a).end()
#define _lb lower_bound
#define _ub upper_bound
#define sz(x) (int)(x).size()

#define pb push_back
#define eb emplace_back
#define pp push
#define ep emplace
#define fp first
#define sp second
#define dec(x) fixed << setprecision(x)
//DEBUG
void DBG(){
	cerr << "]" << endl;
}
template<class A,class... T> void DBG(A h , T... t){
	cerr << to_string(h);
	if(sizeof ...(t)) cerr << ", ";
	DBG(t...);
}
// -D _DEBUG
#ifdef _DEBUG
#define dbg(...) cerr << "DBG(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif
const int mxN = 5e4 + 1;
vector<int> g[mxN];
lpq(int) he;
int in[mxN];
void solve(){
	int n,m;
	cin >> n >> m;
	if(m==0) {cout << "Never\n";return;}
	bool ch = 0;
	while(m--){
		int u,v;
		cin >> v >> u; 
		g[u].pb(v);
		in[v]++;
	}
	bool onlyone=1;
	for(int i=1;i<=n;i++){
		if(!in[i]) he.pp(i),ch=1;
		if(in[i]>1) onlyone = 0;
	}
	if(!ch){
		cout << "Never\n";
		for(int i=1;i<=n;i++) g[i].clear() , in[i]=0;
		return;
	}
	pair<int,int> p;
	ch=0;
	vector<int> topo;
	while(!he.empty()){
		if(!ch && he.size() > 1){
			ch = 1;
			int x = he.top();
			he.pop();
			int y = he.top();
			he.pp(x);
			p = make_pair(x,y);
		}
		int z = he.top();
		he.pop();
		topo.pb(z);
		for(int x : g[z]){
			in[x]--;
			if(!in[x]) he.pp(x);
		}
	}
	if(onlyone) {
		cout << "Same " ;
		for(int x:topo) cout << x << " " ;
		cout << "\n";
	}
	else{
		cout << "Different ";
		for(int x:topo) {
			if(x == p.fp) cout << p.sp << " ";
			else if (x == p.sp) cout << p.fp << " ";
			else cout << x << " ";
		}
		cout << "\n";
	}
	for(int i=1;i<=n;i++) g[i].clear(),in[i]=0; 
}
void use_ios(){ios::sync_with_stdio(0);cin.tie(0);}
int main(){
	use_ios();
	int t;
	for(cin >> t;t--;) solve();
	return 0;
}
