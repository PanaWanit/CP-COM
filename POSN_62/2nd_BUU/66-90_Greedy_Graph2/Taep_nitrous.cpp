#include<bits/stdc++.h>
using namespace std;
#define vt vector
#define FOE(x, a) for(auto& x : a)
#define ar array
const int mxN = 5e3+1;
int d[101][mxN];
vt<pair<int,int>> adj[mxN];
priority_queue<pair<int,ar<int,2>>, vt<pair<int,ar<int,2>>>, greater<pair<int,ar<int,2>>>> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,t;
	cin >> n >> m >> t;
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].emplace_back(v, w);
		adj[v].emplace_back(u, w);
	}
	memset(d, 0x3f, sizeof(d));
	d[0][1] = 0;
	pq.emplace(0, ar<int,2>{1, 0});
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		FOE(v, adj[u[0]]) {
			if(u[1]+1<=t&&d[u[1]+1][v.first]>p.first+v.second/2) {
				d[u[1]+1][v.first]=p.first+v.second/2;
				pq.emplace(d[u[1]+1][v.first], ar<int,2>{v.first, u[1]+1});
			}
			if(d[u[1]][v.first]>p.first+v.second) {
				d[u[1]][v.first]=p.first+v.second;
				pq.emplace(d[u[1]][v.first], ar<int,2>{v.first, u[1]});
			}
		}
	}
	int mn=2e9;
	for(int i=0; i<=t; i++) mn=min(mn, d[i][n]);
	cout << d[0][n] << "\n";
	cout << mn << "\n";
	cout << d[0][n]-mn << "\n";
	return 0;
}
