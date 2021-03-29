#include<bits/stdc++.h>
using namespace std;
#define vt vector
#define ar array
#define FOE(x, a) for(auto& x : a)
const int mxN = 1e3+1;
vt<pair<int,int>> adj[mxN];
int d[2][mxN];
priority_queue<pair<int,ar<int,2>>, vt<pair<int,ar<int,2>>>, greater<pair<int,ar<int,2>>>> pq;
int n,m,mn=0,now;
int edge[mxN][3];
void find_dis(bool isfirst) {
	memset(d, 0x3f, sizeof(d));
	d[1][1] = 0;
	pq.emplace(0, ar<int,2> {1,1});
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		FOE(v, adj[u[0]]) {
			if(d[u[1]^1][v.first] > p.first+v.second) {
				d[u[1]^1][v.first] = p.first + v.second;
				pq.emplace(d[u[1]^1][v.first], ar<int,2> {v.first, u[1]^1});
			}
		}
	}
	if(isfirst) mn=d[0][n];
	else if(d[0][n] == mn) cout << now << " " << mn << "\n", exit(0);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].emplace_back(v, w);
		adj[v].emplace_back(u, w);
		edge[i][0] = u, edge[i][1] = v, edge[i][2] = w;
	}
	find_dis(1);
	fill(adj, adj+n, vt<pair<int,int>>());
	for(int i=0; i<m; i++) {
		int u = edge[i][0] , v = edge[i][1], w = edge[i][2];
		adj[u].emplace_back(v, w);
		adj[v].emplace_back(u, w);
		now=i+1,find_dis(0);
	}
	return 0;
}
