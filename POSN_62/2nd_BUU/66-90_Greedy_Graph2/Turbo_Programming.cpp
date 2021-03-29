#include<bits/stdc++.h>
using namespace std;
#define vt vector
#define ar array
#define FOE(x, a) for(auto& x : a)
const int mxN = 1e3;
int d[mxN];
vt<pair<int,int>> adj[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,q;
	cin >> n >> m >> q;
	for(int i=0; i<m; i++) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u-1].emplace_back(v-1, w);
		adj[v-1].emplace_back(u-1, w);
	}
	priority_queue<pair<int,int>, vt<pair<int,int>>, greater<pair<int,int>>> pq;
	pq.emplace(0, 0);
	memset(d, 0x3f, sizeof(d));
	d[0] = 0;
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		FOE(v, adj[u]) {
			if(d[v.first]>p.first+v.second) {
				d[v.first]=p.first+v.second;
				pq.emplace(d[v.first], v.first);
			}
		}
	}
	while(q--) {
		int u;
		cin >> u;
		cout << (d[u-1]>1e9?-1:d[u-1]) << "\n";
	}
	return 0;
}
