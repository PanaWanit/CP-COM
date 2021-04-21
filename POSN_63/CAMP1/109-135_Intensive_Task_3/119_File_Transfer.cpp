#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
vector<int> adj[mxN];
bool vis[mxN];
int b;
bool dfs(int u) {
	if(u==b) return 1;
	if(vis[u]) return 0;
	vis[u]=1;
	for(auto& x : adj[u])
		if(dfs(x)) return 1;
	return 0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,q;
	queue<int> qu;
	cin >> n >> m >> q;
	while(m--) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
	}
	while(q--) {
		int a;
		cin >> a >> b;
		cout << (dfs(a)?"Yes\n":"No\n");
		memset(vis, 0, sizeof(vis));
	}
	return 0;
}

