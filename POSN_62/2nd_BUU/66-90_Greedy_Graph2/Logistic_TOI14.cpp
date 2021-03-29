#include<bits/stdc++.h>
using namespace std;
#define ar array
#define vt vector
const int mxN = 100;
int fuel[mxN], d[2][101][mxN];
vt<pair<int,int>> adj[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,mxf,s,e;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> fuel[i];
	cin >> s >> e >> mxf >> m;
	--s, --e;
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		--u, -- v;
		adj[u].emplace_back(v, w);
		adj[v].emplace_back(u, w);
	}
	priority_queue<pair<int,ar<int,3>>, vt<pair<int,ar<int,3>>>, greater<pair<int, ar<int,3>>>> pq;
	pq.emplace(0, ar<int,3>{s, 0, 0});
	memset(d, 0x3f, sizeof(d));
	d[0][0][s] = 0;
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		if(u[1]+1 <= mxf && d[u[2]][u[1]+1][u[0]] > p.first+fuel[u[0]]) {
			d[u[2]][u[1]+1][u[0]] = p.first + fuel[u[0]];
			pq.emplace(d[u[2]][u[1]+1][u[0]], ar<int,3>{u[0], u[1]+1, u[2]});
		}
		if(!u[2] && d[1][mxf][u[0]] > p.first) {
			d[1][mxf][u[0]] = p.first;
			pq.emplace(d[1][mxf][u[0]], ar<int,3>{u[0], mxf, 1});
		}
		pq.pop();
		for(auto& v : adj[u[0]]) {
			if(u[1]-v.second >= 0 && d[u[2]][u[1]-v.second][v.first] > p.first) {
				d[u[2]][u[1]-v.second][v.first] = p.first;
				pq.emplace(p.first, ar<int,3>{v.first, u[1]-v.second, u[2]});
			}
		}
	}
	cout << d[1][mxf][e] << "\n";
	return 0;
}
