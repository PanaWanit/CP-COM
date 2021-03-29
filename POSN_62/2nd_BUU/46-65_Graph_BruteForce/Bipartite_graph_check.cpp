#include<bits/stdc++.h>
using namespace std;
#define vt vector
const int mxN = 1e5;
int n, color[mxN];
vt<int> adj[mxN];
bool dfs(int u, int now) {
	if(color[u] == now) return 1;
	if(color[u]!=0&&color[u]!=now) return 0;
	color[u] = now;
	for(auto& x : adj[u]) {
		if(!dfs(x, 3-now)) return 0;
	}
	return 1;
}
void solve() {
	int m;
	cin >> n >> m;
	while(m--) {
		int u,v;
		cin >> u >>v;
		--u, --v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bool ch;
	for(int i=0; i<n; i++) {
		if(!color[i]) ch=dfs(i, 1);
		if(!ch) {
			cout << "no\n";
			break;
		}
	}
	if(ch) cout << "yes\n";
	memset(color, 0, sizeof(color));
	fill_n(adj, n, vt<int>());
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
