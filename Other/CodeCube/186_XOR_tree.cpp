#include<bits/stdc++.h>
using namespace std;
#define T pair<int, int>
#define vt vector
const int mxN = 1e5+10;
int d[mxN];
vt<T> adj[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n-1; ++i) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}
	queue<int> qu;
	qu.push(1);
	while(!qu.empty()) {
		int u = qu.front();
		qu.pop();
		for(auto& v : adj[u]) {
			if(!d[v.first]) {
				d[v.first]=d[u]^v.second;
				qu.push(v.first);
			}
		}
	}
	while(m--) {
		int u,v;
		cin >> u >> v;
		cout << (d[u]^d[v]) << "\n";
	}
	return 0;
}

