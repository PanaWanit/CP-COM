#include<bits/stdc++.h>
using namespace std;
#define vt vector
const int mxN = 1e3;
vt<pair<int, int>> adj[mxN];
int d[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,s,e,a,b,c,t;
	cin >> n >> m >> s >> e >> a >> b >> c >> t;
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].emplace_back(v, w);
	}
	memset(d, 0x3f, sizeof(d));
	d[s] = 0;
	priority_queue<pair<int,int>, vt<pair<int,int>>, greater<pair<int,int>>> pq;
	pq.emplace(0, s);
	while(!pq.empty()) {
		int u = pq.top().second, p = pq.top().first;
		pq.pop();
		if(u == a && p<=t && d[b] > d[u]+c) {
			d[b] = d[u]+c;
			pq.emplace(d[b], b);
		}
		for(auto& v : adj[u]) {
			if(d[v.first] > p+v.second) {
				d[v.first] = p+v.second;
				pq.emplace(d[v.first], v.first);
			}
		}
	}
	cout << d[e] << "\n";
	return 0;
}
