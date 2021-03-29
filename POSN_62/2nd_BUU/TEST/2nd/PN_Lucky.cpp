#include<bits/stdc++.h>
using namespace std;
#define vt vector
#define ar array
#define FOE(x, a) for(auto& x : a)
const int mxN = 5e4;
vt<pair<int,int>> adj[mxN];
int lucky[mxN], d[31][mxN];
void solve() {
	int n, m , mxl, s, e;
	cin >> n >> m >> mxl >> s >> e;
	--s, --e;
	for(int i=0; i<n; i++) cin >> lucky[i];
	for(int i=0; i<m; i++) {
		int u,v,w;
		cin >> u >> v >> w;
		--u, --v;
		adj[u].emplace_back(v, w);
	}
	priority_queue<pair<int,ar<int,2>>, vt<pair<int,ar<int,2>>>, greater<pair<int,ar<int,2>>>> pq;
	memset(d, 0x3f, sizeof(d));
	pq.emplace(0, ar<int,2>{s, 0});
	d[0][s] = 0;
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		FOE(v, adj[u[0]]) {
			if(u[1] + 1 == lucky[v.first] && d[u[1]+1][v.first] > p.first + v.second) {
				d[u[1]+1][v.first] = p.first + v.second;
				pq.emplace(d[u[1]+1][v.first], ar<int,2>{v.first, u[1]+1});
			}
			else if(d[u[1]][v.first] > p.first + v.second) {
				d[u[1]][v.first] = p.first + v.second;
				pq.emplace(d[u[1]][v.first], ar<int,2>{v.first, u[1]});
			}
		}
	}
	cout << (d[mxl][e]>=1e9?-1:d[mxl][e]) << "\n";
	fill_n(adj,n,vt<pair<int,int>>());
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
