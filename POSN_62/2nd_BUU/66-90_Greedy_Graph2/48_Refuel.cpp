#include<bits/stdc++.h>
using namespace std;
#define FOE(x, a) for(auto& x : a)
#define vt vector
#define ar array
template<class A> bool umin(A& a, const A& b) {
	return a>b?a=b, 1:0;
} //return 1 if a>b and set a=b
const int mxN = 1e3;
int fuel[mxN], d[101][mxN];
priority_queue<pair<int,ar<int,2>>, vt<pair<int,ar<int,2>>>, greater<pair<int,ar<int,2>>>> pq;
vt<pair<int,int>> adj[mxN];
void solve() {
	int n,m,s,e,c;
	cin >> n >> m;
	for(int i=0; i<n; i++) cin >> fuel[i];
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].emplace_back(v, w);
		adj[v].emplace_back(u, w);
	}
	cin >> c >> s >> e;
	memset(d, 0x3f, sizeof(d));
	d[0][s] = 0;
	pq.emplace(0, ar<int,2>{s, 0});
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		if(u[1] + 1 <= c && d[u[1]+1][u[0]] > p.first+fuel[u[0]]) {
			d[u[1]+1][u[0]] = p.first + fuel[u[0]];
			pq.emplace(d[u[1]+1][u[0]], ar<int,2>{u[0], u[1]+1});
		}
		FOE(v, adj[u[0]]) {
			if(u[1]-v.second>=0 && d[u[1]-v.second][v.first] > p.first) {
				d[u[1]-v.second][v.first] = p.first;
				pq.emplace(d[u[1]-v.second][v.first], ar<int,2>{v.first, u[1]-v.second});
			}
		}
	}
	bool ch=0;
	int mn=1e9;
	for(int i=0; i<=c; i++)
		if(umin(mn, d[i][e])) ch=1;
	cout << (ch?mn:-99) << "\n";
	fill(adj, adj+n, vt<pair<int,int>>()); 
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
