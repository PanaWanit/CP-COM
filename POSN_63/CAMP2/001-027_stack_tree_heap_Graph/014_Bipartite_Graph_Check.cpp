#include<bits/stdc++.h>
using namespace std;

#define vt vector

const int mxN = 1e5+10;
vt<int> adj[mxN];
int col[mxN];
bool dfs(int u, int c) {
	if(col[u]!=0&&col[u]!=c) return 0;
	if(col[u]==c) return 1;
	col[u]=c;
	for(auto& v : adj[u])
		if(!dfs(v, 3-c)) return 0;
	return 1;
}
void solve() {
	int n,m;
	cin >> n >> m;
	while(m--) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bool ch=1;
	for(int i=1; i<=n; ++i) {
		if(!col[i]&&!dfs(i, 1)) {
			ch=0;
			break;
		}
	}
	cout << (ch?"yes\n":"no\n");
	for(int i=1; i<=n; ++i) adj[i].clear();
	memset(col, 0, sizeof(col[0])*(n+1));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		solve();
	return 0;
}

