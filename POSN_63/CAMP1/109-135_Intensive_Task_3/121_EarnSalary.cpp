#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+10;
int node[mxN];
vector<int> adj[mxN];
void dfs(int u) {
	for(auto& x : adj[u])
		node[x]+=node[u], dfs(x);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n-1; ++i) {
		int u,v;
		cin >> v >> u;
		adj[u].push_back(v);
	}
	while(m--) {
		int c,d;
		cin >> c >> d;
		node[c]+=d;
	}
	dfs(1);
	for(int i=1; i<=n; ++i)
		cout << node[i] << "\n";
	return 0;
}

