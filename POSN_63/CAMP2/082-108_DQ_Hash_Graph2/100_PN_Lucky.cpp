#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e4+10;
int d[33][mxN], luc[mxN];
vector<pair<int,int>> adj[mxN];
struct Node {
	int v,w,l;
	bool operator < (const Node&o) const {
		return w > o.w;
	}
};
priority_queue<Node> pq;
void query() {
	int n,m,l,s,e;
	cin >> n >> m >> l >> s >> e;
	for(int i=1; i<=n; ++i)
		cin >> luc[i];
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
	}
	memset(d, 0x3f, sizeof(d));
	d[0][s]=0;
	pq.push({s, 0, 0});
	while(!pq.empty()) {
		int u = pq.top().v, w = pq.top().w, luck = pq.top().l;
		pq.pop();
		for(auto& x : adj[u]) {
			if(luc[x.first]==luck+1 && d[luck+1][x.first]>w+x.second) {
				d[luck+1][x.first] = w+x.second;
				pq.push({x.first, d[luck+1][x.first], luck+1});
			}
			else if(d[luck][x.first]>w+x.second) {
				d[luck][x.first] = w+x.second;
				pq.push({x.first, d[luck][x.first], luck});
			}
		}
	}
	cout << (d[l][e]>1e9?-1:d[l][e]) << "\n";
	for(int i=1; i<=n; ++i)
		adj[i].clear();
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

